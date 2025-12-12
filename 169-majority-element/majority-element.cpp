class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans;
        unordered_map<int,int> f;
        
      
        for(int i = 0; i < nums.size(); i++){
            f[nums[i]]++;
        }
        
        int c = nums.size() / 2;
        
        for(auto& pair : f){
            if(pair.second > c){  
                ans = pair.first; 
                break;
            }
        }
        
        return ans;
    }
};