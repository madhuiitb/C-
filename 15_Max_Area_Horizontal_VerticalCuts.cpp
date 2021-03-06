class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int hc=horizontalCuts.size();
        int vc=verticalCuts.size();
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        
        int max_hc=max(horizontalCuts[0],h-horizontalCuts.back());
        int max_vc=max(verticalCuts[0],w-verticalCuts.back());
        for(int i=0;i<hc-1;i++){
            int cur_max = horizontalCuts[i+1]-horizontalCuts[i];
            if(max_hc<cur_max){
                max_hc=cur_max;
            }
        }
        
        for(int i=0;i<vc-1;i++){
            int cur_max = verticalCuts[i+1]-verticalCuts[i];
            if(max_vc<cur_max){
                max_vc=cur_max;
            }
        }
        long long mod = pow(10,9)+7;
        return ((max_hc%mod)*(max_vc%mod))%mod;
    }
};
