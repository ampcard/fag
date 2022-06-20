function fatorial(num) {
    if (num < 2) {
        return num
    } else {
        return num * fatorial(num - 1);
    }
}

console.log(fatorial(6));
