#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    wprintf(L"Olá mundo!\n");

    // Lendo valor inteiro
    int a = 50;
    // int b = 6;
    // printf("%d", a + b);
    wprintf(L"O valor de a é = %d\n", a);
    scanf("%d", &a);
    wprintf(L"O valor de a mudou para %d\n", a);

    // Lendo valor quebrado
    float b = 5.5;
    wprintf(L"O valor de b é = %f\n", b);
    scanf("%f", &b);
    wprintf(L"O valor de b mudou para %f\n", b);

    // Lendo letra
    char c = 't';
    wprintf(L"O valor de c é = %c\n", c);
    fflush(stdin);      // limpar o lixo do Buffer
    scanf("%c", &c);
    wprintf(L"O valor de c mudou para %c\n", c);

    return 0;
}
