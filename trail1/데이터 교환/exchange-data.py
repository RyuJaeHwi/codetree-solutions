a, b, c = 5, 6, 7

temp = a  # temp = 5
a = c  # a = 7
c = b  # c = 6
b = temp  # b = 5

print(a)
print(b)
print(c)