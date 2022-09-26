import sys
input = sys.stdin.readline
from collections import deque

dq = deque()

for _ in range(int(input())):
    x = input().split()
    if x[0] == "push_front":
        dq.appendleft(x[1])
    elif x[0] == "push_back":
        dq.append(x[1])
    elif x[0] == "pop_front":
        if len(dq)==0:
            print(-1)
        else:
            print(dq.popleft())
    elif x[0] == "pop_back":
        if len(dq)==0:
            print(-1)
        else:
            print(dq.pop())
    elif x[0] == "size":
        print(len(dq))
    elif x[0] == "empty":
        print(1 if len(dq)==0 else 0)
    elif x[0] == "front":
        if len(dq)==0:
            print(-1)
        else:
            print(dq[0])
    elif x[0] == "back":
        if len(dq)==0:
            print(-1)
        else:
            print(dq[len(dq)-1])