def is_matched(expression):
    matched = True
    expression = expression.strip()
    try:
        stack = []
        mapping = {'(' : ')', '{': '}', '[': ']'}
        

        for i in range(len(expression)):
            if expression[i] == '(' or expression[i] == '{' or expression[i] == '[':
                stack.append(expression[i])
            elif expression[i] == ')' or expression[i] == '}' or expression[i] == ']':
                if len(stack) == 0:
                    matched = False
                    break
                last_item = stack.pop()
                if mapping[last_item] != expression[i]:
                    matched = False
                    break
        if(len(stack) > 0):
            matched = False
    except:
        pass
        
    return matched

t = int(input().strip())
for a0 in range(t):
    expression = input().strip()
    if is_matched(expression) == True:
        print("YES")
    else:
        print("NO")