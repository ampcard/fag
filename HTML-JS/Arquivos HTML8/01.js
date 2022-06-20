function userInput(x = null, y = null) {
    let n1, n2;

    if (x == null || y == null) {
        n1 = Number(window.prompt("Primeiro número"));

        if (!numberValidation(n1)) {
            alert("Insira um número!");
            userInput();
        }

        n2 = Number(window.prompt("Segundo número"));

        if (!numberValidation(n2)) {
            alert("Insira um número!");
            userInput();
        }
    } else {
        n1 = x, n2 = y;
    }

    getOperator(n1, n2);


    function getOperator(n1, n2) {
        const operacao = window.prompt("Insira a operação desejada:\n[ + ] SOMA\n[ - ] SUBTRAÇÃO\n[ * ] MULTIPLICAÇÃO\n[ / ] DIVISÃO");
    
        switch(operacao) {
            case "+":
                alert(`${n1} ${operacao} ${n2} = ${soma(n1, n2)}`);
                tryAgain(n1, n2);
            case "-":
                alert(`${n1} ${operacao} ${n2} = ${subtracao(n1, n2)}`);
                tryAgain(n1, n2);
            case "*":
                alert(`${n1} ${operacao} ${n2} = ${multiplicacao(n1, n2)}`);
                tryAgain(n1, n2);
            case "/":
                alert(`${n1} ${operacao} ${n2} = ${divisao(n1, n2)}`);
                tryAgain(n1, n2);
            default:
                alert("Operação inválida!");
                getOperator(n1, n2);
        }
    }
}


function tryAgain(x, y) {
    const opcao = window.prompt("Deseja realizar outra operação? [S / N]").toUpperCase().charAt(0);

    if (opcao == "S") {
        reuseNumbers(x ,y);
    } else if (opcao == "N") {
        throw new Error("Melhor jeito de finalizar a aplicação");
    } else {
        alert("Operação inválida!");
        tryAgain(x, y);
    }


    function reuseNumbers(x, y) {
        const reusarNumeros = window.prompt("Deseja usar os números anteriores? [S / N]").toUpperCase().charAt(0);

        if (reusarNumeros == "S") {
            userInput(x, y);
        } else if (reusarNumeros == "N") {
            userInput();
        } else {
            alert("Operação inválida!");
            reuseNumbers(x, y);
        }
    }
}


function numberValidation(x) {
    if (isNaN(x)) {
        return false;
    }

    return true;
}


function soma(n1, n2) {
    return n1 + n2;
}


function subtracao(n1, n2) {
    return n1 - n2;
}


function multiplicacao(n1, n2) {
    return n1 * n2;
}


function divisao(n1, n2) {
    return ((n1 / n2) == Infinity) ? "Impossível dividir por 0!" : ((n1 / n2) % 1 != 0) ? (n1 / n2).toFixed(4) : (n1 / n2).toFixed(1);
}


userInput();
