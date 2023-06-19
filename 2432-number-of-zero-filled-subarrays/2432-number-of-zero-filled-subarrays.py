class Solution:
    def zeroFilledSubarray(self, nums: List[int]) -> int:
        # k=2
        # s=0
        # s=s+nums.count(0)
        # a=list(map(str,nums))
        # for i in range(0,len(a)):
        #     if a[i]!="0" and "0" in a[i]:
        #         a[i]="1"
        # a="".join(a)
        # while(k<=len(nums)):
        #     b=k*"0"
        #     res = [i for i in range(len(a)) if a.startswith(b, i)]
        #     if len(res)==0:
        #         break
        #     s=s+len(res)
        #     k+=1
        # # print(s)
        # return s
        z=0
        ans=0
        for i in range(len(nums)):
            if(nums[i]==0):
                z+=1
            else:
                ans+=(z*(z+1))//2
                z=0
        ans+=(z*(z+1))//2
        return ans
