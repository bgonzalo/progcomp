//http://theinfinitytutorial.blogspot.com/2011/12/uva-10282-babelfish-solution.html
#include <iostream>
#include <string>
#include <map>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
 long i,j,k; //sean i,j,k tipo long
 char s[11],ss[11],line[25];//sean s,ss,line cadenas de caracteres y puede coneter 11,11,25 caracteres respectivamente 
 map<string,string>m; //sea m un map con valores tipo string

 while( gets(line) ){// otorga el input a line, mientras line sea no falso
  if( strcmp(line,"") ){// compara line con ""
   sscanf(line,"%s %s",&s,&ss); // busca strings en line y asignalos a s y ss
   if( m[ss] == "" )// si ss en m es igua a ""
    m[ss] = s;//ss en m es igual a s
  }
  else{//si no
   while( gets(line) ){// otorga el input a line, mientras line sea no falso
    if( m[line] != "" )//si line en m es distinto a ""
     cout << m[line] << '\n';//imprime el valor de line en m con salto de linea
    else//si no
     cout << "eh\n";//imprime eh con salto de linea
   }
  }
 }


 return 0;
}

