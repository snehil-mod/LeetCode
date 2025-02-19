int removeElement(int* nums, int numsSize, int val) {
    //nums -> array, numsSize -> array size, val -> target value
    int j=0;
    for(int i=0; i<numsSize; i++)
    {
        if(nums[i] != val){
            nums[j++] = nums[i];
        }
    }
    return j;
}