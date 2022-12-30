#include <stdio.h>
#include <locale.h>

void main(){

    // Acentuação
    setlocale(LC_ALL, "Portuguese");

    // Definindo a variável "a" e "b"
    int a = 5, b;

    // Imprimindo a variável "a"
    printf("%d\n", a);

    // Concatenando
    wprintf(L"O valor da variável 'a' é: %d\n", a);
    // wprintf(L"O valor da variável a é: %d, repetindo %d\n", a,a);

    // Mudando o valor de "a"
    a = 15;

    // Impressão após alteração de valor da variável "a"
    wprintf(L"O novo valor da variável 'a' é: %d\n", a);

    // Lendo valores
    scanf("%d", &b);

    // Impressão após alteração de valor da variável "b"
    wprintf(L"O valor da variável 'b' é: %d\n", b);

    // Pula linha
    printf("\n");

    // Imprimindo
    wprintf(L"Uhuu!\n");

    // Pausando
    system("pause");
}
