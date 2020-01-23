/*  Autor: Fatima Aradid Castañeda Gutierrez.
Fecha: 23/09/2019.
Programa: Resolución de sistema de ecuaciones.*/


#include <iostream>
using namespace std;

int main()

{
    int a, b, c, d ,f, e, x, y;

    cout << "Programa para obtener valores de X y Y en ecuaciones lineales: ax + by = c, dx + ey = f" << endl;

    cout << " Ingrese el valor de a:" <<endl;
     cin >> a;

    cout<< "Ingrese el valor de b:" << endl;
    cin >> b;

    cout << "Ingrese el valor de c:" << endl;
    cin >> c;

    cout<< "Ingrese el valor de d:" << endl;
    cin >> d;

    cout<< "Ingrese el valor de e:" << endl;
    cin >> e;

    cout<< "Ingrese el valor de f:" << endl;
    cin >> f;

    x = ( (c * e ) - (b * f) ) / ( ( a * e) - (b * d) );

    y = ( (a * f) - (c * d) ) / ( (a * e) - (b * d) );

    cout << " El valor de x es igual a:" << endl << x<< endl;
    cout<< " El valor de y es igual a: " << endl << y << endl;

    return 0;

}
