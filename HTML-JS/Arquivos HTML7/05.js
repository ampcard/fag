function userInput() {
    const CODIGO_COMPANHIA = window.prompt("Código da companhia aérea [A, B, C]").toUpperCase();
    const QTDE_PASSAGENS = parseInt(window.prompt("Quantidade de passagens"));
    
    if (QTDE_PASSAGENS < 1 || isNaN(QTDE_PASSAGENS)) {
        alert("Quantidade de passagens inválida!\n\n - Precisa ser um número inteiro maior que 01 (um)");
        userInput();
    }

    calculateTickets(CODIGO_COMPANHIA, QTDE_PASSAGENS);
}


function calculateTickets(codigo, qtde) {
    let valor_total = 1.0;

    switch(codigo) {
        case "A":
            valor_total = qtde * 180.0;
            break;
        case "B":
            valor_total = qtde * 195.0;
            break;
        case "C":
            valor_total = qtde * 200.0;
            break;
        default:
            alert("Código de companhia inválido!");
            userInput();
    }

    let valor_desconto = valor_total - valor_total * (10 / 100);

    alert(`Valor total das ${qtde} passagens com 10% de desconto na companhia ${codigo}:\n\nR$${valor_desconto}`);
}


userInput();
