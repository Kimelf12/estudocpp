#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]){
    long long int num = 0;

    for (int i = 0; i < strlen(argv[1]); i++)
        if(argv[1][i] == '1')
            num += pow(2, strlen(argv[1])-1-i);

    cout << "O numero digitado eh: "<< num << endl;

    return 0;
}