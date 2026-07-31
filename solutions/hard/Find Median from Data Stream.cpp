// Title: Find Median from Data Stream
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/find-median-from-data-stream/

class MedianFinder {
public:
    vector<int> list;
    MedianFinder() {}
    
    void addNum(int num) {
        auto it= lower_bound(list.begin(),list.end(),num);
        list.insert(it,num);
    }
    
    double findMedian() {
        int n= list.size();
        if(n%2){
            return list[n/2];
        }
        return (list[(n-1)/2]+list[n/2])/2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
