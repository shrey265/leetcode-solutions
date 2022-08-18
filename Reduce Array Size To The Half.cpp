#include<queue>
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> int_map;
        priority_queue<int> int_q;
        int len = arr.size();
        for(int i=0;i<len;i++){
            if(int_map.find(arr[i])==int_map.end())
                int_map[arr[i]]=1;
            else
                int_map[arr[i]]++;
        }
        for(auto i=int_map.begin();i!=int_map.end();i++){
            int_q.push(i->second);
        }
        int num=0,count=0;
        while(num<(len+1)/2){
            int a= int_q.top();
            int_q.pop();
            num+= a;
            count++;
        }
        return count;
    }
};