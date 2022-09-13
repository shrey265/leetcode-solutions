class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int a=0,b=tokens.size()-1, score=0,max_score=0;
        sort(tokens.begin(),tokens.end());
        while(a<=b){
            if(power>=tokens[a]){
                power-=tokens[a];
                score++;
                a++;
                if(score>max_score)
                    max_score = score;
            }
            else{
                if(score>0){
                    power+=tokens[b];
                    score--;
                    b--;
                }
                else
                    return max_score;
            }
        }
        return max_score;
    }
};