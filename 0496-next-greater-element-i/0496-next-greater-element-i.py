class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        l=[]
        for i in range(len(nums1)):
            flag=0
            for j in range(nums2.index(nums1[i])+1,len(nums2)):
                if nums2[j] > nums1[i]:
                    flag=1
                    l.append(nums2[j])
                    break
            if(flag==0):
                l.append(-1)
        return l