#!/usr/bin/python3
# URI JUDGE 1015

import math

px1, py1 = input().split()
px1 = float(px1)
py1 = float(py1)
px2, py2 = input().split()
px2 = float(px2)
py2 = float(py2)
distancia = math.sqrt((px2 - px1) ** 2 + (py2 - py1) ** 2)
print("{0:.4f}".format(distancia))
