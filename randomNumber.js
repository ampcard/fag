function randomNumber() {
    // generate a random number between 0 (inclusive) and 1 (exclusive)
    return Math.random();
}


function randomInteger(n) {
    // generate a random integer between 0 (inclusive) and n (excluive)
    return Math.floor(Math.random() * n);
}


function randomRange(myMin, myMax) {
    // generate a random number between given range
    return Math.floor(Math.random() * (myMax - myMin + 1)) + myMin;
}