### Question Link : https://leetcode.com/problems/permutations/

### Solution Video : https://youtu.be/_B27GW-14B4

### Solution : ( Accepted )

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
    return;
}
    
    
    vector<vector<int>> permute(vector<int>& nums) {
     if(nums.size()==0) return {{}};
        int size = nums.size();
        vector<int> levels;
        vector<vector<int>> kit_kat;
        solve(nums,levels,kit_kat);
        return kit_kat;
    }
};
```

> Runtime: 0 ms, faster than 100.00% of C++ online submissions for Permutations.<br>
> Memory Usage: 7.8 MB, less than 56.05% of C++ online submissions for Permutations.