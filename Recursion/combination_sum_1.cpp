/*

class Solution {
public:
    void CS(int i,int n,vector<int>& candidates,vector<int>&ds,vector<vector<int>>&ans,int target){
        if(i>=n){
            if(target==0){
                ans.push_back(ds);
            }
            return; 
        }

//         Picking up
        if(candidates[i]<=target){
            ds.push_back(candidates[i]);
            CS(i,n,candidates,ds,ans,target-candidates[i]);
            ds.pop_back();    
        }
        
//         Not picking up
        CS(i+1,n,candidates,ds,ans,target);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        int n=candidates.size();
        CS(0,n,candidates,ds,ans,target);
        return ans;
    }
};

*/