class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        nums.reverse()
        k=k%len(nums)
        print(nums)
        j=0
        for i in range(0,k//2):
            print(i,(k-j-1))
            t=nums[i]
            nums[i]=nums[k-j-1]
            nums[k-j-1]=t
            j+=1
        print(nums)
        # print(k+(len(nums)-k)//2)
        j=0
        for i in range(k,k+(len(nums)-k)//2):
            t=nums[i]
            nums[i]=nums[len(nums)-j-1]
            nums[len(nums)-j-1]=t
            j+=1
            