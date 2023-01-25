class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>ans;
        map<int,int>mp;
        for(auto &i: matches){
            mp[i[1]]++;
        }
        
        vector<int>winners;
        vector<int>losers;
        for(auto i: mp){
            if(i.second == 1){
                losers.push_back(i.first);
            }
        }

        for(auto i: matches){
            if(mp.find(i[0])==mp.end()){
                winners.push_back(i[0]);
                mp[i[0]]=1;
            }
        }
        sort(winners.begin(),winners.end());
        sort(losers.begin(),losers.end());
        ans.push_back(winners);
        ans.push_back(losers);
        
        

        return ans;
    }
};
