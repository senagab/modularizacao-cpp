#include <iostream>
#include <math.h>
using namespace std;
float calculaArea (float raio);
float calculaPerimetro (float raio);

int main (){
    float raio, area, perimetro;
    cout << "\nDigite o raio do circulo: ";
    cin >> raio;
    area = calculaArea(raio);
    perimetro = calculaPerimetro(raio);
    cout << "\nArea do circulo " << area;
    cout << "\nPerimetro do circulo " << perimetro;
}
float calculaArea(float raio){
    return (3.1415 * pow (raio,2));
}

float calculaPerimetro (float raio){
    return (3.1415 * 2 * raio);
}
