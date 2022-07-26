//3. Supondo que a população de um país A seja da ordem de 8000 habitantes com uma taxa anual de crescimerito de 6% e que a população de B seja 20000 habitantes com uma taxa de crescimento de 3%. Faça um programa que calcule e escreva o número de anos necessários para que a população do país A ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento.

let paisA = 8000
let paisB = 20000
let anos = 0

while(paisA < paisB){
    paisA = paisA + (paisA * 0.06)
    paisB = paisB + (paisB * 0.03)
    anos = anos + 1
    console.log("Ano " + anos + ": " + parseInt(paisA) + " | " + parseInt(paisB))
    if(paisA >= paisB){
        console.log("serao necessarios " + anos + " anos")
    }
}