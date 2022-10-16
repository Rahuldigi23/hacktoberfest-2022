class Solution {
public:
    void gen(int start,int end,vector<vector<int>> &res, vector<int> &comb,int k)
    {
        if(comb.size()==k)
        {
            res.push_back(comb);
            return;
        }
        for(int i=start;i<=end;i++)
        {
            comb.push_back(i);
             gen(i+1,end,res,comb,k);
            comb.pop_back();
        }
    
    }
    vector<vector<int>> combine(int n, int k)
    {
       vector<vector<int>>res;
        vector<int>comb;
        gen(1,n,res,comb,k);
        return res;
    }
};
