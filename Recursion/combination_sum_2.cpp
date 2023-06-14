/*

class Solution {
public:
    void CombinationS(int ind,vector<int>ds,vector<int>&candidates,int target,vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<candidates.size();i++){
            if(i>ind && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            ds.push_back(candidates[i]);
            CombinationS(i+1,ds,candidates,target-candidates[i],ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>v;
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        CombinationS(0,v,candidates,target,ans);
        return ans;
    }
};

*/