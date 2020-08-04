//26. Remove_Duplicates_from_Sorted_Array
int removeDuplicates(int* nums, int numsSize)
{
    if(numsSize == 0 || numsSize == 1)
            return numsSize;
    
    int i = 0, j = 0;
    for(; i < numsSize-1 ; i++)
    {
        if(nums[i] != nums[i+1])
        {
            nums[j++] = nums[i];
        }
            
    }
    nums[j++] = nums[numsSize -1];
    return j;
}


