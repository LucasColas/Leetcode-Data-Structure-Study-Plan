

int cmp(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}

bool containsDuplicate(int* nums, int numsSize){
    
    qsort(nums, numsSize, sizeof(int), cmp);
    int count=1;
    
    for(int i=1;i<numsSize;i++){
        
        if(nums[i-1]==nums[i]) {
            count++;
        }
            
        else {
            count=1;
        }
            
        if(count>1) {
            return true;
        }
            
    }

    return false;
    
}

