class Solution {
    unordered_map<int,double> store;
public:
    double myPow(double x, int n) {
   
            if(n==0)
                return 1;
            else if(n==1)
                return x;
            else if(n==-1)
                return (double)1/x;
            if(n%2==0){
                double pow;
                
                if(store.count(n/2))
                    pow = store[n/2] * store[n/2];
                   
                    
                else{
                    double a = myPow(x,n/2);
                    store[n/2]=a;
                    pow = a * a;
                    store[n]=pow;  
                }
                  
                return pow;
            }
                
            if(n<0){
                double pow;
                double x,y;
                if(store.count(n/2))
                    x = store[n/2];
                else{
                    x = myPow(x,n/2);
                    store[n/2]=x;
                }
                    
                if(store.count(n/2-1))
                    y = store[n/2-1];
                else{
                    y = myPow(x,n/2-1);
                    store[n/2-1]=y;
                }
                store[n]=x*y;
              
                return x*y;
            }
        else{
            double pow;
                double a,b;
                if(store.count(n/2))
                    a = store[n/2];
                else{
                    a = myPow(x,n/2);
                    store[n/2]=a;
                }
                    
                if(store.count(n/2+1))
                    b = store[n/2+1];
                else{
                    b = myPow(x,n/2+1);
                    store[n/2+1]=b;
                }
                    
                store[n] = a*b;
         
                return a*b;
        }
         
        
    }
};