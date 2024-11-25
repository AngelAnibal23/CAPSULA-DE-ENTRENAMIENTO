'''
Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber cuanto debera pagar finalmente por su compra
'''

compra = float(input("Digite el monto de la compra: "))

dsct = compra * (1 - 0.15)

print((f"El monto final por pagar es: {dsct}"))
