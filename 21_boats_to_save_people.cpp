class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boats = 0;
        if(people.size()==0)
            return boats;
        sort(people.begin(), people.end());
        int start_index=0;
        int end_index=people.size()-1;
        
        while(start_index<end_index){
            if(people[start_index]+people[end_index]<=limit)
                start_index++;
            end_index--;
            boats++;
        }
        if(start_index==end_index)
            boats++;
        return boats;
    }
};
