#include <iostream>
using  namespace std;

char atualizacao (float media);

int main (){

    float media;
    char resp;

    setlocale(LC_ALL, "portuguese");

    do{
        cout << "\nInsira a sua média: ";
        cin >> media ;

       cout << "\nSeu conceito é " << atualizacao (media) <<".";

        cout << "\n\nDeseja inserir outra média [S ou N]: ";
        cin >> resp;
    }
    while (resp == 's');

}



char atualizacao (float media)
{
   char conceito;

   if (media <= 4.9){
            conceito = 'D';
        }
        else if  (media >= 5 && media <= 6.9){
            conceito = 'C';
        }
        else if  (media >= 7 && media <= 8.9){
            conceito = 'B';
        }
        else if (media >= 9 && media <= 10){
            conceito = 'A';
        }

        return conceito;
}
