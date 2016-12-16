def array_left_rotation(a, n, k):
    if n == k:
        return a
    
    r_a = [None for i in range(n)]
    for i in range(n):
        target_index = (i-k+n) % n
        r_a[target_index] = a[i]
        
    return r_a
        
    
n, k = map(int, input().strip().split(' '))
a = list(map(int, input().strip().split(' ')))
answer = array_left_rotation(a, n, k);
print(*answer, sep=' ')

