//http://sound-system-79.blogspot.com/2014/07/uva-732-anagrams-by-stack.html
#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

void anagram(size_t oi, size_t on, stack<char>& sst, stack<char>& tst,//sea una funcion llamada anagram tipo void, para los parametros
  vector<char>& wv, const vector<char>& twv, vector<char>& ov)//oi tipo size_t, on tipo size_t, sst tipo stack, tst tipo stack, wv tipo vector, twv tipo vector, ov tipo vector.
{
  if (oi == on) {//si oi es igual a on
    if (wv.size() == twv.size()) {// si el tamaño del vector wv es igual al tamaño del vector twv
      for (size_t i = 0; i < on; i++) {//para i tipo size_t, desde 0 hasta menor que on, incrementando de uno en uno
        if (i)// si i no es falso (o 0)
          cout << ' ';//muestra un espacio ' '
        cout << ov[i];//muestra el i-esimo elemento de ov
      }
      cout << endl;//fin de la funcion
    }
  }
  else {
    if (!sst.empty()) {// si sst no esta vacio
      char c = sst.top();//sea c tipo char, igual al ultimo elemento en sst
      sst.pop();//quita el ultimo elemento de sst
      tst.push(c);//pone un nuevo elemento c en tst
      ov[oi] = 'i';//el oi-esimo elemento de ov es igual a i
      anagram(oi + 1, on, sst, tst, wv, twv, ov);//llama al la 'funcion' anagram para (oi + 1, on, sst, tst, wv, twv, ov)
      sst.push(c);//pone un nuevo elemento c en sst
      tst.pop();//quita el ultimo elemento de tst
    }
    if (!tst.empty() && tst.top() == twv[wv.size()]) {//si tst no esta vacio y el ultimo elemento de tst es igual a el elemento de twv en la posicion igual al tamaño de wv
      char c = tst.top();//sea c tipo char igual al ultimo elemento de tst
      tst.pop();//quita el ultimo elemento de tst
      wv.push_back(c);//agrega un elemento nuevo al vector wv
      ov[oi] = 'o';//el oi-esimo elemento de ov es igual a o
      anagram(oi + 1, on, sst, tst, wv, twv, ov);//llama al la 'funcion' anagram para (oi + 1, on, sst, tst, wv, twv, ov)
      tst.push(c);//pone un nuevo elemento c en tst
      wv.pop_back();//quita el ultimo elemento del vector wv
    }
  }
}

int main()//funcion principal
{
  string sw, tw;//sean sw y tw tipo string
  while (cin >> sw >> tw) {//mientras se le asigne el input a sw y tw
    cout << "[\n";//muestra un salto de linea
    size_t length = sw.length();//sea length tipo size_t igual a el largo del string sw
    if (length == tw.length()) {//si length es igual al largo del string tw
      stack<char> sst, tst; //sean sst y tst, un stack de elementos char
      vector<char> wv, twv(length), // sea el vector de elementos tipo char wv y twv de length elementos
        ov(length * 2); //y ov de length*2 elementos
      for (size_t i = 0; i < length; i++) {//para cada i tipo size_t desde 0 hasta menor que length, incrementando de uno en uno
        sst.push(sw[length - i - 1]);//pone un nuevo elemento en sst, que sea igual al valor en sw, en la posicion length menos i menos 1
        twv[i] = tw[i];//sea el i-esimo elemento en twv igual al i-esimo elemento en tw
      }
      anagram(0, length * 2, sst, tst, wv, twv, ov);//llama al la 'funcion' anagram para (0, length * 2, sst, tst, wv, twv, ov)
    }
    cout << "]\n";// muestra un salto de linea
  }
  return 0;
}
