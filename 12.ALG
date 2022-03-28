Algoritmo "distanciaPontos"

Var
   x1, x2, y1, y2: inteiro
   distancia: real

Inicio
      escreval("Localização do ponto 1 no plano")
      escreva("x1: ")
      leia(x1)
      escreva("y1: ")
      leia(y1)

      escreval("Localização do ponto 2 no plano")
      escreva("x2: ")
      leia(x2)
      escreva("y2: ")
      leia(y2)
      
      // d = sqrt((x1-x2) ** 2 + (y1 - y2) ** 2))
      distancia <- raizq((x1 - x2) ^ 2 + (y1 - y2) ^ 2)
      
      escreval()
      escreval("A distância entre os pontos no plano é ",distancia:1:1)

Fimalgoritmo