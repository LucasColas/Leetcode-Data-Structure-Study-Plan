
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int a[1001] = {0};
    int min = nums1Size<nums2Size?nums1Size:nums2Size;
    int * b = malloc(min*sizeof(int));
    int count = 0;
    for(int i=0; i<nums1Size; i++)
        a[nums1[i]]++;
    for(int i=0; i<nums2Size; i++)
        if(a[nums2[i]] != 0)
        {
            b[count] = nums2[i];
            count++;
            a[nums2[i]]--;
        }
    *returnSize = count;
    return b;

}
