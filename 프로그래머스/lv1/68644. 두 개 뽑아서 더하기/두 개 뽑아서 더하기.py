def solution(a):
    n = []
    for i in range(len(a)): 
        for j in range(i+1,len(a)): 
            n.append(a[i]+a[j])
    return sorted(list(set(n)))