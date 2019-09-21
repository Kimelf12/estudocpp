#include <iostream>
//Inclui a função time
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    int tam, par = 0;
    while (true)
    {   
        cout << "Informe o numero de elementos: ";
        cin >> tam;
        if (tam == -1)
        {
            break;
        }
        int *a = new int[tam];
        int *b = new int[tam];

        for (int i = 0; i < tam; i++)
        {
            a[i] = rand() % 10;
            b[i] = rand() % 10;
            if ((a[i] + b[i]) % 2 == 0)
                par++;
        }
        for (int i = 0; i < tam; i++)
            (i != (tam - 1)) ? cout << a[i] << ", " : cout << a[i] << endl;
        for (int i = 0; i < tam; i++)
            (i != (tam - 1)) ? cout << b[i] << ", " : cout << b[i] << endl;
        cout << "Par: " << par << "\nImpar: " << tam - par << endl;
        delete[] a;
        delete[] b;
    }

    return 0;
}