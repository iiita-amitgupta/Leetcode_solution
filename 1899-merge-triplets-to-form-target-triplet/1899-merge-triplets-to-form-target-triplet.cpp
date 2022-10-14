class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool a,b,c;
        a=b=c=false;
        int n=triplets.size();
        for(int i=0;i<n;i++){
            if(triplets[i][0]>target[0] || triplets[i][1]>target[1] || triplets[i][2]>target[2])
                continue; 
            a|=triplets[i][0]==target[0];
            b|=triplets[i][1]==target[1];
            c|=triplets[i][2]==target[2];
            if(a && b && c) 
                return true;
        }
        return false;
    }
};