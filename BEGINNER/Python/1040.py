# -*- coding: utf-8 -*-

N1, N2, N3, N4 = map(float, input().split())

nota_exame = 0.0

media = (((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)))/10

print("Media: %0.1f" %media)

if   (media >= 7.0):
    print("Aluno aprovado")
elif (media < 5.0):
    print("Aluno reprovado")
    nota_exame = float(input())
    print("Nota do exame: %0.1f" %nota_exame)
    media = (media + nota_exame)/2
elif (media >= 5.0 and media <= 6.9):
    print("Aluno em exame")
print("Media final: %0.1f" %media)
