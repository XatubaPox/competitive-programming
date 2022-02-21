porta_p, porta_r = input().split()
porta_p = int(porta_p)
porta_r = int(porta_r)

if porta_p == 1 and porta_r == 0:
    print('B')
elif porta_p == 1 and porta_r == 1:
    print('A')
else:
    print('C')
