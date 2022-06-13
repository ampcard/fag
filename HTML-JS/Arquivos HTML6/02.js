function userInput() {
    let raio = parseFloat(window.prompt("Insira o raio da lata em cm"));
    let altura = parseFloat(window.prompt("Insira a altura da lata em cm"));

    return volume(raio, altura);
}


function volume(raio, altura) {
    let volume = (Math.PI * (raio ** 2) * altura);

    return volume.toFixed(4);
}


console.log(`Volume da lata: ${userInput()}cm³`);
