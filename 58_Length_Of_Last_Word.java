//58 Length of Last Word
class Solution {
    public int lengthOfLastWord(String s) 
    {
        String[] token=s.split(" ");                     				//split the string according to space
        int wordcount=0,iMax=0;
		wordcount=token.length;
		if(token.length>0)
		{ 
            int i=token.length-1;
            iMax=token[i].length();                                            //store the length of maximum word into iMax
        }
        return iMax;
    }
}

