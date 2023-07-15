/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){


for(int i=0;i<numsSize;i++)
{
    for(int j=i+1;j<numsSize;j++)
{
if(target==nums[i]+nums[j])
{
    *returnSize=2;
    int *rSize=(int *)malloc(2*sizeof(int));
    rSize[0]=i;
    rSize[1]=j;
    return rSize;
}
}
}

return 0;
}