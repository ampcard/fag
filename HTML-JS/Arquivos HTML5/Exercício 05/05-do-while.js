function userInput() {
    let opcao = window.prompt("Vertical ou horizontal");
    let i = 1;
    let resultado = "";

    do {
        if (i == 1) {
            resultado += i;
        } else {
            if (opcao == "vertical") {
                resultado += ("\n" + i);
            } else if (opcao == "horizontal") {
                resultado += (" → " + i);
            } else {
                alert("Opção inválida! Tente novamente...");
                userInput();
                break;
            }
        }

        i++;
    } while (i <= 20)

    if (resultado != "1") {
        alert(resultado);
    }
}


userInput();
