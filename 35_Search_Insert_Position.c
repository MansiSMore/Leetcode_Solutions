//35 Search Insert Position
int searchInsert(int* nums, int numsSize, int target) 
{
    int i = 0;
    
    for(i = 0; i < numsSize; i++)
    {
        if(nums[i] > target)
        {
            break;
        }
        if(nums[i] == target)
        {
            break;        
        }
        if((nums[i] < target) && (nums[i+1] > target))
        {
            i = i + 1;
            break;
        }
    }
    
    return i;
}
