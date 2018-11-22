//https://prosenc.blogspot.com/2015/03/uva-10038-jolly-jumpers-solution.html
#include<bits/stdc++.h>
using namespace std;

int main(){

    int ar[3500],ar2[3500],n; //sea n y los arreglos ar y ar2 con capasidad para 3500 elementos, tipo int
    while(cin >> n){ //mientras se le asigne el input a n
        for(int i = 0; i < n; i++)cin >> ar[i]; //para i tipo int, desde 0 hasta i<n, incrementado de 1 en 1, asignando el input a el i-esimo elemento de ar
        int k = 1;// sea k tipo int, igual a 1
        for(int i = 1; i < n;i++){ //para i tipo int, desde 0 hasta i<n, incrementado de 1 en 1
            ar2[k++] = abs(ar[i]-ar[i-1]); //asignar a cada k-esimo (incrementando de 1 en 1) elemento de ar2 el valor absoluto de la diferencia entre el i-esimo elemento y el elemento anterior
        }
        sort(ar2+1,ar2+k);// ordenar ar2 desde ar2+1 hasta ar2+k
        bool ok = true;// sea ok tipo bool, con valor True
        for(int i = 1; i < k; i++){ //para i tipo int, desde 1 hasta i<k, incrementado de 1 en 1
            if(ar2[i] != i){// si el i-esimo elemento de ar2 es distinto a i
                ok = false;//ok es False
                break; // y termina
            }
        }
        if(ok)cout << "Jolly" << endl;//si ok es cierto, imprime Jolly en la consola
        else cout << "Not jolly" << endl;//en otro caso, imprime Not jolly en la consola
    }
    return 0;
}
