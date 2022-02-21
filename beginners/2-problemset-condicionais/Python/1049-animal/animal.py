p1 = input()
p2 = input()
p3 = input()

if p1 == 'vertebrado' and p2 == 'ave' and p3 == 'carnivoro':
    print('aguia')
elif p1 == 'vertebrado' and p2 == 'ave' and p3 == 'onivoro':
    print('pomba')
elif p1 == 'vertebrado' and p2 == 'mamifero' and p3 == 'onivoro':
    print('homem')
elif p1 == 'vertebrado' and p2 == 'mamifero' and p3 == 'herbivoro':
    print('vaca')
elif p1 == 'invertebrado' and p2 == 'inseto' and p3 == 'hematofago':
    print('pulga')
elif p1 == 'invertebrado' and p2 == 'inseto' and p3 == 'herbivoro':
    print('lagarta')
elif p1 == 'invertebrado' and p2 == 'anelideo' and p3 == 'hematofago':
    print('sanguessuga')
else:
    print('minhoca')
