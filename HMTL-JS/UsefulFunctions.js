function CalcularPorcentagem(valorParcial, valorTotal) {
    // (100 * valorParcial) / valorTotal;
    return (100 * valorParcial) / valorTotal;
}


function PorcentagemSoma(valor, taxa) {
    // se quiser subtrair x% do valor só precisa alterar o operador para "-"
    return (valor + (valor * (taxa / 100)))
}


function DataAtual() {
    let hoje = new Date();
    let ano_atual = hoje.getFullYear();
    let mes_atual = hoje.getMonth() + 1;
    let dia_atual = hoje.getDate();

    return [hoje, ano_atual, mes_atual, dia_atual];
}


function VerificaAnoBissexto(ano) {
    if ((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}


function ClassificarTriangulo(a, b, c) {
    if (a < (b + c) && b < (a + c) && c < (a + b)) {

        if (a == b && b == c) {
            return "equilátero";
        } else if (a != b && b != c && c != a) {
            return "escaleno;"
        } else {
            return "isósceles";
        }

    } else {
        return "não pode formar um triângulo";
    }
}


function Fatorial(numero) {
    if (numero != 1) {
        return Fatorial(numero - 1) * numero;
    } else {
        return 1;
    }
}


function SegundosParaHMS(segundos) {
    // horas minutos segundos
    return [parseInt(segundos / 3600), parseInt(segundos % 3600) / 60, parseInt(segundos % 3600) % 60];
}


function Celsius2Fahrenheit(celsius) {
    return ((9 * celsius + 160) / 5);
}


function Fahrenheit2Celsius(fahrenheit) {
    return (fahrenheit - 32) * (5 / 9);
}


function CalcularVolume(raio, altura) {
    return (Math.PI * (raio ** 2) * altura);
}


function FibonnaciUpToNUsingArray(num){
    let temp;
    let a = 0;
    let b = 1
    let sequencia;

    if (num <= 0) {
        return "Insira um número inteiro e positivo!";
    } else {
        while (a < num) {
            sequencia.push(a);
            temp = a;
            a = b;
            b = temp + b;
        }
    
        return sequencia;
    }
}


function FibonnaciUpToN(num) {
    let temp;
    let a = 0;
    let b = 1;

    if (num <= 0) {
        return "Insira um número inteiro positivo!";
    } else {
        while (a < num) {
            console.log(a);
            temp = a;
            a = b;
            b = temp;
        }
    }
}


function FibonnaciUpToNthTermUsingArray(num) {
    let temp;
    let a = 0;
    let b = 1;
    let contador = 0;
    let sequencia = [];

    if (num <= 0) {
        console.log("Insira um número inteiro positivo!");
    } else if (num == 1) {
        console.log(a)
    } else {
        while (contador < num) {
            sequencia.push(a)
            temp = a + b;
            a = b;
            b = temp;
            contador++;
        }

        return sequencia;
    }
}


function FibonnaciUpToNthTerm(num) {
    let temp;
    let a = 0;
    let b = 1;
    let contador = 0;

    if (num <= 0) {
        console.log("Insira um número inteiro positivo!");
    } else if (num == 1) {
        console.log(a)
    } else {
        while (contador < num) {
            console.log(a);
            temp = a + b;
            a = b;
            b = temp;
            contador++;
        }
    }
}


function MaiorMenor(n1, n2, n3) {
    let maior = n1;
    let menor = n1;

    // verificando o maior valor
    if (n2 > maior) {
        maior = n2;
    }
    if (n3 > maior) {
        maior = n3;
    }

    // verificando o menor valor
    if (n2 < menor) {
        menor = n2;
    }
    if (n3 < menor) {
        menor = n3;
    }

    return [maior, menor];
}


function OrdenarTresValores(a, b, c) {
    let temp;

    if (b < a) {
        temp = a;
        a = b;
        b = temp;
    }

    if (c < a) {
        temp = a;
        a = c;
        c = temp;
    }

    if (c < b) {
        temp = b;
        b = c;
        c = temp;
    }

    return [a, b, c];
}