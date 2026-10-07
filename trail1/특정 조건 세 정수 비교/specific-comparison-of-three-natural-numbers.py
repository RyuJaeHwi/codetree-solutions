a, b, c = map(int, input().split())

if a == min(a, b, c):
    answer = 1
else:
    answer = 0

if a == b == c:
    answer2 = 1
else:
    answer2 = 0

print(answer, answer2)