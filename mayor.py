
def maxNumberThree(n1,  n2, n3): 
    if n1 >= n2 and n1 >= n3: 
        return n1 
    elif n2 >= n1 and n2 > n3: 
        return n2 
    else: 
        return n3 
        

a = int(input("d")) 
b = int(input("d"))
c = int(input("D")) 

maxor = maxNumberThree(a, b, c) 

print(f"El mayor numero es: {maxor}") 
