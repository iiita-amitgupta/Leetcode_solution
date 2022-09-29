class Solution {
    unordered_map<string,string> mp;
    int post = 0;
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string s = "http://tinyurl.com/" + to_string(post);
        mp[s] = longUrl;
        post++;
        return s;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));