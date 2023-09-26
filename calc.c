#include<stdio.h>

int main() {
    
    char operacao; /*Variável que irá receber a operação feita pelo usuário*/
    double numero1, numero2, resultado;

    printf("Bem vindo(a) a calculadora!\n");
    printf("Digite a operacao que deseja fazer (+, -, *, /): ");
    scanf("%c", &operacao); /*%c; representa caracter - &; operador de endereços, ele vai pegar o nome da variável e buscar qual é o endereço na memória em que ela está armazenada*/    

    printf("Digite o primeiro numero: ");
    scanf("%lf", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &numero2);

    //Estrutura condicional Switch
    switch(operacao) {
        case '+': //Sempre colocar entre aspas simples
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/': //Como não se divide por 0, iremos incluir if else

            if(numero2 == 0) {
                printf("Divisao por 0 nao e permitida.");
                return 1;
            } else {
                resultado = numero1 / numero2;
            }
            break;

        default:
            printf("Erro: voce escreveu uma operacao invalida");
            return 1;
    }


    printf("%.2lf %c %.2lf = %.2lf", numero1, operacao, numero2, resultado); //%.2lf para incluir 2 casas decimais no double

    return 0;
}