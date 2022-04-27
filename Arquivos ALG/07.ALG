Algoritmo "areaLivre"

Var
   larg_terr, comp_terr, larg_casa, comp_casa, area_livre: real

Inicio
      escreva("Largura do terreno em metros: ")
      leia(larg_terr)
      escreva("Comprimento do terreno em metros: ")
      leia(comp_terr)
      escreva("Largura da casa em metros: ")
      leia(larg_casa)
      escreva("Comprimento da casa em metros: ")
      leia(comp_casa)
      
      area_livre <- (larg_terr * comp_terr) - (larg_casa * comp_casa)
      
      escreval()
      escreval("A área livre do terreno é de",area_livre,"m²")

Fimalgoritmo