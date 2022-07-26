do {
    let paisA = parseInt(window.prompt("População do país A"));
    let taxaA = parseFloat(window.prompt("Taxa de crescimento do país A (%)")) / 100;
    let paisB = parseInt(window.prompt("População do país B"));
    let taxaB = parseFloat(window.prompt("Taxa de crescimento do país B (%)")) / 100;
    var cont = 0;

    if (paisA >= paisB) {
        alert("A população de A já é igual ou superior que a população de B!");
    } else if (taxaA <= taxaB) {
        alert("A taxa de crescimento de A deve ser maior que a taxa de B!");
    } else {
        do {
            paisA += paisA * taxaA;
            paisB += paisB * taxaB;
            cont += 1;
        } while (paisA <= paisB);

        alert(`Serão necessários ${cont} anos para a população de A ser igual ou superior a de B.`);
    }

    continuar = window.prompt("Deseja realizar outra conta? [S / N]").toUpperCase()[0];
    if (continuar == "N") {
        break;
    }

} while (continuar == "S");