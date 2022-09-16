class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
        
        map<int, float>mp;
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]==x || points[i][1]==y)
                mp[i]=dist(x , y, points[i][0] , points[i][1]);
        }
        int maxi=INT_MAX;
        int ans=-1;    
        for(auto i:mp)
        {
            
            if(i.second<maxi)
            {
                maxi=i.second;
                ans=i.first;
            }
        }
        return ans;
        
    }
    private:
    float dist(int x , int y ,int x1 , int y1)
    {
        return sqrt(abs((x-x1)*(x-x1)-(y-y1)*(y-y1)));
    }
};