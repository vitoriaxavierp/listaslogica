while True:
      print("Para divisão digite '/' ")
      print("Para multiplicação digite '*' ")
      print("Para subtração digite '-' ")
      print("Para soma digite '+' ")
      print("Para sair digite digite 'S' ")
op = str(input("Qual o tipo de operação?: ")).strip()

if op.upper()=="S":
      print("Programa encerrado")
      break

if op in ['+', '-', '*', '/']:       
        n = float(input("Digite o primeiro número:"))
        n2 = float(input("Digite o segundo número:"))

        if op=="+":
            print(n+n2)
      
        elif op=="-":
            print(n-n2)
      
        elif op=="*":
            print(n*n2)
      
        elif op=="/":
            if (n2!=0):
                print(n/n2)
            else:
                print("A divisão por 0 não é permitida")
else:
    print("Operação inválida")
