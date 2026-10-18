
def towerofHanoi(n, source, destination, auxilary):
    if n==1:
        print("Move disk 1 from source ", source, "to destination ", destination)
        return
    
    towerofHanoi(n-1, source, auxilary, destination)

    print("Move disk ", n, "from source ", source," to destination ", destination)

    towerofHanoi(n-1, auxilary, destination, source)

    return -1

n=4
towerofHanoi(n, 'A', 'B', 'C')