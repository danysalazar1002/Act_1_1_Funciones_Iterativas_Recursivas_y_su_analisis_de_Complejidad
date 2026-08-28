// Daniel Salazar Domínguez A01564550

#include <iostream>
#include "Sumas.h"

using namespace std;

int main()
{
    //1
    cout << Sumas::sumaIterativa(1) << endl;
    cout << Sumas::sumaRecursiva(1) << endl;
    cout << Sumas::sumaDirecta(1) << endl;
    //15
    cout << Sumas::sumaIterativa(5) << endl;
    cout << Sumas::sumaRecursiva(5) << endl;
    cout << Sumas::sumaDirecta(5) << endl;
    //55
    cout << Sumas::sumaIterativa(10) << endl;
    cout << Sumas::sumaRecursiva(10) << endl;
    cout << Sumas::sumaDirecta(10) << endl;
    //5050
    cout << Sumas::sumaIterativa(100) << endl;
    cout << Sumas::sumaRecursiva(100) << endl;
    cout << Sumas::sumaDirecta(100) << endl;
}

