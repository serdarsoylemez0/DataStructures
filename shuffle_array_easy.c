// o(n) storage


int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *ptr=nums, *arr;
    arr = (int*)malloc(sizeof(int)*numsSize);
    for(int i = 0, j=0; i<n; i++)
    {
        arr[j++] = ptr[i];
        arr[j++] = ptr[i+n];
    }
    *returnSize = numsSize;
    return arr;
}


// o(1)

int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *ptr=nums;
    for(int i = n; i<numsSize; i++)
        nums[i] = nums[i] * 10 + nums[i-n];


    int index=0;

    for(int i = n; i<numsSize; index+=2)
    {
        nums[index] = nums[i] % 10;
        nums[index + 1] = nums[i++] / 10;
    }
    *returnSize = numsSize;
    return nums;
}
