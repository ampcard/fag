function getNumbers() {
    let n1 = parseFloat(window.prompt("Primeiro valor"));
    let n2 = parseFloat(window.prompt("Segundo valor"));

    if (isNaN(n1) || isNaN(n2)) {
        alert("Por favor, insira dois números!");
        getNumbers();
    } else {
        let maior = Math.max(n1, n2), menor = Math.min(n1, n2);

        calculatePercentage(menor, maior);
    }

}


function calculatePercentage(menor, maior) {
    let porcentagem = (menor / maior) * 100;

    alert(`${menor} equivale a ${(porcentagem % 1 != 0) ? porcentagem.toFixed(4) : porcentagem.toFixed(1)}% de ${maior}`)
}


getNumbers();
