Algoritmo "fibonacci"

Var
   a, b, soma: inteiro

Inicio
   a <- 1
   b <- 1
   soma <- a + b
   
   escreval("Sequência de Fibonacci")
   escreval()
   escreva(a, b, soma)

   a <- soma + b
   b <- a + soma
   soma <- a + b

   escreva(a, b, soma)
   
   a <- soma + b
   
   escreval(a)

Fimalgoritmo