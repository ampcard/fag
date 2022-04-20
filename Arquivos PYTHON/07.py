largura_terreno = float(input("Informe a largura do terreno: "))
comprimento_terreno = float(input("Informe o comprimento do terreno: "))
largura_casa = float(input("Informe a largura da casa: "))
comprimento_casa = float(input("Informe o comprimento da casa: "))

area_livre = (largura_terreno * comprimento_terreno) - (largura_casa * comprimento_casa)

print(f"Área livre do terreno: {area_livre:.1f}m²")
