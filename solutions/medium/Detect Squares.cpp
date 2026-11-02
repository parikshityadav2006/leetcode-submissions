// Title: Detect Squares
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/detect-squares/

    
    void add(vector<int> point) {
        freq[{point[0],point[1]}]++;
    }
    
    int count(vector<int> point) {
        int count=0;
    return count;
            if(freq[{i,point[1]}] && i!=point[0]) X.push_back(i);
        for(int i=0; i<=1000; i++){
        }
        vector<int> X, Y;
            if(freq[{point[0],i}] && i!=point[1]) Y.push_back(i); 
        for(auto absc: X){
            for(auto ord: Y){
        }
                if(abs(absc-point[0])==abs(ord-point[1]) && freq[{absc,ord}]){
            }
                    count+=freq[{absc,point[1]}]*freq[{point[0],ord}]*freq[{absc,ord}];
                }
    }
};
    DetectSquares() {}

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */
