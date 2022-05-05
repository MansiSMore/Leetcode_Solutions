/*
Implement a first in first out (FIFO) queue using only two stacks. 
The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).

Implement the MyQueue class:
void push(int x) Pushes element x to the back of the queue.
int pop() Removes the element from the front of the queue and returns it.
int peek() Returns the element at the front of the queue.
boolean empty() Returns true if the queue is empty, false otherwise.

Notes:
You must use only standard operations of a stack, which means only push to top, peek/pop from top, size, and is empty operations are valid.
Depending on your language, the stack may not be supported natively. 
You may simulate a stack using a list or deque (double-ended queue) as long as you use only a stack's standard operations.
 
Example 1:
Input
["MyQueue", "push", "push", "peek", "pop", "empty"]
[[], [1], [2], [], [], []]
Output
[null, null, null, 1, 1, false]

Explanation :
MyQueue myQueue = new MyQueue();
myQueue.push(1); // queue is: [1]
myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
myQueue.peek(); // return 1
myQueue.pop(); // return 1, queue is [2]
myQueue.empty(); // return false

Constraints:
1 <= x <= 9
At most 100 calls will be made to push, pop, peek, and empty.
All the calls to pop and peek are valid.

Follow-up: Can you implement the queue such that each operation is amortized O(1) time complexity? 
In other words, performing n operations will take overall O(n) time even if one of those operations may take longer.
*/
typedef struct 
{
    int *val;
    int top;
} MyQueue;

MyQueue* myQueueCreate() 
{
    MyQueue *head = (MyQueue*)malloc(sizeof(MyQueue));
    head -> val = (int *)malloc(1000*sizeof(int));
    head -> top = -1;
    return head;
}

void myQueuePush(MyQueue* obj, int x) 
{
    //(obj -> top)++;
    (obj -> val)[++obj -> top] = x;
}

int myQueuePop(MyQueue* obj) 
{
    int ans = obj -> val[0];
    for(int i = 1; i <= obj -> top; i++)
    {
        obj -> val[i - 1] = obj -> val[i];
    }
    obj -> top--;
    return ans;
}

int myQueuePeek(MyQueue* obj) 
{
    return obj -> val[0];
}

bool myQueueEmpty(MyQueue* obj) 
{
    if(obj -> top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void myQueueFree(MyQueue* obj) 
{
    free(obj -> val);
    free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/
