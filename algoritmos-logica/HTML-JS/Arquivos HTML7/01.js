function getUserInput() {
    let convidados = parseInt(window.prompt("Quantidade de pessoas convidadas"));
    let cento_salgados = parseFloat(window.prompt("Valor cento de salgados em reais (R$)"));
    let refrigerante = parseFloat(window.prompt("Valor garrafa de refrigerante de 2L em reais (R$)"));
    let cento_doces = parseFloat(window.prompt("Valor cento de doces em reais (R$)"));

    return calculateQuantity(convidados, [cento_salgados, cento_doces, refrigerante])
}


function calculateQuantity(convidados, preco) {
    // 1 → 15s, 10d, .5L
    // 10 → 1
    // 1  → 0.5

    let qtde_salgados = (1 / 15) * convidados;
    let qtde_doces = (convidados / 100) * 10;
    let qtde_refri = (convidados * 0.5);

    return calculatePrice(qtde_salgados, qtde_doces, qtde_refri, preco)
}


function calculatePrice(s, d, r, preco) {
    let preco_s = (s * preco[0]);
    let preco_d = (d * preco[1]);
    let preco_r = (r * preco[2]);
    
    let custo_total = (preco_d + preco_r + preco_s).toFixed(2);

    console.log(`-=-=- QUANTIDADES -=-=-=-`);
    console.log(`Centos de salgados: ${s}\nCento de doces: ${d}\nGarrafas de refrigerante: ${r}`);
    console.log(`-=-=- CUSTOS -=-=-=-`);
    console.log(`Centos de salgados: ${preco_s}\nCento de doces: ${preco_d}\nGarrafas de refrigerante: ${preco_r}`);
    console.log(`Custo total: R$${custo_total}`);
}


getUserInput();
