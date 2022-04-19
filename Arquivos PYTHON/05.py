salario_bruto = float(input("Insira o salário bruto: R$"))
descontos = float(input("Informe o valor dos descontos: R$"))
adicionais = float(input("Informe o valor dos descontos: R$"))


salario_liquido = (salario_bruto - descontos) + adicionais

print(f"O salário líquido será de R${salario_liquido:.2f}")
