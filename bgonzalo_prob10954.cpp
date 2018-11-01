//https://github.com/ackoroa/UVa-Solutions/blob/master/UVa%2010954%20-%20Add%20All/src/UVa%2010954%20-%20Add%20All.cpp
#include <cstdio>
#include <queue>
#include <functional>
using namespace std; 

int main() { 
	int n; // sea n de tipo int

	while (scanf("%d", &n), n) { // otorga el valor tipo int del input a n, mientras n sea no falso
		priority_queue<int, vector<int>, greater<int> > q; //sea q un priority queue, con valores int, y sando la funcion greater para comparar

		while (n--) { // mientras n sea no falso
			int x; //sea x tipo int
			scanf("%d", &x);//otorga el valor tipo int del input a x
			q.push(x); //agrega x a q
		}

		int total = 0, cost = 0; //sea total tipo int igual a 0 y cost tipo int igual a 0
		while (q.size() > 1) { //mientras el tamaño de q sea mayor que 1
			total = q.top(); //sea total igual a el valor top de q
			q.pop(); //quita el valor top de q
			total += q.top(); // sea total igual a total mas el valor top de q
			q.pop(); //quita el valor top de q
			cost += total; // sea cost igual a cost mas total
			q.push(total); //agrega  total a q
		}

		printf("%d\n", cost); // muestra el valor de cost con salto de linea
	}

	return 0;
}