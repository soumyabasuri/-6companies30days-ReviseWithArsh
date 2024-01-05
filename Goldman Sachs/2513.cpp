#define ll long long
class Solution {
private:
    int gcd(int a, int b) {
        if (!b) return a;
        return gcd(b, a % b);
    }
    int lcm(ll a, ll b) {
        ll temp = (a / gcd(a, b)) * b;
        return temp > INT_MAX ? INT_MAX : temp;
    }
public:
    int minimizeSet(int d1, int d2, int uc1,int uc2) {
        int l=1, r=INT_MAX, g=lcm (d1,d2);
        while(l<=r){
            int m=l+(r-l)/2;
            bool a=0,b=0,c=0;
            if((m-m/d1)>=uc1)a=1;
            if((m-m/d2)>=uc2)b=1;
            if((m-m/g)>=uc1+uc2)c=1;
            
            if((a&b)&c)r=m-1;
            else l=m+1;
        }
        return (l);
    }
};