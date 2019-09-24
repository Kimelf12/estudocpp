#include <iostream>
using namespace std;

void heapSort(int *v, int tam){
    int aux;
    for(int i = (tam-1)/2; i >= 0; i--)
        criaHeap(v, i, tam-1);
    
    for(int i = tam-1; i >= 1; i--){
        aux = v[0];
        v[0] = v[i];
        v[i] = aux;
        criaHeap(v, 0, i-1);
    }
    

}

int main()
{
    int tam;
    cout << "Informe o número de elementos no Vetor: ";
    cin >> tam;
    int *v = new int[tam];
    for (int i = 0; i < tam; i++)
        cin >> v[i];

    mergeSort(v, tam);

    for (int i = 0; i < tam; i++)
    {
        (i == tam - 1) ? cout << v[i] << endl : cout << v[i] << ' ';
    }
    delete[] v;
    return 0;
}