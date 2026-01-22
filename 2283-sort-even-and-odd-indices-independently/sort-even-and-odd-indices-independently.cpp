class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        

        for(int i = 0; i < nums.size(); i++){
            if(i % 2 == 0){  
                even.push_back(nums[i]);
            } else {
                odd.push_back(nums[i]);
            }
        }
        
        sort(even.begin(), even.end());
        
        sort(odd.begin(), odd.end(), greater<int>());
        
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            if(i % 2 == 0){
                ans.push_back(even[i / 2]);
            } else {
                ans.push_back(odd[i / 2]);
            }
        }
        
        return ans;
    }
};