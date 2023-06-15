/*

class Solution {
public:
    void palindrome(vector<int>&ds,vector<int>& nums,bool freq[],vector<vector<int>>&ans){
    if(ds.size()==nums.size()){
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(!freq[i]){
            freq[i]=true;
            ds.push_back(nums[i]);
            palindrome(ds,nums,freq,ans);
            ds.pop_back();
            freq[i]=false;
        }
    }
    
}
    vector<vector<int>> permute(vector<int>& nums) {
        bool freq[nums.size()];
        for(int i=0;i<nums.size();i++){
            freq[i]=false;
        }
        vector<int>ds;
        vector<vector<int>>ans;
        palindrome(ds,nums,freq,ans);
        return ans;
    }
};

*/