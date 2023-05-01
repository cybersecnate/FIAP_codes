#include <stdio.h>
#include <ctype.h>

int main() {
    // Definindo variáveis
    float value1, value2, result;
    char operator;

    // Recebendo os valores do usuário
    printf("Digite o primeiro valor: ");
    scanf("%f",&value1);
    printf("\nDigite o segundo valor: ");
    scanf("%f",&value2);
    fflush(stdin);
    printf("\n[A] Soma\n[B] Subtracao\n[C] Multiplicacao\n[D] Divisao");
    printf("\nEscolha a operacao: ");
    scanf("%c",&operator);

    // Transforma a opção em maiúsculo
    operator = toupper(operator);

    // Verifica a operação escolhida
    switch (operator) {

    case 'A':
        result = value1 + value2;
        printf("\nO resultado da soma e %.2f", result);
        break;

    case 'B':
        result = value1 - value2;
        printf("\nO resultado da subtracao e %.2f", result);
        break;

    case 'C':
        result = value1 * value2;
        printf("\nO resultado da multiplicacao e %.2f", result);
        break;

    case 'D':
        // Valida se o número digitado pode ser dividido
        if (value1 == 0 || value2 == 0) {
            printf("\nImpossivel realizar divisao por zero");
            break;
        } else {
            result = value1 / value2;
            printf("\nO resultado da divisao é %.2f", result);
            break;
        }
    
    default:
        // Caso o usuário digite uma opção inválida
        printf("\nOperacao invalida!\nPor favor tente novamente!");
        break;
    }

    return 0;
}