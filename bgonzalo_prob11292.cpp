//https://github.com/marioyc/Online-Judge-Solutions/blob/master/UVA/Contest%20Volumes/11292%20-%20Dragon%20of%20Loowater.cpp
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int n,m,a[20000],b[20000];// sean n,m y los arrays a y b de tamaño de tipo int
    
    while(true){// mientras sea cierto
        scanf("%d %d",&n,&m);// otorga los valores tipo int del input a n y m
        if(n == 0) break;// si n igual 0 termina
        
        for(int i = 0;i < n;++i) scanf("%d",&a[i]);// para cada i desde 0 hasta un valor menor que n,i incrementando de uno en uno, otorga los valores tipo int a "a"
        for(int i = 0;i < m;++i) scanf("%d",&b[i]);// para cada i desde 0 hasta un valor menor que m,i incrementando de uno en uno, otorga los valores tipo int a "b"
        
        int ans = 0;//sea ans tipo int igual a 0
        bool ok = true;//sea ok tipo bool igual a true
        
        sort(a,a + n);//ordena desde a hasta a+n en orden ascendente
        sort(b,b + m);//ordena desde b hasta b+m en orden ascendente
        
        for(int i = 0,j = 0;i < n && ok;++i){// para cada i,j igual a 0 hasta un valor menor que n y ok, incrementando i de uno en uno
            while(j < m && b[j] < a[i]) ++j;// mientras j menor que m y el valor j-esimo de b es menor al valor i-esimo de a, incrementando j de uno en uno
            
            if(j == m) ok = false;// si j igual entonces ok es falso
            else ans += b[j++];// si no, ans igual ans mas el valor j-esimo de b, incrementando j de uno en uno
        }
        
        if(!ok) puts("Loowater is doomed!");//si ok no es falso, imprime "loowater is doomed!"
        else printf("%d\n",ans);// si no imprime el valor de ans
    }
    
    return 0;
}