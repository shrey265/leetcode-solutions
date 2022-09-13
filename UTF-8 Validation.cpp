class Solution {
    int utf(int n){
        int s=0, mask = 1<<7;
        for(int i=0;i<5;i++){
            if(n&mask)
                s+= 1;
            else
                break;
            mask = mask>>1;
        }
        return s;
    }
public:
    bool validUtf8(vector<int>& data) {
        int n=0;
        for(int i=0;i<data.size();i++){
            int s = utf(data[i]);
            cout << s;
            if(n==0){
                if( s>0 && s<5 && s!=1)
                    n=s-1;
                else if(s>=5 || s==1)
                    return false;
            }
            else{
                if(s==1)
                    n--;
                else
                    return false;
            }
        }
        if(n==0)
            return true;
        return false;
    }
};