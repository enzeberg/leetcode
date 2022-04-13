/**
 * Initialize your data structure here.
 */
var Twitter = function() {
    this.tweets = {};
    this.following = {};
    this.counter = 0;
};

/**
 * Compose a new tweet. 
 * @param {number} userId 
 * @param {number} tweetId
 * @return {void}
 */
Twitter.prototype.postTweet = function(userId, tweetId) {
    if (!this.tweets[userId]) {
        this.tweets[userId] = [];
    }
    this.tweets[userId].splice(0, 0, {
        id: tweetId,
        num: ++this.counter,
    });
};

/**
 * Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. 
 * @param {number} userId
 * @return {number[]}
 */
Twitter.prototype.getNewsFeed = function(userId) {
    let feed = [];
    if (this.following[userId]) {
        this.following[userId].forEach(followeeId => {
            if (this.tweets[followeeId]) {
                this.tweets[followeeId].forEach(tweet => {
                    feed.push(tweet);
                });
            }
        });
    }
    if (this.tweets[userId]) {
        this.tweets[userId].forEach(tweet => {
            feed.push(tweet);
        });
    }
    // console.log(feed);
    // console.log(feed.sort((num1, num2) => num2.num - num1.num))
    return feed.sort((num1, num2) => num2.num - num1.num)
                .slice(0, 10)
                .map(tweet => tweet.id);
};

/**
 * Follower follows a followee. If the operation is invalid, it should be a no-op. 
 * @param {number} followerId 
 * @param {number} followeeId
 * @return {void}
 */
Twitter.prototype.follow = function(followerId, followeeId) {
    if (!this.following[followerId]) {
        this.following[followerId] = [];
    }
    if (followerId != followeeId && !this.following[followerId].includes(followeeId)) {
        this.following[followerId].push(followeeId);
    }
};

/**
 * Follower unfollows a followee. If the operation is invalid, it should be a no-op. 
 * @param {number} followerId 
 * @param {number} followeeId
 * @return {void}
 */
Twitter.prototype.unfollow = function(followerId, followeeId) {
    if (this.following[followerId]) {
        this.following[followerId] = this.following[followerId]
                                        .filter(id => id != followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * var obj = new Twitter()
 * obj.postTweet(userId,tweetId)
 * var param_2 = obj.getNewsFeed(userId)
 * obj.follow(followerId,followeeId)
 * obj.unfollow(followerId,followeeId)
 */