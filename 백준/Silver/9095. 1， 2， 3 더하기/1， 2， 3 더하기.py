count = 0

def cal(t, T):
  global count
  if t == T:
      count += 1
      return 
  elif t > T :
      return
  elif t < T :
      cal(t+1, T)
      cal(t+2, T)
      cal(t+3, T)

for i in range(int(input())):
    count = 0
    cal(0, int(input()))
    print(count)