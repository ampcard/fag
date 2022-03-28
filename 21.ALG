Algoritmo "inverterVariavel"

Var
   a, b, temp: caractere

Inicio
      escreva("Valor de A: ")
      leia(a)
      escreva("Valor de B: ")
      leia(b)
      
      temp <- a
      a <- b
      b <- temp
      
      escreval()
      escreval("Valores invertidos:")
      escreval("A:",a)
      escreval("B:",b)

Fimalgoritmo