bool containsDuplicate(int* nums, int numsSize) {
    //using hash set
    int minVal = nums[0], maxVal = nums[0];
    for(int i=0; i<numsSize; i++){
        if(minVal > nums[i]) minVal = nums[i];
        if(maxVal < nums[i]) maxVal = nums[i];
    }

    int range = maxVal - minVal + 1;
    int* hash = (int*)calloc(range, sizeof(int)); 

    for(int i = 0; i<numsSize; i++){
        int index = nums[i] - minVal;
        if(hash[index] > 0)
            return true;
        else
            hash[index]++;
    }
    return false;
}