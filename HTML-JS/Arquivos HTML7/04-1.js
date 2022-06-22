function contarNotas(valor, cont = 0) {
    let notas = [100, 50, 20, 10, 5, 2, 1];

    if (valor < 1) {
        return 1;
    }

    console.log(`${parseInt(valor / notas[cont])} ${(parseInt(valor / notas[cont]) > 1) ? 'notas' : 'nota'} de R$${notas[cont]}`);
    
    return contarNotas(valor % notas[cont], cont += 1);
}


let valor = parseFloat(window.prompt("Valor em reais (R$)"));

contarNotas(valor)