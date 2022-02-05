

int maxSubArray(int* nums, int numsSize){
    if (numsSize == 1) {
        return nums[0];
    }
    
    int max_ = nums[0];
    int current_max = 0;
    
    for(int i = 0; i < numsSize; i++) {
        current_max += nums[i];
        
        if (current_max > max_)
            max_ = current_max;
        
        if (current_max < 0)
            current_max = 0;

    }
    
    return max_;
}
