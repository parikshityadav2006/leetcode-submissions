// Title: LRU Cache
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/lru-cache/

        if (cache.find(key) == cache.end()) return -1;
    int get(int key) {
    LRUCache(int capacity) {
        this->capacity = capacity;
    }


public:
        order.erase(cache[key].second);
        order.push_back(key);
        cache[key].second = --order.end();
        return cache[key].first;
    }

    void put(int key, int value) {
        if (cache.find(key) != cache.end()) {
            order.erase(cache[key].second);
        } else if (cache.size() == capacity) {
            int lru = order.front();
            order.pop_front();
            cache.erase(lru);
        }
        order.push_back(key);
        cache[key] = {value, --order.end()};
    }
    int capacity;
    list<int> order;
class LRUCache {
private:
    unordered_map<int, pair<int, list<int>::iterator>> cache;
