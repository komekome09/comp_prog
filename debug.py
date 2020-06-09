import random
h = random.randint(2, 10)
w = random.randint(2, 10)
print("{} {}".format(h, w))
for i in range(h):
    for j in range(w):
        if random.choice([True, False]):
            print('#', end='')
        else:
            print('.', end='')
    print("")
