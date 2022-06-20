function userInput() {
    const CODIGO_COMPANHIA = window.prompt("Código da companhia aérea [A, B, C]").toUpperCase();
    const QTDE_PASSAGENS = parseInt(window.prompt("Quantidade de passagens"));
    
    if (QTDE_PASSAGENS < 1 || isNaN(QTDE_PASSAGENS)) {
        alert("Quantidade de passagens inválida!\n\n - Precisa ser um número inteiro maior que 01 (um)");
        userInput();
    }
    
    alert(`Valor total das ${QTDE_PASSAGENS} passagens com 10% de desconto na companhia ${CODIGO_COMPANHIA}:\n\nR$${calculateTickets(CODIGO_COMPANHIA, QTDE_PASSAGENS)}`);
}


function calculateTickets(codigo, qtde) {
    let preco_passagem = 0.0;

    switch(codigo) {
        case "A":
            preco_passagem = 180.0;
            break;
        case "B":
            preco_passagem = 195.0;
            break;
        case "C":
            preco_passagem = 200.0;
            break;
        default:
            alert("Código de companhia inválido!");
            userInput();
    }

    let valor_total = qtde * preco_passagem;

    return valor_total - valor_total * (10 / 100).toFixed(2);
}


userInput();
