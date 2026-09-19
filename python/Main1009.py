#!/usr/bin/python3
# URI JUDGE 1009

nom_func = input()
slr_fixo = float(input())
tot_vendas = float(input())
total = slr_fixo + tot_vendas * 0.15
print("TOTAL = R$ {0:.2f}".format(total),sep="")
