from sys import stdin

while True:
    try:       
        n=int(stdin.readline())
        lol=[]
        lool=[]
        nmros=[]
        for i in range(n):
            c=int(0)
            correo=stdin.readline()
            b=correo[correo.find("@"):]
            d=correo[:correo.find("@")]
            if "+" in correo:
              d=correo[:correo.find("+")]
            l=''.join(e for e in d if e.isalnum())
            lol.append(b)
            lool.append(l)
            if i > 0:
              for x in range(i):
                  if lol[x]==lol[i] and lool[x]==lool[i]:
                      c=c+1
            nmros.append(c)
        nmros.sort()
        print(n-nmros[-1])        
    except ValueError:
        break
         