// Title: Kth Largest Element in an Array
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/kth-largest-element-in-an-array/

        // [lt, i-1]   -> elements == pivot
        // [i, gt]     -> unprocessed
        // [gt+1, high]  -> elements < pivot
        while (i <= gt) {
            if (nums[i] > pivot) {
                swap(nums[i], nums[lt]);
                lt++;
                i++;
            } else if (nums[i] < pivot) {
                swap(nums[i], nums[gt]);
                gt--;
            } else {
                i++;
            }
        }
        
        int leftSize = lt - low;       // count of elements > pivot
        int midSize = gt - lt + 1;    // count of elements == pivot
        
        int i = low, lt = low, gt = high;
        // Invariant during the lowop:
        // [low, lt-1]  -> elements > pivot
    int findKthLargest(vector<int>& nums, int k) {
        return quickSelect(nums, 0, nums.size() - 1, k);
    }
    
    int quickSelect(vector<int>& nums, int low, int high, int k) {
        int pivotIndex = low + rand() % (high - low + 1);
        int pivot = nums[pivotIndex];
        
class Solution {
public:
