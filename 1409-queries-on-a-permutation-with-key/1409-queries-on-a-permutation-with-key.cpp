class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> perm;
		vector<int> ans;
		for(int i=1;i<=m;i++) perm.push_back(i);
		for(int i=0;i<queries.size();i++){
			int t=queries[i];
			for(int j=0;j<m;j++){
				if(perm[j]==t){
					perm.erase(perm.begin()+j);
					perm.insert(perm.begin(),t);
					ans.push_back(j);
				}
			}
		}
		return ans;
    }
};