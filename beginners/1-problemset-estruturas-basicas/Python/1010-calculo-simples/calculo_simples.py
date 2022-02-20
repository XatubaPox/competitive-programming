valores = []
pecas = []

for i in range(2):
    cod_peca, num_peca, valor = input().split()
    cod_peca = int(cod_peca)
    num_peca = int(num_peca)
    valor = float(valor)
    pecas.append(num_peca)
    valores.append(valor)

valor_total = (valores[0] * pecas[0]) + (valores[1] * pecas[1])

print(f'VALOR A PAGAR: R$ {valor_total:.2f}')
