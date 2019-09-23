#include <iostream>
using namespace std;

void merge(int *v, int inicio, int meio, int fim)
{
    int *temp, p1 , p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim - inicio + 1;
    p1 = inicio;
    p2 = meio + 1;
    temp = new int[tamanho];
    //Verificamos se o vetor foi alocado
    if (temp != NULL)
    {
        for (int i = 0; i < tamanho; i++)
        {
            //Se ambas nao tiverem chegado ao fim faca
            if (!fim1 && !fim2)
            {
                if (v[p1] < v[p2])
                {
                    //Vai receber o p1 e em seguida a variavel vai ser incrementada
                    temp[i] = v[p1++];
                }
                else
                {
                    temp[i] = v[p2++];
                }
                //Se qualquer uma das duas tiver chegado ao fim fazemos
                if (p1 > meio)
                    fim1 = 1;
                if (p2 > fim)
                    fim2 = 1;
                //Preenchemos o resto do vetor temporario com o resto dos valores que nao acabaram
            }
            else
            {
                if (!fim1)
                {
                    temp[i] = v[p1++];
                }
                else
                {
                    temp[i] = v[p2++];
                }
            }
        }
        //Retornamos os valores já ordenados para o vetor original
        for (j = 0, k = inicio; j < tamanho; j++, k++)
        {
            //Nesse caso o k vai receber o inicio, porque nao necessariamente sera zero
            v[k] = temp[j];
        }
    }
    //Deletamos a variavel alocada dinamicamente
    delete[] temp;
}

void mergeSort(int *v, int inicio, int fim)
{
    int meio;
    if (inicio < fim)
    {
        meio = (inicio + fim) / 2;

        //Chama a funcao para as duas partes
        mergeSort(v, inicio, meio);
        mergeSort(v, meio + 1, fim);

        //Combina as duas metades de forma alternada
        merge(v, inicio, meio, fim);
    }
}

void mergeSort(int *v, int tam)
{
    mergeSort(v, 0, tam - 1);
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