class Solution {
public:
    int lowerb(vector<int>& nums, int target, int high, int low ){
    
        int mid = low + (high - low)/2;
        
        if(high < low){
            return mid;
        }
        
        if(nums[mid] >= target){
            return lowerb( nums, target, mid-1, low);
        }
        if(nums[mid] < target){
            return lowerb( nums, target, high, mid+1);
        }
        
        return mid;
    
    }

    int upperb(vector<int>& nums, int target, int high, int low ){
        
        int mid = low + (high - low)/2;
        
        if(high < low){
            return mid-1;
        }
        
        if(nums[mid] > target){
            return upperb( nums, target, mid-1, low);
        }
        if(nums[mid] <= target){
            return upperb( nums, target, high, mid+1);
        }
        
        return mid;
        
    }


    vector<int> searchRange(vector<int>& nums, int target) {

        int high = nums.size()-1;
        int low = 0;
        int temp = 0;
        vector<int>no = {-1,-1};

        for(int i = 0; i < high+1; i++){
            if(target == nums[i]){
                temp++;
            }
        }
        if(temp == 0){
            return no;
        }

        vector<int>result;
        int last_pos = upperb(nums, target, high, low);
        int first_pos = lowerb(nums, target, high, low);

        result.push_back(first_pos);
        result.push_back(last_pos);

        return result;


    }
};
