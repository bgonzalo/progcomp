//https://tausiq.wordpress.com/2011/01/11/uva-855-lunch-in-grid-city/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#define INT_MAX 2147483647
#define INT_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000
#define LL unsigned long long
using namespace std;
 
int main ()
{
    int testCase; //sea testCase tipo int
    scanf ("%d", &testCase); //asigna el input a testCase
 
    while ( testCase-- ) { // mientras testCase no sea falso
        int s, a, f; //sea s, a, f de tipo int
        scanf ("%d %d %d", &s, &a, &f); // asigna los input a s, a, f
 
        int p [50000 + 5]; //crea un arreglo p tipo int con 50005 elementos
        int q [50000 + 5]; //crea un arreglo q tipo int con 50005 elementos
 
        for ( int i = 0; i < f; i++ ) //para i tipo int, desde 0 hasta i<f, incrementado de 1 en 1
            scanf ("%d %d", &p [i], &q [i]); //asigna el input al i-esimo elemente de p y q respectivamente
 
        sort (p, p + f); // ordenar p hasta p+f
        sort (q, q + f); // ordenar q hasta q+f
 
        if ( f % 2 ) printf ("(Street: %d, Avenue: %d)\n", p [f / 2], q [f / 2]); // si f no es par, muestra "street: p[f/2], avenue: q[f/2]"
        else printf ("(Street: %d, Avenue: %d)\n", p [(f - 1) / 2], q [(f - 1) / 2]); // en otro caso, muestra "street: p[(f-1)/2], avenue: q[(f-1)/2]"
    }
 
    return 0;
}