n,arr = input(),input().split()
print(int("".join(list(zip(*sorted([(int((arr[i]*10)[:10]),arr[i]) for i in range(int(n))],key=lambda x: -x[0])))[1])))
