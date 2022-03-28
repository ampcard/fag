Algoritmo "calcularExpressao"

Var
   a, b, c:inteiro
   d, r, s: real

Inicio
      escreva("Informe um valor: ")
      leia(a)
      escreva("Informe outro valor: ")
      leia(b)
      escreva("Informe mais um valor: ")
      leia(c)

      d <- (a + b) ^ 2
      s <- (b + c) ^ 2
      r <- (d + s) / 2

      escreval()
      escreval("Resultado:",r)

Fimalgoritmo