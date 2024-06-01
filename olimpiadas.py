from random import randint

numero_de_habitantes = int(input("digite o numero de habitantes: "))
numero_de_turnos = int(input("digite o numero de turnos: "))
lista = []

for i in range(numero_de_habitantes):
    habitante = input()
    lista.append(habitante)
    
for j in range(numero_de_turnos):
        sorteio = randint(1, len(lista))
        i = 1
        d = 0
        print("sorteio:",sorteio)
        while i * sorteio - 1 - d < len(lista):
            print("lista: ",*lista)
            lista.pop(sorteio * i - 1 - d)
           
            print("indice retirado: ",sorteio * i - 1)
            i+=1
            d+=1
            print(i * sorteio - 1 - d, len(lista))
            print("d",d)

    
for e in range(len(lista)):
    print(lista[e])
