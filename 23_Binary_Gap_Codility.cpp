// you can use includes, for example:
#include <algorithm>
#include<vector>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> vec;
    int remainder=0;
    while(N>0){
        remainder = N%2;
        vec.insert(vec.begin(), remainder);
        N = N/2;
    }
    int total=0;
    int count=0;
    int m=vec.size();
    for(int i=0;i<m;i++){
        if(vec[i]==1){
            for(int j=i+1;j<m;j++){
                if(vec[j]==0 && j!=m-1){
                    count++;
                }
                else{
                    if( vec[j]==0 && j==m-1){
                    count=0;
                    }
                    else
                        break;
                }
                
            }
            if(count>total){
                total=count;
                count=0;
            }
                
        }
    }
    return total;

}
