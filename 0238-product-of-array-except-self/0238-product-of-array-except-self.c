/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize)
{
    int product=1,count=0;

    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==0)
        {
            count++;
            continue;
        }
        product=product*nums[i];
    }
    for(int i=0;i<numsSize;i++)
    {
        if(count>=2)
        {
            nums[i]=0;
        }
        else if(count==1)
        {
            if(nums[i]==0)
            {
                nums[i]=product;
                continue;
            }nums[i]=0;
        }
        else
        {
            nums[i]=product/nums[i];
        }
    }
    
    *returnSize=numsSize;
    return nums;
}