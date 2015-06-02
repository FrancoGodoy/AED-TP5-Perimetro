/*TP 5 Perimetro
Franco Godoy
02/06/15 */

#include <iostream>

using namespace std;

double getpositivo();
double getperimetro (double base, double altura);

int main ()

{
double base;
double altura;
double positivo;
double calculo;
double perimetro;


    cout << endl << "Ingrese la medida de la base:  ";
    base = getpositivo ();

    cout << endl << "Ingrese la medida de la altura:  ";
    altura = getpositivo ();

    perimetro = getperimetro (base, altura);

    cout << endl << "El perimetro es:  " << perimetro << endl;

}

return 0;


double getpositivo ()

{
      cin >> positivo;

    while (positivo<0)
        {
            cout << endl << "El numero es negativo,por favor ingrese otro:" << endl;
            cin >> positivo;
        }

    return positivo;
}

double getperimetro (double base, double altura)

{
    double calculo;

    calculo= (2*base)+(2*altura);

return calculo;

}
