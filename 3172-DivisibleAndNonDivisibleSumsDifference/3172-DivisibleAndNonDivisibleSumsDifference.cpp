// Last updated: 6/3/2025, 11:23:32 AM
#include <iostream>
using namespace std;

class Solution {
public:
    int differenceOfSums(int n, int m) {
    int sum1=0;int sum2=0;
    for ( int i=1;i<=n;i++){
        if (i % m !=0){
            sum1+=i;
        }else{
            sum2+=i;
        }
    }
    return sum1-sum2;
    }
};
