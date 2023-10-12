/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) 
    {
        int n=mountainArr.length();
        int left=0;
        int right=n-1;
        while(left<=right)
        {
            int mid = (left+right)/2;
            if(mountainArr.get(mid)<=mountainArr.get(mid+1))
            {
                left = mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        int peakelement=left;
        left=0;
        right=peakelement;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(mountainArr.get(mid)==target)
            {
                return mid;
            }
            else if(mountainArr.get(mid)<target)
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }


        right=n-1;
        left=peakelement;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(mountainArr.get(mid)==target)
            {
                return mid;
            }
            else if(mountainArr.get(mid)<target)
            {
                
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
        return -1;
        
    }
};