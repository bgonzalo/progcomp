for i in range(1,int(input())+1):
    x,y=input().slpit()
    x=int(x)
    y=int(y)
    numb=x-y
    multi=list()
    for a in range(1,numb+1):
        if numb%a==0:
            multi.append(a)
    numeros= " ".join(multi)        
print("Case #%d: %s" %(a,numeros))