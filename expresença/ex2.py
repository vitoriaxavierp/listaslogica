def main():

    s = 0
    total_elementos = 0
    maior = None
    menor = None

    f1c = 0
    f2c = 0
    f3c = 0
    f4c = 0
    f5c = 0

    f1t = 0
    f2t = 0
    f3t = 0
    f4t = 0
    f5t = 0

    tp = 0
    ti = 0

    while True:
        valor = float(input("Digite um valor (ou digite 'sair' para encerrar): "))

        s += valor
        total_elementos += 1

        if maior is None or valor > maior:
            maior = valor
        if menor is None or valor < menor:
            menor = valor

        if valor < 0:
            f1c += 1
            f1t += valor
        elif valor >= 0 and valor < 15:
            f2c += 1
            f2t += valor
        elif valor >= 15 and valor < 100:
            f3c += 1
            f3t += valor
        elif valor >= 100 and valor < 1000:
            f5c += 1
            f5t += valor
        elif valor >= 1000:
            f4c += 1
            f4t += valor

        if valor % 2 == 0:
            tp += 1
        else:
            ti += 1

        continuar = input("Deseja continuar? (s/n): ").strip().lower()
        if continuar != 's':
            break

    if total_elementos > 0:
        media = s / total_elementos
    else:
        media = 0

    print("\nResultados:")
    print(f"1. Média aritmética: {media:.2f}")
    print(f"2. Maior elemento: {maior}")
    print(f"3. Menor elemento: {menor}")
    print(f"4. Contagem de elementos por faixa:")
    print(f"   Faixa 1 (Elementos < 0): {f1c} (Total: {f1t})")
    print(f"   Faixa 2 (Elementos >=0 e < 15): {f2c} (Total: {f2t})")
    print(f"   Faixa 3 (Elementos >=15 e < 100): {f3c} (Total: {f3t})")
    print(f"   Faixa 4 (Elementos >= 1000): {f4c} (Total: {f4t})")
    print(f"   Faixa 5 (Elementos >= 100 e < 1000): {f5c} (Total: {f5t})")
    print(f"5. Total de números pares: {tp}")
    print(f"6. Total de números ímpares: {ti}")

if __name__ == "__main__":
    main()
