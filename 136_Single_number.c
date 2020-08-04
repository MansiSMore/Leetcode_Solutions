//136. Single Number

//Single No
//Input: [4,1,2,1,2]
//Output: 4


int singleNumber(int* nums, int numsSize)
{
    int iCnt = 0, i = 0, j = 0;
    
    for(i = 0 ;i < numsSize ;i++)
    {
        for(j = 0 ;j < numsSize ;j++)
        {
            if(i != j && nums[i] == nums[j])
            {
                iCnt++;
                break;
            }
        }
        
        if(iCnt == 0)
            break;
        else
            iCnt = 0;
    }
    return nums[i];
}

