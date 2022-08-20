class Solution {
public:
    
        
        int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
      int i=0 , ans;
      priority_queue<int , vector<int>>q;  //     priority queue to push distances travelled by fuel
      
      for(ans=0 ; startFuel<target ; ans++)
      {
          while(i<stations.size() and stations[i][0] <= startFuel)
          {
              q.push(stations[i++][1]);
          }
          if(q.empty())return -1;
          
          startFuel+=q.top();
          q.pop();
      }
      
      return ans;
  }
  
        
    
};