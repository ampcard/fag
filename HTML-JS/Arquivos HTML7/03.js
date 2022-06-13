// Pfeffer

function getNumbers() {
    let n1 = parseFloat(window.prompt("Primeiro valor"));
    let n2 = parseFloat(window.prompt("Segundo valor"));

    if (isNaN(n1) || isNaN(n2)) {
        alert("Por favor, insira dois números!");
        getNumbers();
    } else {
        // não, eu não quis usar o Math.max e Math.min
        let maior = n1, menor = n1;

        if (n2 > maior) {
            maior = n2;
        }

        if (n2 < menor) {
            menor = n2;
        }

        calculatePercentage(menor, maior);
    }

}

function calculatePercentage(menor, maior) {
    let porcentagem = (menor / maior) * 100;

    // * verificação pra não mostrar as casas decimais, caso elas sejam igual a 0
    alert(`${menor} equivale a ${(porcentagem % 1 != 0) ? porcentagem.toFixed(4) : porcentagem.toFixed(1)}% de ${maior}`)
}

getNumbers();
