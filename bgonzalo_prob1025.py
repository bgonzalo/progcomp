#http://acm.timus.ru/forum/?space=1&num=1025&style=classic

group = 0                                                #crea una variable llamada group y le otorga el valor 0
b = []                                                   #crea una lista vacia llamada b
votes = 0                                                #crea una variable llamada votes y le otorga el valor 0
while True:                                              #mientras sea cierto
    try:                                                 #entra en un try-except
        group =  int(input())                            #recive un valor atravez de la consola (primera linea) y lo transforma a tipo entero y se lo asigna a la variable group
        b = ([int(a) for a in input().split()])          #recive valores atravez de la consola (segunda linea) y los separa por cada espacio y luego los transforma a valores enteros, por ultimo le asigna la lista a la variable b 
        b.sort()                                         #ordena la lista b de menor a mayor
    except EOFError:                                     #si la input es interrumpido surge un EOFError y se activa el bloque except
        for i in range(0, round( (group +1) / 2)):       #genera una lista desde 0 hasta el valor group+1 /2 redondeado, y para cada valor de esa lista, para usarlos
            votes += (int(b[i]) + 1) / 2                 #como indices y sacar valores de la lista b, luego los transforma en valores enteros les suma uno, los divide por 2, y este nuevo valor se lo suma a "votes" y el resultado se los asigna a "votes"
        print(int(votes))                                #muestra en la consola el valor guardado en "votes"
        break                                            #termina el ciclo