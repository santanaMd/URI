#!/ust/bin/python3
# URI JUDGE 1010

cod_peca0, num_pecas0, vlr_peca0 = input().split()
cod_peca0 = int(cod_peca0)
num_pecas0 = int(num_pecas0)
vlr_peca0 = float(vlr_peca0)
cod_peca1, num_pecas1, vlr_peca1 = input().split()
cod_peca1 = int(cod_peca1)
num_pecas1 = int(num_pecas1)
vlr_peca1 = float(vlr_peca1)
vlr_total = num_pecas0 * vlr_peca0 + num_pecas1 * vlr_peca1
print("VALOR A PAGAR: R$ {0:.2f}".format(vlr_total))
