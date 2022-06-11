let valor = parseFloat(window.prompt("Valor em reais (R$)"));

let notas = [100, 50, 20, 10, 5, 2, 1];

for (let nota of notas) {
    quantidade = parseInt(valor / nota);
    valor = valor % nota;
    if (quantidade > 0){
        console.log(`${quantidade} notas de R$${nota}`);
    }
}