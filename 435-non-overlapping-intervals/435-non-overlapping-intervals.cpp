class Solution {
public:
    

 int eraseOverlapIntervals(std::vector<std::vector<int>>& intervals) {
        std::sort(intervals.begin(), intervals.end(), [](std::vector<int> &a, std::vector<int> &b) {return a[0] < b[0];});
        std::vector<int> lastInterval = intervals[0];
        int countInterval = 0;
        for (int idx = 1; idx < intervals.size(); idx++) {
            if (lastInterval[1] > intervals[idx][0]) {
                countInterval += 1;
                lastInterval[1] = std::min(lastInterval[1], intervals[idx][1]);
            } else {
                lastInterval = intervals[idx];
            }
        }
        return countInterval;
    }
};