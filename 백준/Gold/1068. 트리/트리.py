def dfs(n, tree):
    tree[n] = None
    for i in range(len(tree)):
        if n == tree[i]:
            dfs(i, tree)

n = int(input())
tree = list(map(int, input().split()))
k = int(input())
cnt = 0

dfs(k, tree)
for i in range(len(tree)):
    if tree[i] != None and i not in tree:
        cnt += 1
print(cnt)