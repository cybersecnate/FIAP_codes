#include <stdio.h>

int main()
{
    int x;
    char letra;

    printf("digite uma letra: ");
    //fflush(stdin);   	//limpa buffer do teclado 
    letra= getchar();
    printf("digite um numero inteiro: ");
    scanf("%d",&x);
    //fflush(stdin);   	//limpa buffer do teclado 
    printf("%c",letra);
    printf("%d",x);
}