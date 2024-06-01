print(" A | B | !A | A&B | A|B | A^B")
print("---+---+----+-----+-----+-----")
a = [0, 0, 1, 1]
b = [0, 1, 0, 1]
for i in range(4):
    print(" {} | {} |  {} |  {}  |  {}  |  {}".format(
        a[i], b[i], not a[i], a[i] and b[i], a[i] or b[i], a[i] ^ b[i]))
