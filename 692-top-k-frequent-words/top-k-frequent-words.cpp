class Comparator {
public:
    bool operator()(pair<int, string>&p1, pair<int, string>&p2) {
        if(p1.first == p2.first) {
            return p1.second > p2.second;
        }
        return p1.first < p2.first;
    }
};
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> myMap;
        priority_queue<pair<int, string>, vector<pair<int, string>>, Comparator> pq;
        vector<string> ans;
        for(auto a: words) myMap[a]++;
        for(auto a: myMap) {
            pair<int, string> p = make_pair(a.second, a.first);
            pq.push(p);
        }
        while(k--) {
            pair<int, string> myPair = pq.top();
            ans.push_back(myPair.second);
            pq.pop();
        }
        return ans;
    }
};