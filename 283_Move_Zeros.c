//283. Move Zeroes

//Move Zeros
//i/p : [0,1,0,3,12]
//o/p : [1,3,12,0,0]


void moveZeroes(int* nums, int numsSize)
{
    int i = 0 , j = 1 , temp = 0;
    
    while(j != numsSize)
    {
        if(nums[i] == 0 && nums[j] != 0)
        {
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
            i++;
        }
        else if(nums[i] == 0 && nums[j] == 0)
            j++;
        else
        {
            i++;
            j++;
        }
    }
}
