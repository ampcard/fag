Algoritmo "converterTempo"

Var
	temp: inteiro
	horas, minutos, segundos: real

Inicio
	escreva("Tempo de duração do evento em segundos: ")
	leia(temp)

	horas <- temp div 3600
	minutos <- (temp mod 3600) div 60
	//temp - ((temp div 3600 * 3600) + (minutos * 60)
	segundos <- temp - ((horas * 3600) + (minutos * 60))

	escreval()
	escreval("A duração do evento em horas, minutos e segundos será de:")
	escreval(horas,"hrs,",minutos,"min e",segundos,"s.")

Fimalgoritmo