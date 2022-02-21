h_ini, h_fim = input().split()
h_ini = int(h_ini)
h_fim = int(h_fim)

if h_ini > h_fim:
    tempo_total = 24 - h_ini + h_fim
elif h_ini < h_fim:
    tempo_total = h_fim - h_ini
else:
    tempo_total = 24

print('O JOGO DUROU', tempo_total, 'HORA(S)')
