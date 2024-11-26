
def sumDigitsNumbers(nume): 
    s = 0
    while nume > 0:
        s += int(nume % 10)
        nume = int(nume / 10)
        
    
    return s 


num = int(input("Digite el numero: ")) 

result = sumDigitsNumbers(num)

print(f"La suma de digitos es: {result}")