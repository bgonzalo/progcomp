#https://github.com/rezwanulhaquerezwan/UVA-Solutions-in-Python/blob/master/11799_HorrorDash.py
T = int(input())                       # dale a t el valor entero del input
for i in range(1,T+1):                 #para i entre 1 y t+1
    L = list(map(int,input().split())) #asignar una lista de los valores enteros separados por espacio a l
    L.sort()                           #ordena l de mayo a menor
    L.reverse()                        #invierte el orden
print('Case %d:' %i ,L[0])             #muestra "case" y el valor de i junto al primer valor de la lista l