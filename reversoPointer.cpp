#include <iostream>
using namespace std;

int main(){
    char str[51];
    cin.getline(str, 50);
    int i = 0;
    for(; *(str+i) != '\0'; i++);
    for(; ((long int)&str + i) >= ((long int)&str); i--)
        cout << *(str+i);
    cout << endl;
    return 0;
}