# -*- coding: utf-8 -*-
"""
Lista disponível aqui : https://dcc.ufrj.br/~pythonufrj/aulas-python1_37/aula7_pratica.pdf
@author: paulamacedo
"""

from random import randint


#Exercicio 3 da lista

def joga_dados():
    
    vezes = 0 
    jogadas = 0
    while vezes == 0 :  
        dado1 = randint(1,6)
        dado2 = randint(1,6)
        jogadas = jogadas + 1 
        if (dado1 == dado2):
            vezes = vezes + 1
    return jogadas

print("Exercicio 3")
print(joga_dados())


print("-------------------------------------------------------")

#Exercicio 4 da Lista

def posLetra(cadeiadecaracter, letra, numero):

    i = 0
    while numero !=0 :
        if cadeiadecaracter[i] == letra:
            numero = numero - 1
        i = i + 1
    return i - 1 

print("Exercicio 4")
print (posLetra("mariana come banana", 'a', 3))

