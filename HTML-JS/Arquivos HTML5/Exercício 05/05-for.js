function userInput() {
    let opcao = window.prompt("Vertical ou horizontal").toLowerCase();
    let resultado = "";

    for (let i = 1; i <= 20; i++) {

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
    }

    if (resultado != "1") {
        alert(resultado);
    }
}


userInput();
