import matplotlib.pyplot as plt
from random import randint
import timeit

def geraLista(arr):

    array = []

    while len(array) < arr:
        n = randint(1, 1 * arr)
        if n not in array: array.append(n)
    return array

operacoes = []
arr = [10000, 20000, 50000, 100000]
aux = []

def insertionSort(array):
    ciclos = 0
    size = len(array)

    for i in range(1, size):

        posAtual = array[i]
        j = i - 1

        while j >= 0 and posAtual < array[j]:
            array[j + 1] = array[j] 
            j -= 1
            
        array[j + 1] = posAtual
        ciclos += 1
        
    operacoes.append(ciclos)
    
def showGraph(x, y, imgName = "img", xl = "Inputs", yl = "Outputs"):
    fig = plt.figure(figsize=(12, 16))
    plt.plot(x, y, label = "Melhor Tempo")
    plt.legend(bbox_to_anchor=(1, 1), bbox_transform=plt.gcf().transFigure)
    plt.ylabel(yl)
    plt.xlabel(xl)
    plt.savefig(imgName)

for i in arr:
  list = geraLista(i)
  aux.append(geraLista(i))

time =[]
for i in range(len(aux)):
    time.append(timeit.timeit("insertionSort({})".format(aux[i]),setup="from __main__ import insertionSort",number=1))

showGraph(arr, time, 'Tempo', 'Numbers', 'Time')
showGraph(arr, operacoes, 'Iterações no laço')
