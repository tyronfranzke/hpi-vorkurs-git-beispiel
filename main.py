n = int(input("Gib eine positive Ganzzahl ein: "))

if n == 0 or n == 1:
    flag = 1
else:
    flag = 0

for i in range(2, n // 2 + 1):
    if n % i == 0:
        flag = 1
        break

print("Jetzt kommt das Ergebnis.")

if flag == 0:
    print(f"{n} ist eine Primzahl.")
else:
    print(f"{n} ist keine Primzahl.")
