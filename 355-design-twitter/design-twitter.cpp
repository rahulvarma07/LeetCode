class Twitter {
public:

    map<int, set<int>> followerList;
    map<int, vector<pair<int, int>>> tweets;
    long long int c;

    Twitter() {
        c = 0;
    }
    
    void postTweet(int userId, int tweetId) {
        followerList[userId].insert(userId);
        tweets[userId].push_back({c++, tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto &a: followerList[userId]) {
            for(auto &b: tweets[a]) {
                pq.push(b);
                if(pq.size() > 10) pq.pop();
            }
        }
        vector<int> ans;
        while(!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        followerList[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        followerList[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */