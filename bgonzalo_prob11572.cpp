//https://tausiq.wordpress.com/2011/03/16/uva-11572-unique-snowflakes/
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
 
#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000
#define LL long long
 
#define For(i, a, b) for ( int i = (a); i < (b); i++ )
#define Fors(i, sz) for ( size_t i = 0; i < sz.size (); i++ )
#define Set(a, s) memset (a, s, sizeof (a))
 
using namespace std;
 
int main(int argc, char** argv) {// funcion principal para parametros argc y argv tipo int y char respectivamente
    int testCase;// sea testCase tipo int
    scanf ("%d", &testCase);//asigna el input a testCase
 
    while ( testCase-- ) {//mientras testCase no sea falso
        int n, ar [N + 10], previous_position [N + 10]; //sean n tipo int, los arreglos ar y previous_position con 1000010 elementos 
        scanf ("%d", &n);// asigna el valor del input a n
 
        map <int, int> m; //sea m un contenedor map vacio
        int cnt = 0; //sea cnt tipo int con valor 0
        int maxi = 0; //sea maxi tipo int con valor 0
 
        for ( int i = 1; i <= n; i++ ) {//para i tipo int, desde 1 hasta i<=n, incrementado de 1 en 1
            scanf ("%d", &ar [i]);// asigna cada valor del input a cada i-esimo elemente de ar
            previous_position [i] = m [ar [i]];//sea el i-esimo elemento de previous_position igual al i-esimo elemeto de ar en m
            m [ar [i]] = i;// sea el i-esimo elemento de ar en m igual a i
        }
 
        int curr = 1;//sea curr tipo int, igual a 1
        int previous = 1;//sea previous tipo int, igual a 1
 
        for ( curr = 1; curr <= n; curr++ ) {//para curr desde 1 hasta i<=n, incrementado de 1 en 1
            if ( previous_position [curr] >= previous ) {//si el elemento de previous_position en la posicion con valor curr, es mayor o igual a previous
                maxi = max (maxi, curr - previous);//maxi es igual al mayor entre maxi y curr menos previous
                previous = previous_position [curr] + 1;//previous es igual a el elemento de previous_position en la posicion con valor curr, mas 1
            }
        }
 
        maxi = max (maxi, curr - previous);//maxi es igual al mayor entre maxi y curr menos previous
 
        printf ("%d\n", maxi);// imprime maxi con salto de linea
    }
 
    return 0;
}