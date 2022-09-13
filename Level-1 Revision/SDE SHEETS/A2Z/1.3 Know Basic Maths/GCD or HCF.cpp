/* GFG LINK : https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1 */


// SOLUTION 1 : (TLE)

class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        vector<long long> v(2,0);
        int lcm = 0;
        lcm = (A>B) ? A : B;
        while(true){
            if(lcm%A == 0 && lcm%B==0){
                break;
            }
            lcm++;
        }
        v[0] = lcm;
        
        int gcd = 0;
        int result = min(A,B);
        while(true){
            if(A%result==0 && B%result==0){
                break;
            }
            result--;
        }
        v[1] = result;
    return v;
    }
};