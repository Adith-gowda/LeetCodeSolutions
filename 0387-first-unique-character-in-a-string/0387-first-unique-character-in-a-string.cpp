class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26];
        memset(arr,0,sizeof(arr)) ;
        queue<int> index ;
        for(int i = 0;i < s.size();i++){
            char ch = s[i]  ; 
            if(arr[ch-'a'] == 0){
                index.push(i) ; 
            }
            arr[ch-'a']++ ; 
        }
        while(!index.empty()){
            if(arr[s[index.front()]-'a'] == 1)
            return index.front() ;
            index.pop() ;  
        }
        return -1 ;
    }
};