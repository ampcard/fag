Algoritmo "idadeDias"

Var
   anos, meses, dias, dia, idade_dias: inteiro

Inicio
   // não inclui ano bissexto, obviamente
   escreva("Informe sua idade em anos: ")
   leia(anos)
   escreva("Informe há quantos meses foi o seu aniversário: ")
   leia(meses)
   escreva("Informe quantos dias se passaram do seu aniversário: ")
   leia(dias)

   idade_dias <- (anos * 365) + (meses * 30) + dias

   escreval()
   escreval("Você já viveu",idade_dias," dias!")

Fimalgoritmo