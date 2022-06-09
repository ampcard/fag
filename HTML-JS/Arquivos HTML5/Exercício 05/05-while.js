function userInput() {
    let opcao = window.prompt("Vertical ou horizontal").toLowerCase();
    let i = 1;
    let resultado = "";

    while (i <= 20) {

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
    }

    if (resultado != "1") {
        alert(resultado);
    }
}


userInput();
