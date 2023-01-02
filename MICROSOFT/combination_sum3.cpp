class Solution {
public:
    void fun(int id,int k,int sum,vector<vector<int>>&ans,vector<int>&v){
        
        if(k == 0){
            if(sum == 0){
                ans.push_back(v);
            }
            return;
        }
        for(int i = id; i<10; i++){
            if(i > id && i == id || id > sum){
                return;
            } 
            v.push_back(i);
            fun(i+1,k-1,sum-i,ans,v);
            v.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>v;
        fun(1,k,n,ans,v);
        return ans;
    }
}
