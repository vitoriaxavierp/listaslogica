#include <stdio.h>
#include <string.h>

#define TAM 5


typedef struct {
    char nome[50];
    char endereco[100];
    int idade;
    char telefone[20];
} Pessoa;

void cadastrar(Pessoa agenda[]);
void pesquisarIdade(Pessoa agenda[]);
void classificarPorNome(Pessoa agenda[]);
void alterarRegistro(Pessoa agenda[]);

int main() {
    Pessoa agenda[TAM];
    int opcao;

    do {
        printf("\nMenu da Agenda:\n");
        printf("1 - Cadastro\n");
        printf("2 - Pesquisa de registro por idade\n");
        printf("3 - Classificacao alfabética\n");
        printf("4 - Alteracao de registro digitado com erro\n");
        printf("5 - Sair do Menu\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); 

        switch (opcao) {
            case 1:
                cadastrar(agenda);
                break;
            case 2:
                pesquisarIdade(agenda);
                break;
            case 3:
                classificarPorNome(agenda);
                break;
            case 4:
                alterarRegistro(agenda);
                break;
            case 5:
                printf("Saindo do menu...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}

void cadastrar(Pessoa agenda[]) {
    printf("\n--- Cadastro ---\n");
    for (int i = 0; i < TAM; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: ");
        fgets(agenda[i].nome, sizeof(agenda[i].nome), stdin);
        agenda[i].nome[strcspn(agenda[i].nome, "\n")] = 0; 
        printf("Endereco: ");
        fgets(agenda[i].endereco, sizeof(agenda[i].endereco), stdin);
        agenda[i].endereco[strcspn(agenda[i].endereco, "\n")] = 0;

        printf("Idade: ");
        scanf("%d", &agenda[i].idade);
        getchar();

        printf("Telefone: ");
        fgets(agenda[i].telefone, sizeof(agenda[i].telefone), stdin);
        agenda[i].telefone[strcspn(agenda[i].telefone, "\n")] = 0;
    }
}

void pesquisarIdade(Pessoa agenda[]) {
    int idade;
    int encontrou = 0;

    printf("\n--- Pesquisa por Idade ---\n");
    printf("Digite a idade que deseja pesquisar: ");
    scanf("%d", &idade);

    for (int i = 0; i < TAM; i++) {
        if (agenda[i].idade == idade) {
            printf("\nRegistro encontrado:\n");
            printf("Nome: %s\nEndereco: %s\nTelefone: %s\n", agenda[i].nome, agenda[i].endereco, agenda[i].telefone);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum registro encontrado com a idade %d.\n", idade);
    }
}

void classificarPorNome(Pessoa agenda[]) {
    Pessoa temp;

    for (int i = 0; i < TAM - 1; i++) {
        for (int j = 0; j < TAM - i - 1; j++) {
            if (strcmp(agenda[j].nome, agenda[j + 1].nome) > 0) {
                temp = agenda[j];
                agenda[j] = agenda[j + 1];
                agenda[j + 1] = temp;
            }
        }
    }

    printf("\n--- Agenda Ordenada por Nome ---\n");
    for (int i = 0; i < TAM; i++) {
        printf("%s - %s - %d anos - %s\n", agenda[i].nome, agenda[i].endereco, agenda[i].idade, agenda[i].telefone);
    }
}

void alterarRegistro(Pessoa agenda[]) {
    char nome[50];
    int encontrou = 0;

    printf("\n--- Alteracao de Registro ---\n");
    printf("Digite o nome do registro que deseja alterar: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    for (int i = 0; i < TAM; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            printf("\nRegistro encontrado. Digite os novos dados:\n");
            printf("Nome: ");
            fgets(agenda[i].nome, sizeof(agenda[i].nome), stdin);
            agenda[i].nome[strcspn(agenda[i].nome, "\n")] = 0;

            printf("Endereco: ");
            fgets(agenda[i].endereco, sizeof(agenda[i].endereco), stdin);
            agenda[i].endereco[strcspn(agenda[i].endereco, "\n")] = 0;

            printf("Idade: ");
            scanf("%d", &agenda[i].idade);
            getchar();

            printf("Telefone: ");
            fgets(agenda[i].telefone, sizeof(agenda[i].telefone), stdin);
            agenda[i].telefone[strcspn(agenda[i].telefone, "\n")] = 0;

            encontrou = 1;
            break;
        }
    }

    if (!encontrou) {
        printf("Registro nao encontrado.\n");
    }
}
