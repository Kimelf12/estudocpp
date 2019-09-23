#include <iostream>
using namespace std;

float poliCalc(int *v, int grau, int x, int aux)
{   
    //Verificamos se o calculo já se encontra no coeficiente multiplicado pelo segundo maior grau
    if(aux == grau-2){
        return v[grau-1]*x + v[grau-2];
    }

    //Mais externo para o mais interno
    return poliCalc(v, grau, x, aux+1) * x + v[aux];
}

int main()
{
    int grau, x, aux = 0;
    cout << "Informe o grau do polinomio: ";
    cin >> grau;
    grau++;
    int v[grau];
    for (int i = 0; i < grau; i++)
        cin >> v[i];
    cout << "Informe o valor de x: ";
    cin >> x;

    cout << "O valor do polinomio para x = " << x << " eh : " << poliCalc(v, grau, x, aux) << endl;

    return 0;
}