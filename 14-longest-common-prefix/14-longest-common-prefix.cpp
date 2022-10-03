class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==0) return "";
        
        string ans = "";
        sort(begin(strs),end(strs));
        string l = strs[0];
        string r = strs[n-1];
        
        for(int i = 0; i < l.size(); i++){
            if(l[i] == r[i]){
                ans = ans + l[i];
            }else{
                break;
            }
        }
        return ans;
    }
};