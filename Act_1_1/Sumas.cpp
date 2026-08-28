#include "Sumas.h"

int Sumas::sumaIterativa(int n) //Complejidad O(n)
{
    if (n > 0) {
        int suma = 0;
        for (int i = 0; i <= n; i++) {
            suma += i;
        }
        return suma;
    }
    else
        return -1;
}

int Sumas::sumaRecursiva(int n) // Complejidad O(n)
{
    if (n > 0)
        if (n == 1)
            return 1;
        else
            return n + sumaRecursiva(n - 1);
    else
        return -1;
}

int Sumas::sumaDirecta(int n) //Complejidad O(1)
{
    if (n > 0)
        return (n * (n + 1)) / 2;
    else
        return -1;
}
