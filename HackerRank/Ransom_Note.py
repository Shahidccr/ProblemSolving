def create_dict_from_string(tokens):
    d = {}
    for token in tokens:
        d[token] = d.get(token, 0) + 1
    return d

def ransom_note(magazine, rasom):
    mag_dict = create_dict_from_string(magazine)
    ras_dict = create_dict_from_string(rasom)
    
    flag = True
    for k,v in ras_dict.items():
        if mag_dict.get(k , 0) < v:
            flag = False
            break
    return flag

m, n = map(int, input().strip().split(' '))
magazine = input().strip().split(' ')
ransom = input().strip().split(' ')
answer = ransom_note(magazine, ransom)
if(answer):
    print("Yes")
else:
    print("No")
    

