//27 Remove_Element
int removeElement(int* nums, int numsSize, int val) 
{
    int iCnt = 0,i = 0;
    
   for(i = 0; i < numsSize; i++)
   {
       if(nums[i] != val)
       {
           nums[iCnt] = nums[i];
           iCnt++;
       }
       
   }
    return iCnt;
}
