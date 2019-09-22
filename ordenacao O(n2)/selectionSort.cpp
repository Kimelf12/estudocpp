#include <iostream>
using namespace std;

void selectionSort(int *v, int tam){
    int menor;
    for(int i = 0; i < tam-1; i++){
        menor = i;
        for(int j = i+1; j < tam; j++){
            if(v[j] < v[menor]){
                menor = j;
            }
        }
        if(i != menor){
            swap(v[i], v[menor]);
        }
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

    selectionSort(v, tam);

    for (int i = 0; i < tam; i++)
    {
        (i == tam - 1) ? cout << v[i] << endl : cout << v[i] << ' ';
    }
    delete[] v;
    return 0;
}