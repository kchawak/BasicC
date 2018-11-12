// Move all zeros to left in the array

void moveZeroes(int* nums, int numsSize) {
    
    int i, j = 0;
    for (int i = 0; i < numsSize; i++) 
    {
        if (nums[i] != 0) 
        {
            nums[j] = nums[i];
            j++;
        }
    }
    while(j < numsSize) 
    {
        nums[j] = 0;
        j++;
    }
    
}
