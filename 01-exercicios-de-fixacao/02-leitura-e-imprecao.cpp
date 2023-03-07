#include <iostream>

using namespace std;

int main(){

    int inteiro;
    string caractere;
    double pFlutuante;

    cout << "Escreva uma string:\n ";
    cin >> caractere;

    cout << "Escreva um inteiro:\n ";
    cin >> inteiro;

    cout << "Escreva um ponto flutuante:\n ";
    cin >> pFlutuante;

    cout << "\nString escolhida: " << caractere << endl;
    cout << "Inteiro escolhido: " << inteiro << endl;
    cout << "Ponto flutuante escolhido: " << pFlutuante << endl;

    return 0;

}