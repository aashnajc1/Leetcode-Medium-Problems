class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int aagekaindex, peechekaindex;
        if(n==0){
            aagekaindex = -1, peechekaindex = -1;
        }
        for(int i=0;i<n;i++){
            if(nums[i] == target){
                aagekaindex = i;
                continue;
            }
            
        }
        for(int j=n-1;j>=0;j--){
            if(nums[j] == target){
                peechekaindex = j;
                continue;
            }
            
        }
        return {peechekaindex,aagekaindex};
    }
};
