/*
// Using Recursion

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

// Using Backtracking   ( More optimized ) because this use constant space complexity i.e. O(1)

class Solution {
public:
    void recurPermute(int ind, vector < int > & nums, vector < vector < int >> & ans) {
      if (ind == nums.size()) {
        ans.push_back(nums);
        return;
      }
      for (int i = ind; i < nums.size(); i++) {
        swap(nums[ind], nums[i]);
        recurPermute(ind + 1, nums, ans);
        swap(nums[ind], nums[i]);
      }
    }
    vector < vector < int >> permute(vector < int > & nums) {
      vector < vector < int >> ans;
      recurPermute(0, nums, ans);
      return ans;
    }
};

*/