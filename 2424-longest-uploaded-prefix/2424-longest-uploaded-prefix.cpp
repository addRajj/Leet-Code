class LUPrefix {
    vector<bool> v;
    int _n;
    int cnt;
public:
    LUPrefix(int n) {
        v.resize(n+1,0);
        cnt=1;
        _n=n;
    }
    
    void upload(int video) {
        v[video]=1;
        if(video==cnt) cnt++;
        while(cnt<=_n and v[cnt]==1) cnt++;
        // for(auto x : )
    }
    
    int longest() {
        return cnt-1;
    }
};