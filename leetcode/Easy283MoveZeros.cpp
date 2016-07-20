class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 1;
        while(j <nums.size()) {
            if(nums[j] == 0) {
                j++;
            }
            else if(nums[i] == 0) {
                nums[i] = nums[j];
                nums[j] = 0;
                i++;
                j++;
                
            }
            else if(j-i == 1){
                i++;
                j++;
            }
            else {
                i++;
            }
        
            
        }
    }
};