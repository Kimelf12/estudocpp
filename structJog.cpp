#include <iostream>
using namespace std;

struct Jogador
{
    int pontos;
    int x, y;
};

//Structs devem ser passados por referencia no modo C, com endereco e ponteiro
void leDadosJogador(Jogador *j)
{
    cin >> j->pontos;
    cin >> (*j).x;
    cin >> (*j).y;
}

int main()
{
    Jogador jog[5];
    for (int i = 0; i < 5; i++)
        leDadosJogador(&jog[i]);

    for (int i = 0; i < 5; i++)
        cout << "Jogador " << i + 1 << "\nPontos: " << jog[i].pontos << "\n x: " << jog[i].x << " y: " << jog[i].y << endl;
    cout << "\n";
    return 0;
}