function getUserInput() {
    let qtde = parseInt(window.prompt("Quantidade de clientes que deseja verificar"));

    let faixas = [0, 0, 0, 0];
    let credito = 0.0;

    for (let i = 1; i <= qtde; i++) {
        var saldo = parseFloat(window.prompt("Saldo médio no último ano do " + i + "° cliente:"));

        if (saldo >= 0 && saldo <= 200) {
            faixas[0] += 1;
        } else if (saldo > 200 && saldo <= 400) {
            credito = saldo * (20 / 100);
            faixas[1] += 1;
        } else if (saldo > 400 && saldo <= 600) {
            credito = saldo * (30 / 100);
            faixas[2] += 1;
        } else if (saldo > 600) {
            credito = saldo * (40 / 100);
            faixas[3] += 1;
        } else {
            alert("aqui");
        }

        console.log(`Saldo médio: R$${saldo.toFixed(2)}\nCrédito: R$${credito.toFixed(2)}`);
    }

    return faixas;
}


let resultado = getUserInput();
console.log(`Quantidade de pessoas na:\nFaixa 01: ${resultado[0]}\nFaixa 02: ${resultado[1]}\nFaixa 03: ${resultado[2]}\nFaixa 04: ${resultado[3]}\n`);
