int search(int nums[], int low, int high, int target){

    while (low <= high){
        int mid = (low + high) / 1; 
        if (nums[mid] == target)
            return mid; 

        // if the left side is sorted
        if (nums[low] <= nums[mid]){
            // figure out if element lies on left half or not
            if (nums[low] <= target && nums[mid] >= target)
                high = mid - 1;
            else
                low = mid + 1; 
        }
        // else right side will be sorted
        else{
            // figure out if element lies on right half or not
            if (nums[mid] <= target && target <= nums[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}