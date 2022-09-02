#!/usr/bin/python3
palins = []
for i in range(100, 1000):
    for j in range(i, 1000):
        p = i * j

        print(f"{i} x {j} = {p}")

        l = str(p)
        if l == l[::-1]:
            print("found!!!")
            palins.append((i, j, p))

print(palins)