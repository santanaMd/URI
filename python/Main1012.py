#!/usr/bin/python3
# URI JUDGE 1012

var_a, var_b, var_c = input().split()
var_a = float(var_a)
var_b = float(var_b)
var_c = float(var_c)
print("TRIANGULO: {0:.3f}".format((var_a * var_c) / 2),
        "\nCIRCULO: {0:.3f}".format(3.14159 * var_c ** 2),
        "\nTRAPEZIO: {0:.3f}".format((var_c * (var_a + var_b)) / 2),
        "\nQUADRADO: {0:.3f}".format(var_b ** 2),
        "\nRETANGULO: {0:.3f}".format(var_a * var_b),
        sep="")
