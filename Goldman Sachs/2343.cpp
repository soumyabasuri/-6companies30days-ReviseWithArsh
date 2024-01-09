class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& q) {
        int n=q.size(), m=nums.size();
        vector<int>ans;
        for(int i=0; i<n; i++){
            int digits=q[i][1], index=q[i][0];
            vector<pair<string,int>>pq;
            for(int j=0; j<m; j++){
                string s=nums[j];
                pq.push_back({(s.substr(s.size()-digits)),j});
            }
            sort(pq.begin(),pq.end());
            ans.push_back(pq[index-1].second);
        }
        return ans;
    }
};