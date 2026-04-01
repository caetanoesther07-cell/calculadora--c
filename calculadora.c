#include <stdio.h>

int main() {
    float num1, num2;
    char operacao;

    printf("digite a operacao (+ - * /): ");
    scanf(" %c", &operacao);

    printf("digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("digite o segundo numero: ");
    scanf("%f", &num2);

    switch (operacao) { 
        case '+':
            printf("resultado: %2.f\n", num1 + num2);
            break;

            case '-':
            printf("resultado: %2.f\n", num1 - num2);
            break;

            case '*':
            printf("resultado: %2.f\n", num1 * num2);
            break;

            case '/':  
            if (num2 != 0)
                 printf("resultado: %2.f\n", num1 / num2);
            else
                printf("erro: divisao por zero nao permitida\n");
            break;

            default: 
            printf("operacao invalida\n");
        }

        return 0;
        
}