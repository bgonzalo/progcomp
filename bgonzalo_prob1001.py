#http://acm.timus.ru/help.aspx?topic=python

import sys, math
nums = []                        #crea una lista vacia llamada nums
for line in sys.stdin:           #a cada elemento en la lista introducida atravez de stdin
   for word in line.split():     #los separa en cada espacio y a acada elemento de las nuevas listas
      nums.append(float(word))   #los transforma en reales y los pone en la lista nums
nums.reverse()                   #invierte la lista nums
for num in nums:                 #a cada elemento de nums
   print("%.4f" % math.sqrt(num))#muestra su raiz cuadrada hasta el 4° decimal en la consola 
