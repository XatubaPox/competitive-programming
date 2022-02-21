cod_item, qtd_item = input().split()
cod_item = int(cod_item)
qtd_item = int(qtd_item)

if cod_item == 1:
    total = qtd_item * 4.00
elif cod_item == 2:
    total = qtd_item * 4.50
elif cod_item == 3:
    total = qtd_item * 5.00
elif cod_item == 4:
    total = qtd_item * 2.00
else:
    total = qtd_item * 1.50

print(f'Total: R$ {total:.2f}')
