Algoritmo "prestacao"

Var
   valor, taxa, prestacao: real
   temp: inteiro

Inicio
      escreva("Insira o valor da prestação: R$")
      leia(valor)
      escreva("Insira o valor da taxa: R$")
      leia(taxa)
      escreva("Informe quantos meses de prestação estão atrasados:")
      leia(temp)

      prestacao <- valor + (valor * (taxa / 100 ) * temp)
      
      escreval()
      escreval("O valor da prestação com os atrasos será de R$",prestacao:1:2)


Fimalgoritmo