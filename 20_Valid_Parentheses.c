/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:
Input: s = "()"
Output: true

Example 2:
Input: s = "()[]{}"
Output: true

Example 3:
Input: s = "(]"
Output: false

Example 4:
Input: s = "([)]"
Output: false

Example 5:
Input: s = "{[]}"
Output: true
 
Constraints:
1 <= s.length <= 104
s consists of parentheses only '()[]{}'.

*/

struct stack
{
    char data;
    struct stack *next;
};

void push(struct stack **head, char ch)
{
    struct stack *node = (struct stack*)malloc(sizeof(struct stack));
    node -> data = ch;
    node -> next = (*head);
    (*head) = node;
    
}

char pop(struct stack **head)
{
    char ret;
    struct stack *top = NULL;
    
    if((*head) != NULL)
    {top = (*head);
        ret = top -> data;
        (*head) = top -> next;
        free(top);
    }
    return ret;

}

bool isMatchingPair(char ch1, char ch2) 
{ 
    if((ch1 == '(' && ch2 == ')') || (ch1 == '{' && ch2 == '}') || (ch1 == '[' && ch2 == ']'))
        return true;
    else
        return false; 
} 

bool isValid(char *s)
{
    int i = 0; 
    char ch1;
  
    struct stack* sobj = NULL; 
  
    while (s[i])  
    { 
        if (s[i] == '{' || s[i] == '(' || s[i] == '[') 
            push(&sobj, s[i]); 
  
        if (s[i] == '}' || s[i] == ')' || s[i] == ']') 
        { 
            if (sobj == NULL) 
                return false; 

            else if (!isMatchingPair(pop(&sobj), s[i])) 
                return false; 
            
        } 
        i++; 
    } 
    //printf("%c",s[i]);
    if (sobj == NULL) 
        return true; // balanced 
    else
        return false; // not balanced 
}
