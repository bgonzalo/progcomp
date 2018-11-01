//https://naivesolution.wordpress.com/2014/11/12/uva-11264-coin-collector-solution/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cstdio>
#include <set> 
#define ll long long
using namespace std; // usando el namespace std
int main(){ // funcion principal
    int T; // sea T tipo int
    cin>>T; // otorga el valor del input a T
    while(T--){ // mientras T no sea falso
        int N; // sea N tipo int
        cin>>N; //otorga el valor del input a N
        ll Array[N]; // sea un array tipo long long de N valores
        for(int i=0;i<N;i++){ cin>>Array[i];} // para cada i desde 0 hasta un valor menor que N,incrementando de uno en uno, otorga los valores del input al array
        ll Biggest=Array[0]; // sea Biggest tipo long long otorga el valor de la posicion 0 en Array
        int coin=1; // sea coin tipo int igual a 1
        for(int i=1;i<N-1;i++){ //para cada i desde 1 hasta un valor menor que N-1,incrementando de uno en uno
            if (Biggest+Array[i]<Array[i+1]){ // si Biggest + el valor de la posicion i-esima en Array es menor que el valor de la i-esima mas 1 posicion
                Biggest+=Array[i]; // entonces Biggest es igual a Biggest mas el valor de la i-esima posicion en Array
                coin++; // incrementa el valor de coin
            }
        }
        coin++; // incrementa el valor de coin
        cout<<coin<<endl; // imprime el valor de coin
    }
    return 0;} // finaliza el programa