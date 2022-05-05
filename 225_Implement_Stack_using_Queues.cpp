/*
Implement a last-in-first-out (LIFO) stack using only two queues. 
The implemented stack should support all the functions of a normal stack (push, top, pop, and empty).
Implement the MyStack class:
void push(int x) Pushes element x to the top of the stack.
int pop() Removes the element on the top of the stack and returns it.
int top() Returns the element on the top of the stack.
boolean empty() Returns true if the stack is empty, false otherwise.
Notes:
You must use only standard operations of a queue, which means that only push to back, peek/pop from front, size and is empty operations are valid.
Depending on your language, the queue may not be supported natively. 
You may simulate a queue using a list or deque (double-ended queue) as long as you use only a queue's standard operations.

Example 1:
Input
["MyStack", "push", "push", "top", "pop", "empty"]
[[], [1], [2], [], [], []]
Output
[null, null, null, 2, 2, false]

Explanation :
MyStack myStack = new MyStack();
myStack.push(1);
myStack.push(2);
myStack.top(); // return 2
myStack.pop(); // return 2
myStack.empty(); // return False

Constraints:
1 <= x <= 9
At most 100 calls will be made to push, pop, top, and empty.
All the calls to pop and top are valid. 

Follow-up: Can you implement the stack using only one queue?
*/
struct node
{
    int val;
    struct node* next;
};
typedef struct 
{
    struct node *rear;
      
} MyStack;

MyStack head;

MyStack* myStackCreate() 
{
    head.rear = NULL;
    return &head;
};

void myStackPush(MyStack* obj, int x) 
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode -> val = x;
    newNode -> next = NULL;
    
    if(head.rear == NULL)
    {
        head.rear = newNode;
    }
    else
    {
        newNode -> next = head.rear;
        head.rear = newNode;
    }
}

int myStackPop(MyStack* obj) 
{
    int top = head.rear -> val;
    struct node *temp = head.rear;
    head.rear = head.rear -> next;
    free(temp);
    return top;
}

int myStackTop(MyStack* obj) 
{
 return obj -> rear -> val;; 
}

bool myStackEmpty(MyStack* obj) 
{
    if(obj -> rear == NULL)
        return true;
    else
        return false;
  
}

void myStackFree(MyStack* obj) 
{
    struct node* temp = NULL;
    while(obj -> rear != NULL)
    {
        temp = obj -> rear;
        obj -> rear = obj -> rear -> next;
        free(temp);
    }    
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);
 
 * int param_2 = myStackPop(obj);
 
 * int param_3 = myStackTop(obj);
 
 * bool param_4 = myStackEmpty(obj);
 
 * myStackFree(obj);
*/
