#include <iostream>
using namespace std;

void bubbleSort(int v[], int tam)
{
    for (int i = 0; i < tam; i++)
        for (int j = 0; j < tam - 1 - i; j++)
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
}

int main()
{
    int tam;
    cout << "Informe o número de elementos no Vetor: ";
    cin >> tam;
    int *v = new int[tam];
    for (int i = 0; i < tam; i++)
        cin >> v[i];

    bubbleSort(v, tam);

    for (int i = 0; i < tam; i++)
    {
        (i == tam - 1) ? cout << v[i] << endl : cout << v[i] << ' ';
    }
    delete[] v;
    return 0;
}