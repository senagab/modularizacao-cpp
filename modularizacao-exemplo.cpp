#include <iostream>
using namespace std;
void reajuste (float &p, float &r);

int main() {

    float preco, valor_reaj;
    char resp;
    do {
        cout << "\n\nDigite o preco atual: ";
        cin >> preco;
        reajuste(preco, valor_reaj);

        cout << "\n\nNovo preco: " << preco << ".\nAumento de: " << valor_reaj << "%.";

        cout << "\n\nContinua [s ou n]: ";
        cin >> resp;
    }

    while (resp == 's');
}
    void reajuste(float &p, float &r){
        r = p * .2;
        p = p * 1.2;
    }


