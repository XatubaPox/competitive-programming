n1, n2, n3, n4 = map(float, input().split())

media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10

if media >= 7:
    print(f'Media: {media:.1f}\nAluno aprovado.')
elif media < 5:
    print(f'Media: {media:.1f}\nAluno reprovado.')
else:
    print(f'Media: {media:.1f}\nAluno em exame.')
    ne = float(input())

    print(f'Nota do exame: {ne:.1f}')
    mediae = (media + ne) / 2

    if (mediae >= 5):
        print(f'Aluno aprovado.\nMedia final: {mediae:.1f}')
    else:
        print(f'Aluno reprovado.\nMedia final: {mediae:.1f}')
