Algoritmo "volumeLata"

Var
      raio, altura, volume: real

Inicio
      escreva("Altura da lata em cm: ")
      leia(altura)
      escreva("Raio da lata em cm: ")
      leia(raio)
      
      volume <- 3.14159 * (raio ^ 2) * altura
      
      escreval()
      escreval("O volume da lata de óleo é de ",volume:1:2,"cm³")

Fimalgoritmo