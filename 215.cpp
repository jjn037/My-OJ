class Solution {
public:
    int partition(vector<int>& nums, int start, int end){
        int pivot = nums[start];
        int location = start;
        for(int i = start + 1; i <= end; i++){
            if(nums[i] < pivot)
                swap(nums[i], nums[++location]);
        }
        swap(nums[start], nums[location]);
        return location;
    }


    int findKthLargest(vector<int>& nums, int k) {
        int target = nums.size() - k ;
//        if(k > nums.size()) return;
        int start = 0, end = nums.size() - 1;
        int mid = partition(nums, start, end);

        while(target != mid){
            if(mid < target)  start = mid + 1;
            if(mid > target) end = mid - 1;
            mid = partition(nums, start, end);
        }
        return nums[mid];
    }

};