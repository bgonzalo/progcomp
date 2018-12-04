//https://github.com/morris821028/UVa/blob/master/volume124/12455%20-%20Bars.cpp
#include <stdio.h>

int main() {
    int t, w, n, i, j, p;//sea t, w, n, i, j, p tipo int
    scanf("%d", &t);//asignar elvalor del input a t
    while(t--) {//mientras t sea distinto de 0. le resta 1 a t despues de ver si se cumple la condicion
        scanf("%d %d", &w, &n);//le asigna los valores del input a w y n repectivamente
        int dp[1005] = {};//sea el arreglo dp tipo int
        dp[0] = 1;//asigna el valor 1 al primer elemento de dp
        for(i = 0; i < n; i++) {//para i desde 0 hasta n (exclusive), incrementano de uno en uno
            scanf("%d", &p);//asignar el valor del input a p
            for(j = w-p; j >= 0; j--) {//para j desde w-p hasta 0, disminuyendo de uno en uno
                if(dp[j] && !dp[j+p])// si el j-esimo valor de dp es distinto a 0 y el j+p-esimo valor de dp es 0
                    dp[j+p] = 1;//se le asigna el valor 1 al j+p-esimo valor de dp
            }
        }
        if(dp[w])//si el w-esimo valor de dp es distinto de 0, muestra "YES"
            puts("YES");
        else
            puts("NO");//sino muestra "NO"
    }
    return 0;
}