def get_dict_and_set(s):
    d = {}
    st = set()
    for i in range(len(s)):
        st.add(s[i])
        d[s[i]] = d.get(s[i], 0) + 1
    
    return d, st

def count_removable_chars( common_set, s_dict ):
    counter = 0
    for c, v in s_dict.items():
        if c not in common_set:
            counter += v
    return counter

def number_needed(a, b):
    a_dict, a_set = get_dict_and_set(a)
    b_dict, b_set = get_dict_and_set(b)
    #print(a_dict, a_set)
    #print(b_dict, b_set)
    
    common_chars = a_set.intersection(b_set)
    
    char_to_remove = 0
    for c in common_chars:
        char_to_remove += max(a_dict[c], b_dict[c]) - min(a_dict[c], b_dict[c])
    
    #print(count_removable_chars(common_chars, a_dict))
    #print(count_removable_chars(common_chars, b_dict))
    char_to_remove += count_removable_chars(common_chars, a_dict)
    char_to_remove += count_removable_chars(common_chars, b_dict)
    #print(char_to_remove)

    return char_to_remove

a = input().strip()
b = input().strip()

print(number_needed(a, b))

