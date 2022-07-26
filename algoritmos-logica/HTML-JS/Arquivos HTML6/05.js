let valor = parseFloat(window.prompt("Valor da prestação em reais"));
let taxa = parseFloat(window.prompt("Valor da taxa mensal (%)"));
let tempo = parseFloat(window.prompt("Quantos meses atrasados"));

let prestacao = valor + (valor * (taxa / 100) * tempo);

console.log("O valor da prestação em atraso será de R$" + prestacao.toFixed(2));