/*
Given a positive integer, return its corresponding column title as appear in an Excel sheet.

For example:

    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
    ...
Example 1:

Input: 1
Output: "A"
Example 2:

Input: 28
Output: "AB"
Example 3:

Input: 701
Output: "ZY"

*/
#include <string.h>
char *strrev(char *str)
{
    if (!str || ! *str)
        return str;

    int i = strlen(str) - 1, j = 0;

    char ch;
    while (i > j)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}
char * convertToTitle(int n)
{
    char excel[50], *rev = NULL;
    int i = 0, rem = 0, num = 0;
    while (n > 0) 
    {
        rem = n % 26;
        if (rem == 0) 
        {
            excel[i++] = 'Z';
            n = (n / 26) - 1;
        }
        else
        {
            excel[i++] = (rem - 1) + 'A';
            n = n / 26;
        }
    }
    excel[i] = '\0';
    rev = strrev(excel);
    return rev;
}
