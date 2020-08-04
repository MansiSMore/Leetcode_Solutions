//9_Palindrome_Number
bool isPalindrome(int x)
{
    long rev = 0, temp = x;
    if(x < 0)
        return false;
    
    while(temp != 0)
    {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    
    if(rev == x)
        return true;
    else
        return false;
    
}
