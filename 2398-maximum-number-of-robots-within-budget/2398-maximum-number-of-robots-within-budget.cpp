class Solution {
public:
    /*int maximumRobots(vector<int>& chargeTimes, vector<int>& runningCosts, long long budget) {
        
        int n=chargeTimes.size();
        int i=0;
        int j=0;
        long long sum=0;
        priority_queue<int>q1;
        priority_queue<int>q2;
        long long maxx=0;
        while(j!=n)
        {
                q1.push(chargeTimes[j]);
                q2.push(runningCosts[j]);
                int sum1=0;
                priority_queue q3=q2;
                int u=q2.size();
                 while(q3.size()!=0)
                {
                   
                   sum1+=q3.top();
                   q3.pop();
                   
                }
                int p=u*sum1;
                sum=q1.top()+p;
            if(sum<budget)
            {
                /*q1.push(chargeTimes[j]);
                q2.push(runningCosts[j]);
                int sum1=0;
                int u=q2.size();
               while(q2.size()!=0)
               {
                   
                   sum1+=q2.top();
                   q2.pop();
                   
                }
                int p=u*sum1;
                sum=q1.top()+p;*/
                //j++;
          //  }
          //  else
           // {
           //   
               // if(q1.size()>maxx)
             //   {
            //        maxx=q1.size()-1;
            //    }
                
           //     q1.pop();
           //     q2.pop();
          //  }
      //  }
    //return maxx;*/
        
        int maximumRobots(vector<int>& chargeTimes, vector<int>& runningCosts, long long budget) {
    int ans = 0, j = -1;
    long long s = 0;
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < runningCosts.size(); i++) {
        s += runningCosts[i];
        pq.push(make_pair(chargeTimes[i], i));
        while (s * (i - j) + 1LL * removeStale(pq, j) > budget)
            s -= runningCosts[++j];
        ans = max(ans, i - j);
    }
    return ans;
}
int removeStale(priority_queue<pair<int, int>>& pq, int& j) {
    while (!pq.empty() && pq.top().second <= j) pq.pop();
    if (pq.empty()) return 0;
    return pq.top().first;

    }
    
};

//max(chargeTimes) + k * sum(runningCosts)