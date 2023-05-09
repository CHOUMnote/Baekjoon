from  math import inf
from collections import defaultdict
import heapq

def solution(n, costs):
     mapp = defaultdict(list)
     dist = [inf]*n
     check = [False]*n   
     result = 0
     
     for i,j,k in costs:
          mapp[i].append((k,j))
          mapp[j].append((k,i))
     
     dist[0]=0
     q = mapp[0]
     check[0]=True
     heapq.heapify(q)
     count = 1
     while count!=n:
          w,t = heapq.heappop(q)
          if check[t] is False:
               check[t] = True
               result+=w
               count+=1
               
               for i in mapp[t]:
                    heapq.heappush(q,i)

     return result
