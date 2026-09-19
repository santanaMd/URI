#!/usr/bin/python3
# URI JUDGE 1019

valor = int(input())
segundos = valor % 60
minutos = (valor // 60) % 60
horas = (valor // 60) // 60
print(horas,":",minutos,":",segundos,sep="")
