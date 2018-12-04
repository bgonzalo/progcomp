//https://github.com/ackoroa/UVa-Solutions/blob/master/UVa%20441%20-%20Lotto/src/UVa%20441%20-%20Lotto.cpp
#include <cstdio>
using namespace std;

int main() {
	int k, S[12], count = 0;//sea k y count=0 tipo int, y el arreglo s de 12 elementos tipo int
	while (scanf("%d", &k), k) {//mientras resive input, le asigna el valor del input a k
		if (count++)//evalua si count es disinto de cero y despues le suma 1
			printf("\n");//muestra un salto de linea
		for (int i = 0; i < k; i++)//para i desde 0 hasta k, incrementando de uno en uno
			scanf("%d", &S[i]);//asigna el valor del input al i-esimo elemento de s

		for (int a = 0; a < k - 5; a++)//para a tipo int, desde 0 hasta k-5 (exclusive), incrementando de uno en uno
			for (int b = a + 1; b < k - 4; b++)//para b tipo int, desde a+1 hasta k-4 (exclusive), incrementando de uno en uno
				for (int c = b + 1; c < k - 3; c++)//para c tipo int, desde b+1 hasta k-3 (exclusive), incrementando de uno en uno
					for (int d = c + 1; d < k - 2; d++)//para d tipo int, desde c+1 hasta k-2 (exclusive), incrementando de uno en uno
						for (int e = d + 1; e < k - 1; e++)//para e tipo int, desde d+1 hasta k-1 (exclusive), incrementando de uno en uno
							for (int f = e + 1; f < k; f++)//para f tipo int, desde e+1 hasta k (exclusive), incrementando de uno en uno
								printf("%d %d %d %d %d %d\n", S[a], S[b], S[c],
										S[d], S[e], S[f]);//mostrar el a-esimo elemento de s, el b-esimo elemento de s, el c-esimo elemento de s,
										//el d-esimo elemento de s, el e-esimo elemento de s y el f-esimo elemento de s.
	}

	return 0;
}