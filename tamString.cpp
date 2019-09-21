#include <iostream>
using namespace std;

int calcTam(char *s){
    int i = 0;
    for(; *(s+i) != '\0'; i++);
    return i;
}

int main()
{
    char str[51];
    cout << "Digite alguma string... (com até 50 caracteres): ";
    cin.getline(str, 50);
    cout << "Tamanhos calculados: " << calcTam(str) << endl;    
    return 0;
}
