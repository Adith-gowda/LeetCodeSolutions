class Solution {
public:
    static bool mysort(string a, string b){
        return a+b > b+a;
    }
    string largestNumber(vector<int>& nums) {
        string s = "";
        vector<string> all_numbers;
        for(int it: nums){
            all_numbers.push_back(to_string(it));
        }
        for(int i=0;i<nums.size();i++){
            cout<<all_numbers[i]<<" ";
        }
        sort(all_numbers.begin(),all_numbers.end(),mysort);
        if(all_numbers[0]=="0"){
            return "0";
        }
        for(string a: all_numbers){
            s += a;
        }
        return s;
    }
};