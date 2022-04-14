### Question Link : https://leetcode.com/problems/permutation-sequence/

### Solution Video : 

### Solution : ( TLE but recursion after all )

```
class Solution {
public:
    
    void solve(vector<int>& nums, vector<int>& levels, vector<vector<int>>& kit_kat){
        if(levels.size() == nums.size()){
            kit_kat.push_back(levels);
            return;
        }
        for(int i = 0; i<nums.size();++i){
            if(nums[i]>-11)
            {
            int val = nums[i];
            nums[i] = -11;
            levels.push_back(val);
                
            solve(nums,levels,kit_kat);
            
            nums[i] = val;
            levels.pop_back();
            }
    }   
}
    
    string getPermutation(int n, int k) {
        vector<int> nums;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        vector<int> levels;        
        vector<vector<int>> kit_kat;
        solve(nums,levels,kit_kat);
        string ans;
        for(int i=0;i<n;i++){
            int vc = kit_kat[k-1][i];
            ans += to_string(vc);
        }
        return ans;
    }
};
```