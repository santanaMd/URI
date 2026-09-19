#!/usr/bin/python3
# URI JUDGE 1013

var_a, var_b, var_c = input().split()
var_a = int(var_a)
var_b = int(var_b)
var_c = int(var_c)
maiorAb = (var_a + var_b + abs(var_a - var_b)) / 2
maiorTodos = (var_c + maiorAb + abs(var_c - maiorAb)) / 2
print("{0:.0f} eh o maior".format(maiorTodos),sep="")
