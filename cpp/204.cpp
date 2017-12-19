/**
 * @Author: zhangang <zhangang>
 * @Date:   2017-12-19T11:11:00+08:00
 * @Email:  zhanganguc@gmail.com
 * @Filename: 204.cpp
 * @Description: Count Primes
 * @Last modified by:   zhangang
 * @Last modified time: 2017-12-19T14:02:48+08:00
 * @Copyright: Copyright by USTC
 */

/*
Description:
Count the number of prime numbers less than a non-negative number, n.
Credits:
Special thanks to @mithmatt for adding this problem and creating all test cases.
*/
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPrime(int num) {
        if(num==2 || num==3)
            return true;
        if(num %6 != 1 && num%6 != 5)
            return false;
        for (int i=5;i*i <= num; i+=6)
            if (num%i==0 || num%(i+2)==0)
                return false;
        return true;
    }
    // bool isPrime(int num){
    //     for (int i=2; i*i <=num; i++)
    //         if (num%i==0)
    //             return false;
    //     return true;
    // }
    int countPrimes(int n) {
        if (n <= 2)
            return 0;
        int cnt = 1;
        for (int i=3; i<n; i+=2){
            if (isPrime(i))
                cnt++;
        }
        return cnt;
    }
};

int main()
{
    int n;
    Solution sol = Solution();
    while(cin>>n){
        cout<<sol.countPrimes(n)<<endl;
    }
}
