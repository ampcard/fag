let nome = window.prompt("Nome");
let matricula = parseInt(window.prompt("Número da matrícula"));
let nota1 = parseFloat(window.prompt("Nota 1"));
let nota2 = parseFloat(window.prompt("Nota 2"));

let media = (nota1 + nota2) / 2;

console.log("Nome: " + nome);
console.log("Nº matrícula: " + matricula);
console.log("Soma das notas: " + (nota1 + nota2));
console.log("Média: " + media.toFixed(1));