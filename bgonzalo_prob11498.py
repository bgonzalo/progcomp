#https://github.com/rezwanulhaquerezwan/UVA-Solutions-in-Python/blob/master/11498_Division_of_Nlogonia.py
while True:                                     # mientras sea cierto realiza lo siguiente
    n = int(input())                            # n tendra el valor entero del input
    if(n==0):                                   # si n es igual a 0 
        break                                   # entonces para
        
    x,y = map(int,input().split())              #a x,y dale el valor entero del el input separado por espacios
    for i in range(n):                          # para i en entre 1 y n
        xx, yy = map(int,input().split())       #a xx,yy dale el valor entero del input separado por espacios
        if(xx == x or yy == y):                 #si xx es igual a x o yy es igual a y 
            print('divisa')                     #muestra "divisa"
        elif(xx>x and yy>y):                    #si xx es mayor que x e yy es mayor que y 
            print('NE')                         #muestra "ne"
        elif(xx>x and yy<y):                    #si xx es mayor que x e yy es menor que y 
            print('SE')                         #muestra "se"
        elif(xx<x and yy>y):                    #si xx es menor que x e yy es mayor que y 
            print('NO')                         #muestra "no"
        else:       
            print('SO')                         #en cualquier otro caso muestra "so"