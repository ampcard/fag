function rangeOfNumbers(startNum, endNum) {
    if (startNum > endNum) {
        return [];
    } else {
        const numbers = rangeOfNumbers(startNum + 1, endNum);
        numbers.unshift(startNum);
        return numbers;
    }
}



console.log(rangeOfNumbers(10, 20));
console.log(rangeOfNumbers(5, 20));
console.log(rangeOfNumbers(20, 20));
console.log(rangeOfNumbers(-4, 10));
