def solution(s:list, n):
    s.sort()
    s.sort(key=lambda x:x[n])
    return s