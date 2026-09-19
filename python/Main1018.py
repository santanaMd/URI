#!/usr/bin/python3
# URI JUDGE 1018

valor = int(input())
print(valor)
i = True
cedula = [0] * 7
while(i):
   if(valor>=100):
      valor = valor - 100
      cedula[0] += 1
      continue
   if(valor>=50):
      valor = valor - 50
      cedula[1] += 1
      continue
   if(valor>=20):
      valor = valor - 20
      cedula[2] += 1
      continue
   if(valor>=10):
      valor = valor - 10
      cedula[3] += 1
      continue
   if(valor>=5):
      valor = valor - 5
      cedula[4] += 1
      continue
   if(valor>=2):
      valor = valor - 2
      cedula[5] += 1
      continue
   if(valor>=1):
      valor = valor - 1
      cedula[6] += 1
      continue
   i = False
print(cedula[0]," nota(s) de R$ 100,00\n",
      cedula[1]," nota(s) de R$ 50,00\n",
      cedula[2]," nota(s) de R$ 20,00\n",
      cedula[3]," nota(s) de R$ 10,00\n",
      cedula[4]," nota(s) de R$ 5,00\n",
      cedula[5]," nota(s) de R$ 2,00\n",
      cedula[6]," nota(s) de R$ 1,00",sep="")
