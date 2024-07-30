class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        /*int n=names.size();
        vector<pair<int, string>> hn(n);
        for(int i=0; i<n; i++) 
            hn[i]={heights[i], names[i]};
        sort(hn.begin(), hn.end(), greater<>());
        for(int i=0; i<n; i++) 
            names[i]=hn[i].second;
        return names;  */
        unordered_map<int, string> map;
        for (int i = 0; i < names.size(); i++)
            map[heights[i]] = names[i];
        sort(heights.begin(), heights.end(), greater<int>());
        for (int i = 0; i < names.size(); i++)
            names[i] = map[heights[i]];
        return names;  
    
    }
};