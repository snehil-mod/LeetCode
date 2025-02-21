void moveZeroes(int* nums, int numsSize) {
    
    if(numsSize == 1){
        printf("%d", nums[0]);
    }
    else{
        int count = 0, j=0, i;
        for(i=0; i<numsSize; i++){
            if(nums[i] != 0){
                nums[j++] = nums[i];
            }
        }
        while(j < numsSize){
            nums[j++] = 0;
        }
    }
}