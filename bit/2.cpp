#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    int cont = 0, ind = 0;
    for (int i = 0; i < 32; i++)
    {
        if (atoi(argv[1]) & (1 << i))
            cont += pow(2, i);
        if ((i + 1) % 8 == 0)
        {
            cout << "A parte: " << ind++ << " do numero " << argv[1] << " vale: " << cont << endl;
            cont = 0;
        }
    }

    return 0;
}