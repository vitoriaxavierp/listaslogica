n = input("Digite o nome do funcionário: ")
sa = float(input("Digite o salário atual do funcionário: R$ "))

if sa >= 0 and sa <= 400:
    pa = 15
elif sa > 400 and sa <= 700:
    pa = 12
elif sa > 700 and sa <= 1000:
    pa = 10
elif sa > 1000 and sa <= 1800:
    pa = 7
elif sa > 1800 and sa <= 2500:
    pa = 4
else:
    pa = 0

ns = sa + (sa * pa / 100)

print(f"\nNome do funcionário: {n}")
print(f"Percentual de aumento: {pa}%")
print(f"Salário atual: R$ {sa:.2f}")
print(f"Novo salário: R$ {ns:.2f}")
