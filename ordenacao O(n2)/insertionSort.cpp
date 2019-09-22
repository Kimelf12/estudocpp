#include <iostream>
using namespace std;

void insertionSort(int *v, int tam)
{
    int i, j, aux;
    for (i = 0; i < tam; i++)
    {
        aux = v[i];
        for (j = i; (j > 0) && (aux < v[j - 1]); j--)
        {
            v[j] = v[j - 1];
        }
        v[j] = aux;
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

    insertionSort(v, tam);

    for (int i = 0; i < tam; i++)
    {
        (i == tam - 1) ? cout << v[i] << endl : cout << v[i] << ' ';
    }
    delete[] v;
    return 0;
}