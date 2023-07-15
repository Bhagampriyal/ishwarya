/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
int i=0;
int j= numbersSize-1;

while(i<=j){
if(target==numbers[i]+numbers[j])
{
    *returnSize=2;
    int *returnSize=(int *)malloc(2*sizeof(int));
    returnSize[0]=i+1;
    returnSize[1]=j+1;
    return returnSize;
}
else if(target<numbers[i]+numbers[j])
{
    j--;
}
else{
    i++;
}
}

return returnSize ;

}