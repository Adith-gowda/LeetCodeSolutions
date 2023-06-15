#include<math.h>
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
        int i=0,j=0,k=0;
        int arr[1000000];
        while (i < nums1Size && j < nums2Size) {
            if (nums1[i] <= nums2[j]) {
                arr[k] = nums1[i];
                i++;
            }
            else {
                arr[k] = nums2[j];
                j++;
            }
            k++;
        }
        while (i < nums1Size) {
            arr[k] = nums1[i];
            i++;
            k++;
        }
        while (j < nums2Size) {
            arr[k] = nums2[j];
            j++;
            k++;
        }
        if(k%2==0){
            return ((arr[k/2-1]+arr[(k/2-1)+1])/2.0);
        }
        else{
            return ((arr[(k+1)/2-1]));
        }
        return 0;
}