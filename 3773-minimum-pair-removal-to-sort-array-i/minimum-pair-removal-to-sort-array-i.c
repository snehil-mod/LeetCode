bool isSorted(int *nums, int numsSize){
    for(int i=0; i<numsSize-1; i++){
        if(nums[i] > nums[i+1]){
            return false;
        }
    }
    return true;
}

int minimumPairRemoval(int* nums, int numsSize) {
    if(numsSize <= 1) return 0;

    int operations = 0;
    while(!isSorted(nums, numsSize)){
        int minSum = nums[0] + nums[1];
        int index = 0;

        for(int i=1; i<numsSize-1; i++){
            int sum = nums[i] + nums[i+1];
            if(sum < minSum){
                minSum = sum;
                index = i;
            }
        }
        nums[index] = minSum;
        for(int i = index+1; i<numsSize-1; i++){
            nums[i] = nums[i+1];
        }
        numsSize--;
        operations++;
    }
    return operations;
}