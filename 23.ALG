Algoritmo "infoAluno"

Var
   nome: caractere
   matricula: inteiro
   nota1, nota2, media: real

Inicio
      escreva("Nome do aluno: ")
      leia(nome)
      escreva("Nº matrícula: ")
      leia(matricula)
      escreva("1º nota: ")
      leia(nota1)
      escreva("2º nota: ")
      leia(nota2)
      
      media <- (nota1 + nota2) / 2

      escreval()
      escreval("Nome:",nome)
      escreval("Nº matrícula:",matricula)
      escreval("Soma das duas notas:",nota1 + nota2)
      escreval("Média das notas:",media)

Fimalgoritmo