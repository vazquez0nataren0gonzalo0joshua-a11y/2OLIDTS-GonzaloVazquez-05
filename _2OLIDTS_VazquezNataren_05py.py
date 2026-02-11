# -*- coding: latin-1 -*-
# Declara una lista de cadenas
aves = ["Loro gris", "Paloma de diamante", "Cóctel"]
print("Los valores de la lista antes de insertar:")

# Itera sobre la lista para imprimir los valores
for ave in aves:
    print(ave, end=" ")

print("\n")

# Agrega tres valores al final de la lista utilizando el método append()
aves.append("Mayna")
aves.append("Periquitos")
aves.append("Cacatúa")

print("Los valores de la lista después de insertar:")
# Itera sobre la lista para imprimir los valores
for ave in aves:
    print(ave, end=" ")

print("\n")