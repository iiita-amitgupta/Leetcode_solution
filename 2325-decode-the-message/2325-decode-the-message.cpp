class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> mp;

    int j = 0;
    mp[32]=32;
    for(int i=0;i<key.size();i++)
    {  if(mp.find(key[i])==mp.end())
        
        {
            mp[key[i]] =97+j;
            j++;
        }
            
    }
    
    string ans;
    
    for(int i=0;i<message.size();i++)
    {
        ans.push_back(mp[message[i]]);
    }
    return ans;
    }
};