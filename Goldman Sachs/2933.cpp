class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& at) {
        vector<string>ans;
        int n=at.size();
        sort(at.begin(),at.end());
        unordered_map<string , int>mp;
        for(int i=0; i<n-2; i++){
            if(mp.find(at[i][0])==mp.end() && at[i][0]==at[i+2][0]){
                if(stoi(at[i+2][1])-stoi(at[i][1])<100){
                    i++;
                    ans.push_back(at[i][0]);
                    mp[at[i][0]]++;
                }
            }    
        }
        return ans;
    }
};