nota = int(input())

if nota >= 1 and nota <= 35:
    print('D')
elif nota >= 36 and nota <= 60:
    print('C')
elif nota >= 61 and nota <= 85:
    print('B')
elif nota >= 86 and nota <= 100:
    print('A')
else:
    print('E')
