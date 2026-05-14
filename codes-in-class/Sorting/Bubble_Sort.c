// O Bubble Sort ou Método de Ordenação da Bolha é simples. O nome se dá porque o nosso objetivo aqui é "flutuar" o elemento
// maior do vetor até o final e o processo irá se repetir até o vetor estiver ordenado. 
// Entendendo melhor os laços de repetição da função void bubbleSort:
// (1) Vamos pensar assim, se um vetor tem n elementos, para que todos os valores "maiores" sejam colocados no seu 
// devido lugar, precisamos fazer esse processo n - 1 vezes até que sobre apenas o menor valor. Com isso, já entendemos 
// o primeiro laço de repetição.
// (2) O segundo laço de repetição será baseado nos índices do vetor, ou seja, caso tivéssemos que percorrer todo o vetor,
// de praxe a variável j iria percorrer n (j = 0; j < n; j += 1), mas nesse caso, iremos comparar o antecessor com o seu 
// sucessor, então teremos que terminar a iteração até o penúltimo elemento do nosso vetor (j < n - 1). Já o (n - i) presente
// na condição do laço de repetição serve pra "diminuir" o nosso vetor (já que a cada veze que o maior "flutuar" para o final,
// esse final não vai mais importar no processo de ordenação).

#include <stdio.h>
#include <stdlib.h>

void preencherVetor(int v[], int n);
void imprimirVetor(int v[], int n);
void bubbleSort(int v[], int n);

int main(){
    int tamanhoVetor;
    printf("Quantos valores serão inseridos no vetor(2-10)? ");
    scanf("%d", &tamanhoVetor);
    int vetor[tamanhoVetor];
    preencherVetor(vetor, tamanhoVetor);
    printf("Seu vetor não ordenado: ");
    imprimirVetor(vetor, tamanhoVetor);
    bubbleSort(vetor, tamanhoVetor);
    printf("\nSeu vetor ordenado utilizando Bubble Sort: ");
    imprimirVetor(vetor, tamanhoVetor);
    return 0;
}

void preencherVetor(int v[], int n){
    srand(1);
    for (int i = 0; i < n; i+= 1){
        v[i] = rand() % 51;
    }
}

void imprimirVetor(int v[], int n){
    printf("[");
    for(int i = 0; i < n; i += 1){
        printf(" %d ", v[i]);
    }
    printf("]");
}

void bubblesort (double v[], int n) {
    int i, fim, pos, troca;
    double chave;
    troca = 1; fim = n - 2; pos = 0;
    while (troca == 1) {
        troca = 0;
        for (i = 0; i <= fim; i++) {
            if (v[i] > v[i+1]) {
                chave = v[i]; v[i] = v[i+1]; v[i+1] = chave;
                pos = i; troca = 1;
            }
        }
        fim = pos-1;
    }
}