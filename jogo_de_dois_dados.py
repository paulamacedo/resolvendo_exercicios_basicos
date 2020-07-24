# -*- coding: utf-8 -*-
"""
Exercício 3 proposto por : https://dcc.ufrj.br/~pythonufrj/aulas-python1_37/aula7_pratica.pdf

@author: paulamacedo
"""

from random import randint

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


print(joga_dados())
