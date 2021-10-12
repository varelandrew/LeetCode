#include <iterator>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int> map;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++)
            map[nums[i]]++;
        
        priority_queue<pair<int,int>> que; 
        for(auto it = map.begin(); it != map.end(); it++)
        {
            que.push(make_pair(it->second, it->first));
            if(que.size() > (int)map.size() - k)
            {
                ans.push_back(que.top().second);
                que.pop();
            }
        }
        return ans;
    }
};
