//https://github.com/ackoroa/UVa-Solutions/blob/master/UVa%2011742%20-%20Social%20Constraints/src/UVa%2011742%20-%20Social%20Constraints.cpp
#include <cstdio>
#include <algorithm>
using namespace std;

int find(int p, int arr[]) {//sea una funcion llamada find, para los parametros p y arr[] tipo int
	int i;//sea i tipo int
	for (i = 0; i < 8; i++) {//para i desde 0 hasta 8 (exclusive), incrementando de uno en uno
		if (arr[i] == p)//si el i-esimo elemento de arr es igual a p
			break;//termina
	}
	return i;//devuelve i
}

int main() {
	int n, m;//sean n, m tipo int
	int constraints[20][3];// sea el arreglo constraints tipo int

	while (scanf("%d %d", &n, &m), n || m) {// se le otorga el valor del input a n y m, mientras n o m
		for (int i = 0; i < m; i++) {//para i tipo int desde 0 hasta m (exclusive), incrementando de uno en uno 
			scanf("%d %d %d", &constraints[i][0], &constraints[i][1],// otorga los valores del input a la i-esime fila; columna 0, 1 y 2 respectivamente
					&constraints[i][2]);
		}

		int arr[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };//sea el arreglo arr tipo int, con los siguientes elementos { 0, 1, 2, 3, 4, 5, 6, 7 } 

		int ans = 0;//sea ans tipo int igual a 0
		do {//
			bool sat = true;// sea sat tipo bool igual true
			for (int i = 0; i < m; i++) {//para i tipo int desde 0 hasta m (exclusive), incrementando de uno en uno
				int pos1 = find(constraints[i][0], arr);//sea pos1 tipo int igual a los parametros "constraints[i][0], arr" evaluados en la funcion find
				int pos2 = find(constraints[i][1], arr);//sea pos2 tipo int igual a los parametros "constraints[i][1], arr" evaluados en la funcion find
				if (constraints[i][2] > 0) {//si el valor de la i-esima fila y columna 0 de constraints es mayor que 0
					if (abs(pos1 - pos2) > constraints[i][2]) {//si el valor absoluto de la diferencia entre pos1 y pos2 es mayor que el valor de la i-esima fila y columna 2 de constraints
						sat = false;//sat es falso
						break;//termina
					}
				}
				if (constraints[i][2] < 0) {// si el valor de la i-esima fila y columna 2 de constraints es menor que 0
					if (abs(pos1 - pos2) < (-constraints[i][2])) {////si el valor absoluto de la diferencia entre pos1 y pos2 es menor que el valor de la i-esima fila y columna 2 de constraints por menos uno
						sat = false;//sat es falso
						break;//termina
					}
				}
			}

			if (sat)//si sat es verdadero
				ans++;//suma uno a ans
		} while (next_permutation(arr, arr + n));//haz el ciclo do-while si el next_permutation de arr con arr+n es verdadero

		printf("%d\n", ans);// muestra ans
	}

	return 0;
}