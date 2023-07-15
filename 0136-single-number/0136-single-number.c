int singleNumber(int* nums, int numsSize){
    int a=0,count=0;
for(int i=0;i<numsSize;i++)
{
    a=0,count=0;
    for(int j=0;j<numsSize;j++)
    {
        if(i!=j && nums[i]==nums[j])
        {
            count++;
            a=count;
            break;
            }
        
        
    }
    if(a==0)
        {
            return nums[i];
        }
}
return 0;
}