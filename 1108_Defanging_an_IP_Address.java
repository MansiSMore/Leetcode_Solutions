/*
Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".

Example 1:
Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"

Example 2:
Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"

Constraints:
The given address is a valid IPv4 address.

*/
class Solution {
    public String defangIPaddr(String address) 
    {
        StringBuilder str = new StringBuilder();
        
        for(int i = 0; i < address.length(); i++)
        {
            if(address.charAt(i) == '.')
                str.append("[.]");
            else
                str.append(address.charAt(i));
        }
        
        return str.toString();
    }
}
