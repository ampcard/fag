function verinome() {
    nome = prompt("Digite seu nome");
    soma = 0;
    for (let i in nome) {
        soma += parseInt(i);

    }

    if (soma <= 3) {
        alert("O nome está inválido!");
        verinome();
    } else {

    }
}
verinome();


function verificaIdade() {
    idade = parseInt(window.prompt("Qual sua idade?"));
    verifica = false;

    for (let i = 1; i < 150; i++) {
        if (idade == i) {
            verifica = true;
            break;
        }
    }
    if (verifica == false) {
        alert("Idade precisa estar entre 0 e 150!");
        verificaIdade();
    }
}
verificaIdade();

// O resto não encontrei uma maneira de fazer com o FOR.
function versalar() {
    salario = parseFloat(prompt("Qual o seu salário?"));

    if (salario <= 0) {
        alert("O salário precisa ser maior que 0!!");
        versalar();
    }
}
versalar();

function versexo() {
    sexo = prompt("Digite seu gênero:").toUpperCase()[0];
    if ((sexo != "F") && (sexo != "M")) {
        alert("O gênero está inválido");
        versexo();
    } else {
        if (sexo == "F") {
            sexo = "feminino";
        } else {
            sexo = "masculino";
        }
    }
}
versexo();

function verciv() {
    civil = prompt("Digite seu estado civil:").toUpperCase()[0];
    if (civil != "C" && civil != "S" && civil != "V" && civil != "D") {
        alert("O estado civil está inválido!");
        verciv();
    } else {
        if (civil == "C") {
            civil = "casado(a)";
        } else if (civil == "S") {
            civil = "solteiro(a)";
        } else if (civil == "V") {
            civil = "viúvo(a)";
        } else if (civil == "D") {
            civil = "divorciado(a)";
        }
    }
}
verciv();
alert(`Seu nome é ${nome}, você tem ${idade} anos, é do gênero ${sexo}, fatura R$ ${salario} por mês e está ${civil}.`);