a = int(input())
b = int(input())
c = int(input())
sum = a+b+c
if sum<=100 and sum>=80:
    print("A")
elif sum>=75 and sum<80:
    print("B+")
elif sum>=70 and sum<75:
    print("B")
elif sum>=65 and sum<70:
    print("C+")
elif sum>=60 and sum<65:
    print("C")
elif sum>=55 and sum<60:
    print("D+")
elif sum>=50 and sum<55:
    print("D")
elif sum>=0 and sum<50:
    print("F")
