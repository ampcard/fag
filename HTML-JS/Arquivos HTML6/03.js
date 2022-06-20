// Pfeffer

function fibonacci(num) {
    if(num < 2) {
        return num;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

function fibonacciMemo(num, memo) {
    memo = memo || {};

    if (memo[num]) {
        return memo[num];
    }

    if(num < 2) {
        return 1;
    } else {
        return memo[num] = fibonacciMemo(num - 1, memo) + fibonacciMemo(num - 2, memo);
    }
}

let resultado = [];

for(let i = 0; i < 100; i++) {
    resultado.push(fibonacciMemo(i));
}

alert(resultado.join(" → "));
