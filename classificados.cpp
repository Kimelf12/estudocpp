#include <iostream>
using namespace std;

int main(){
    int clas, part, comeca = 0, aux;
    cin >> part >> clas;

    int v[part];

    for(int i = 0; i < part; i++)
        cin >> v[i];
    
    //Vamos ordenar
    for(int i = 0; i < part; i++){
        for( int j = 0; j < part-1; j++){
            if(v[j] < v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    for(int i = 0; i < part; i++)
        cout << v[i] << endl;


    return 0;
}
