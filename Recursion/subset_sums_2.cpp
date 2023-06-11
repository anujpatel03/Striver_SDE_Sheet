

/*

class Solution {
public:
    vector<vector<int>>ss;
    void subset(int i,vector<int>v,vector<int>arr,int n){
        if(i>=n){
            ss.push_back(v);
            return;
        }
        v.push_back(arr[i]);
        subset(i+1,v,arr,n);
        v.pop_back();
        subset(i+1,v,arr,n);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        sort(nums.begin(),nums.end());      // Sorting is required
        subset(0,v,nums,n);
        set<vector<int>>st;
        for(auto it:ss){
            st.insert(it);
        }
        vector<vector<int>>ans;
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};

*/