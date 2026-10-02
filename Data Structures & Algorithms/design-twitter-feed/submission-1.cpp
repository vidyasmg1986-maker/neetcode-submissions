class Twitter {
public:
    vector<pair<int,int>> twitter;
    map<int,set<int>> following;
    Twitter() {
   
    }
    
    void postTweet(int userId,int tweetId) {
        twitter.push_back({userId,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> v;
        for(int i = twitter.size() - 1; i >= 0; i--) {
    if(twitter[i].first == userId ||
       following[userId].find(twitter[i].first) != following[userId].end()) {

        v.push_back(twitter[i].second);
        if(v.size() == 10)
                break;
    }
}
        return v;
    }
    
    void follow(int followerId, int followeeId) {
        following[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        following[followerId].erase(followeeId);
    }
};
