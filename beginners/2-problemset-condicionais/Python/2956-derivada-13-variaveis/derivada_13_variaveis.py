base, altura = input().split()
base = float(base)
altura = float(altura)

area_triangulo = (base * altura) / 2

print(
    f'Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = {area_triangulo:.5f}.')
