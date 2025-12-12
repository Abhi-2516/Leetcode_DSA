class Solution {
public:
int fun(vector<int> p1 , vector<int> p2 ){
    int ans = (pow(abs(p1[0]-p2[0]),2)+pow(abs(p1[1]-p2[1]),2));return ans;
}
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        if(p1==p2 || p1==p3 || p1==p4 || p2==p3 || p2==p4 || p3==p4 ){return false;}
        int k = 2;
        int a=0,b=0,c=0,d1=0,d2=0,d3=0;
        a = fun(p1,p2);b=fun(p1,p3),c=fun(p1,p4);
        if((a==b && c==k*a && fun(p2,p4)==a && fun(p3,p4)==a) || (b==c && a==k*b && fun(p3,p2)==b && fun(p2,p4)==b) || (a==c && b==k*a && fun(p2,p3)==a && fun(p3,p4)==a)){return true;}
        return false;

    }
};