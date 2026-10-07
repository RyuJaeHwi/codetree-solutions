gen = int(input())
num = int(input())

if gen == 0:
    if num >= 19:
        print("MAN")
    else:
        print("BOY")

else:
    if num >= 19:
        print("WOMAN")
    else:
        print("GIRL")