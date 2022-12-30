#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void limpaTela(){
    system("CLS"};

void imprime_vetor(int vetor[TAM]){

    // Auxiliar contador
    int cont;

    // Imprime o vetor
    for(cont = 0; cont < TAM; cont++) {
        cout << vetor[cont] << " - ";
    }
}

int main () {

    int pilha[TAM];
    int topo = -1;       // Topo da pilha

    imprime_vetor(pilha);

    // Caso não possa colocar mais valores
    if (topo == TAM - 1){
            cout << "Pilha cheia!";
    }else {
        topo = topo + 1;
        pilha(topo) = 5;
    }

    imprime_vetor(pilha);



}
