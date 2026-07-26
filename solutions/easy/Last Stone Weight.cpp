// Title: Last Stone Weight
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/last-stone-weight/

class Solution {
private:   
   void bubbleDown(vector<int>& nums, int i){
        int n = nums.size();
        while(true){
            int largest = i;
            int left = 2*i+1;
            int right = 2*i+2;

            if(left < n && nums[left] > nums[largest]){
                largest = left;
            }
            if(right < n && nums[right] > nums[largest]){
                largest = right;
            }
            if(largest == i) break;

            swap(nums[i], nums[largest]);
            i = largest;
        }
    }

    void bubbleUp(vector<int>& nums, int i){
        while(i > 0 && nums[i] > nums[(i-1)/2]){
            swap(nums[i], nums[(i-1)/2]);
            i = (i-1)/2;
        }
    }

    void buildMaxHeap(vector<int>& nums){
        int n=nums.size();
        for(int i=n/2-1;i>-1;i--){
            bubbleDown(nums,i);
