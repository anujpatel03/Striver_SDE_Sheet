//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
    
public:
vector<int>su;
    void ss(int i,vector<int>v,vector<int>arr,int n,int sum){
        if(i>=n){
            su.push_back(sum);
            return;
        }
       v.push_back(arr[i]);
       sum+=arr[i];
       ss(i+1,v,arr,n,sum);
       v.pop_back();
       sum-=arr[i];
       ss(i+1,v,arr,n,sum);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>v;
        ss(0,v,arr,N,0);
        return su;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends