//https://github.com/ajahuang/UVa/blob/master/UVa%2012405%20-%20Scarecrow.cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{  
    int T, Case = 1;//sea T y Case igual a 1, de tipo int
    cin >> T;//asigna el input a T
    while ( T-- )//mientras T no sea falso
    {
        int N;//sea N tipo int
        cin >> N;//asigna el valor del input a N
        vector<char> field(N + 2, '#');// crea un vector, con N+2 elementos y todos los elementos son el caracter '#'
        for (int i = 0; i < N; ++i)// para i tipo int, desde 0 hasta i<N, incrementando de uno en uno
            cin >> field[i];//asigna cada elemento del input a cada i-esimo elemento de field

        int scarecrows = 0;//sea scarecrows tipo int igual a cero 
        for (int i = 0; i < N; ++i)//para i tipo int, desde 0 hasta i<N, incremetando de uno en uno
        {
            
            if (field[i] == '.')//si  el i-esimo elemento de field es igual a '.'
            {
                field[i] = field[i + 1] = field[i + 2] = '#';// el i-esimo elemento de field es igual a el i+1-esimo elemento de field igual a el i+2-esimo elemento de field igual a '#'
                ++scarecrows; //scarecrows mas 1
            }
        }
        cout << "Case "//imprime "Case "
             << Case++// imprime Case mas 1
             << ": "// imprime ": "
             << scarecrows  //imprime scarecrows
             << endl;//para de imprimir
    }
    return 0;
}
