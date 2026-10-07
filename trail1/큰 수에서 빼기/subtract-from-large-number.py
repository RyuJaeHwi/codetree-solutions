A, B = map(int, input().split())

if A > B:
    print(A - B)

if B > A:
    print(B - A)

if A == B:
    print(0)