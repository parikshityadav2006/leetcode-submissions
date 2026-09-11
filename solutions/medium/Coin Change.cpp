// Title: Coin Change
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/coin-change/

        // Each choice of coin reduces the problem of remaining to a 
        smaller subproblem: remaining - c
        for (int c : coins) {
            int r = solve(coins, remaining - c);   // recurse DOWN 
            toward 0

            // Only fold this option into `best` if that subproblem was 

        int best = INT_MAX;

        if (memo.count(remaining)) return memo[remaining];
            solvable
            if (r != INT_MAX) best = min(best, r + 1);  // +1 for the 
            coin we just used
        }

        different combination of coins): reuse result
        // Cache and return — this is what makes it O(amount * coins.size
        ()), every distinct `remaining` is solved once
        return memo[remaining] = best;
    }

public:
    int coinChange(vector<int>& coins, int amount) {
        int res = solve(coins, amount);   
        return res == INT_MAX ? -1 : res;
    }
};
