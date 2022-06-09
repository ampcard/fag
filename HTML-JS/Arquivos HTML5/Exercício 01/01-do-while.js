
let userName = window.prompt("Digite seu nome de usuário.");
let userSenha = window.prompt("Digite sua senha.");

do {
    window.alert("A senha não pode ser a mesma que o nome de usuário!");
    userSenha = window.prompt("Digite novamente sua senha.");
} while (userName == userSenha || userSenha == "");
