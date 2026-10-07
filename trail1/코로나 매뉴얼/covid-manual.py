a, b = input().split()
b = int(b)

c, d = input().split()
d = int(d)

e, f = input().split()
f = int(f)

count = 0

if a == "Y" and b >= 37:
    count += 1
if c == "Y" and d >= 37:
    count += 1
if e == "Y" and f >= 37:
    count += 1

if count >= 2:
    print("E")
else:
    print("N")