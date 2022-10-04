class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stk;
        string string1 = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '#'){
                if(!stk.empty()){
                    stk.pop();
                }
            }else{
                stk.push(s[i]);
            }
        }
        while(!stk.empty()){
            string1 = string1 + stk.top();
            stk.pop();
        }
        string string2 = "";
        for(int i = 0; i < t.length(); i++){
            if(t[i] == '#'){
                if(!stk.empty()){
                    stk.pop();
                }
            }else{
                stk.push(t[i]);
            }
        }
        while(!stk.empty()){
            string2 = string2 + stk.top();
            stk.pop();
        }
        cout << string1 << " " << string2;
        return (string1 == string2);
    }
};