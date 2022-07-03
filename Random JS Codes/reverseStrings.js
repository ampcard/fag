const reverseString = (str) => {
    const reversedString = str.split('').reverse().join('');
    return reversedString;
}

console.log(reverseString('YourStringHere'));
