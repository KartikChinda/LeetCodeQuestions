

int removeDuplicates(int* nums, int numsSize){
    int fin = 1;
    for(int i = 1; i<numsSize;i++){
        if(nums[fin-1] != nums[i]){
            nums[fin] = nums[i];
            fin++;
        }
    }
    return fin;
}