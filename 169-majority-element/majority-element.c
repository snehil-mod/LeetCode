int majorityElement(int* nums, int numsSize) {
    //element that appears more than half of the size of array.
    //asume that there is always a majority element in the array
    int target = nums[0], count = 1;
    for(int i = i; i < numsSize; i++){
        if(nums[i] == target)
            count++;
        else{
            count--;
            if(count == 0){
                target = nums[i];
                count = 1;
            }
        }
    }
    return target;
}