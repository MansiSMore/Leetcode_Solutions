/*
Given a string S, return the "reversed" string where all characters that are not a letter stay in the same place, and all letters reverse their positions.

Example 1:
Input: "ab-cd"
Output: "dc-ba"

Example 2:
Input: "a-bC-dEf-ghIj"
Output: "j-Ih-gfE-dCba"

Example 3:
Input: "Test1ng-Leet=code-Q!"
Output: "Qedo1ct-eeLg=ntse-T!" 

Note:
S.length <= 100
33 <= S[i].ASCIIcode <= 122 
S doesn't contain \ or "
*/

#include <string.h>

char * reverseOnlyLetters(char * S)
{
    int i = 0, j = strlen(S) - 1;
    char ch;
    
    while(i < j)
    {
        //If it is letter
        if(((S[i] >= 'a' && S[i] <= 'z') || (S[i] >= 'A' && S[i] <= 'Z')) &&
           ((S[j] >= 'a' && S[j] <= 'z') || (S[j] >= 'A' && S[j] <= 'Z')))
        {
            ch = S[i];
            S[i] = S[j];
            S[j] = ch;
            i++;
            j--;
        }
        else if(((S[i] >= 'a' && S[i] <= 'z') || (S[i] >= 'A' && S[i] <= 'Z')) == false)
            i++;
        else
            j--;
        //printf("i , j : %c %c\n", S[i], S[j]);
    }
    
    return S;

}
