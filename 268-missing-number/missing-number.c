int missingNumber(int* nums, int numsSize) {
    int missingNumber = 0;
    int i;
    for (i = 0; i < numsSize; i++) {
        missingNumber ^= i ^ nums[i];
    }
    return missingNumber ^ i;
}