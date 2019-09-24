#include <iostream>
using namespace std;

int main(){
    //A busca binaria atua em um vetor de elementos ja ordenados
    int v[] = {1, 3, 21, 60, 130, 340, 570, 1000, 2000, 3500};

    //Inicialmente o inicio da busca vai ser a posicao 0 e o fim sera o tamanho do vetor
    int n, ini = 0, fim = (sizeof(v)/sizeof(int)), aux = 0;
    bool ok = false;
    

    cout << "Informe o elemento que deseja verificar na lista: ";
    cin >> n;

    // Quando o inicio ultrapassar fim, a busca termina
    while(ini < fim){
        //Pegamos o elemento no meio do vetor
        aux = (ini+fim)/2;
        //Se o numero buscado for igual ao elemento buscado, okay! Encontramos o numero
        if(n == v[aux]){
            ok = true;
            break;
            
        //Se o numero buscado for maior que o elemento central, o fim permanece o mesmo, porem o inicio sera uma posicao a direita do elemento central
        }else if(n > v[aux]){
            ini = aux+1;
        //Se o numero buscado for menor que o elemento central, o inicio permanece o mesmo, porem o fim sera uma posicao a esquerda do elemento central
        }else{
            fim = aux-1;
        }
    }
    if(!ok)
        cout << "Elemento nao encontrado!" << endl;
    else
        cout << "Elemento encontrado na posicao " << aux+1 << '!' << endl;
    
    return 0;
}