class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> idkw;
        if(x<0) return false;
        int temp=x;
        while(temp){
            idkw.push_back(temp%10);
            temp/=10;
        }
        int l=0,r=idkw.size()-1;
        while(l<r){
            if(idkw[l]!=idkw[r]) return false;
            l++;r--;
        }
        return true;
    }
};