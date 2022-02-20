n = int(input())

print(n)
div = n // 100
print(div, 'nota(s) de R$ 100,00')
res = n % 100
div = res // 50
print(div, 'nota(s) de R$ 50,00')
res = res % 50
div = res // 20
print(div, 'nota(s) de R$ 20,00')
res = res % 20
div = res // 10
print(div, 'nota(s) de R$ 10,00')
res = res % 10
div = res // 5
print(div, 'nota(s) de R$ 5,00')
res = res % 5
div = res // 2
print(div, 'nota(s) de R$ 2,00')
res = res % 2
div = res // 1
print(div, 'nota(s) de R$ 1,00')
