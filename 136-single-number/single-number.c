int singleNumber(int* nums, int numsSize) {
    
    int re = nums[0];
    for (int i = 1; i < numsSize; i++ ){
        re ^= nums[i];
    }
    return re; 
}
