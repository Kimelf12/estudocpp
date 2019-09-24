#include <iostream>
using namespace std;

int particiona(int *v, int inicio, int final){
    int esquerda, direita, pivo, aux;
    esquerda = inicio;
    direita = final;
    pivo = v[inicio];

    while(esquerda < direita){
        while(v[esquerda] <= pivo) esquerda++;
        while(v[direita > pivo]) direita--;
        if(esquerda < direita){
            aux = v[esquerda];
            v[esquerda] = v[direita];
            v[direita] = aux;
        }
    }
    v[inicio] = v[direita];
    v[direita] = pivo;
    
    return direita;
}

void quickSort(int *v, int inicio, int fim){
    int pivo;
    if(inicio < fim){
        pivo = particiona (v, inicio, fim);
        quickSort(v, inicio, pivo-1);
        quickSort(v, pivo+1, fim);
    }

}

void quickSort(int *v, int tam){
    quickSort(v, 0, tam-1);
}

int main()
{
    int tam;
    cout << "Informe o número de elementos no Vetor: ";
    cin >> tam;
    int *v = new int[tam];
    for (int i = 0; i < tam; i++)
        cin >> v[i];

    quickSort(v, tam);

    for (int i = 0; i < tam; i++)
    {
        (i == tam - 1) ? cout << v[i] << endl : cout << v[i] << ' ';
    }
    delete[] v;
    return 0;
}