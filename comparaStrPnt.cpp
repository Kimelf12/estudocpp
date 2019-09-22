#include <iostream>
using namespace std;

bool compara(char *p1, char *p2){
    for(; *p1 && *p1 == *p2; p1++, p2++);
    return *p1 == *p2;
}

int main(){
    char pl1[51];
    char pl2[51];

    cin.getline(pl1, 50);
    cin.getline(pl2, 50);

    if(compara(pl1, pl2)){
        cout << "As frases sap identicas" << endl;
    }else{
        cout << "As frases sao diferentes" << endl;
    }

    return 0;
}