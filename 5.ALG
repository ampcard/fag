Algoritmo "salarioLiquido"

Var
   salario_liquido, salario_bruto, descontos, adicionais: real

Inicio
      escreva("Salário bruto: R$")
      leia(salario_bruto)
      escreva("Descontos: R$")
      leia(descontos)
      escreva("Adicionais: R$")
      leia(adicionais)
      
      salario_liquido <- salario_bruto - descontos + adicionais
      
      escreval()
      escreval("Salário líquido: R$",salario_liquido:1:2)

Fimalgoritmo