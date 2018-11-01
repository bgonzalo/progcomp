//http://blog.tobygameac.com/2013/08/uva-10611-playboy-chimp.html
#include <cstdio>
#include <algorithm> 
using namespace std; //usando el namespace std
 
int main() { 
  int N, Q, h[50000]; // sea N, Q de tipo int y el array h de tipo int con 50000 valores
  scanf("%d", &N); // otorga el valor tipo int del input a N
  for (int i = 0; i < N; i++) { //para i desde 0 hasta un valor menor a N, incrementando de uno en uno
    scanf("%d", &h[i]); // otorga los valores tipo int del input a el array h
  }
  scanf("%d", &Q); // otorga el valor tipo int del input a Q
  while (Q--) { // mientras Q sea no falso
    int t; //sea t tipo int
    scanf("%d", &t); // otorga el valor tipo int del input a t
    int low = lower_bound(h, h + N, t) - h - 1; // sea low tipo int igual al primer valor mayor o igual a t ente h y h+N, - h -1
    int up = upper_bound(h, h + N, t) - h; // sea up tipo int igaul al primer valor mayor a t entre h y h+N, - h
    if (low >= 0 && low < N) { //si low es mayor o igual a 0 y menor que N
      printf("%d", h[low]); //entonces muestra el valor tipo int de h en la posicion low
    } else { // o 
      putchar('X'); //muestra el caracter X
    }
    putchar(' '); // muestra el caracter ' ' 
    if (up >= 0 && up < N) { // si up es mayor o igual que 0 y menor que N
      printf("%d", h[up]); // muestra el valor tipo int de h en la posicion up
    } else { //o
      putchar('X'); // muestra carater X
    }
    puts(""); // muestra 
  }
  return 0;
}