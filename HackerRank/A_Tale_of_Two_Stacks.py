class MyQueue(object):
    def __init__(self):
        self.push_st = []
        self.pop_st = []
        
    def peek(self):
        if len(self.pop_st) > 0:
            return self.pop_st[-1]
        else:
            return self.push_st[0]
        
    def pop(self):
        if len(self.pop_st) == 0:
            for i in range(len(self.push_st)):
                self.pop_st.append(self.push_st.pop())
        return self.pop_st.pop()
    
    def put(self, value):
        self.push_st.append(value)

queue = MyQueue()
t = int(input())
for line in range(t):
    values = map(int, input().split())
    values = list(values)
    if values[0] == 1:
        queue.put(values[1])        
    elif values[0] == 2:
        queue.pop()
    else:
        print(queue.peek())
        

