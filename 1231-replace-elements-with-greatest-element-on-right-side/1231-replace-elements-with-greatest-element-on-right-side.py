class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        if(len(arr)==1):
            return [-1]
        else:
            mx=arr[len(arr)-1]
            prev=-1
            for i in range(len(arr)-1,0,-1):
                if(mx<prev):
                    mx=prev
                prev=arr[i-1]
                arr[i-1]=mx
            arr[len(arr)-1]=-1
        return arr