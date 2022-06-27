function countdown(n) {
    if (n < 1) {
        return [];
    } else {
        const countdownArray = countdown(n - 1);
        countdownArray.unshift(n);
        return countdownArray;
    }
}


console.log(countdown(10));
