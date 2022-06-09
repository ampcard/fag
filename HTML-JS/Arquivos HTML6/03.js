// Pfeffer

function fibonacci(num) {
    if(num < 2) {
        return num;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

let resultado = [];

for(let i = 0; i < 7; i++) {
    resultado.push(fibonacci(i));
}

alert(resultado.join(" → "));
