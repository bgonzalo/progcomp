x = int(input())

if x <= 0:
    x = -x
    sumatoria = x
    
    while x != 0:
        sumatoria = sumatoria + x -1
        x = x - 1
        
    print(-1*sumatoria + 1)
        
else:
    sumatoria = x
    
    while x != 0:
        sumatoria = sumatoria + x -1
        x = x-1

    print(sumatoria)
    