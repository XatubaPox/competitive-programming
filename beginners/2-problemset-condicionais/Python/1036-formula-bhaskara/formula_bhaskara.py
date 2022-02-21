from math import sqrt

a, b, c = input().split()
a = float(a)
b = float(b)
c = float(c)

try:
    delta = (b ** 2) - 4 * a * c
    r1 = (-b + sqrt(delta)) / (2 * a)
    r2 = (-b - sqrt(delta)) / (2 * a)
    print(f'R1 = {r1:.5f}\nR2 = {r2:.5f}')
except (ValueError, ZeroDivisionError):
    print('Impossivel calcular')
