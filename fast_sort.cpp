int permutation(vector<int>& nums, int start, int end){
    int pivot = nums[start];
    int location = start;
    for(int i = start+1; i <= end; i++){  //start+1
        if(nums[i] > pivot)
            swap(nums[i], nums[location++]);
    }
    swap(nums[start], nums[location]);
    return location;
}

void fast_sort(vector<int>& nums, int start, int end){
    if(start > end){
        int mid = permutation(nums, start, end);
        fast_sort(nums, start, mid-1);  //mid-1
        fast_sort(nums, mid+1, end);
    }
}