Algoritmo "custoCarro"

Var
   valor_inicial, extra, valor_final: real

Inicio
      escreva("Valor do carro: R$")
      leia(valor_inicial)
      
      // distribuidor + impostos
      extra <- 45 + 28
      valor_final <- valor_inicial + (valor_inicial * (extra / 100))
      
      escreva(valor_final)

Fimalgoritmo