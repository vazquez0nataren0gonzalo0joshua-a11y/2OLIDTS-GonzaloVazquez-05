# -*- coding: utf-8 -*-
from __future__ import print_function


def push_arreglo_aves(arreglo):
    arreglo.append("Mayna")
    arreglo.append("Periquitos")
    arreglo.append("Cacatua")
    
    print("Los valores de la lista despues de insertar son: \n")
    for i in arreglo:
        print(i, end=" ")
    print("\n")
    return arreglo

def arreglo_aves(arreglo_original):
    print("Los valores iniciales del arreglo son: \n")
    for ave in arreglo_original:
        print(ave, end=" ")
    print("\n")

def main():
    aves = ["Loro gris", "Paloma de diamante", "Coctel"]
    
    arreglo_aves(aves)
    push_arreglo_aves(aves)

if __name__ == "__main__":
    main()
