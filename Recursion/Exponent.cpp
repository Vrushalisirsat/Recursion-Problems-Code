#include<bits/stdc++.h>
using namespace std;

int Exponent(int n)  {
    
    //Base Condition/case
    if(n==0)
    return 1;

    //recursive call with work

    int answer = Exponent(n/2);
    
    if(n & 1) {
        return 2*answer*answer;
    }
    else  {
           return answer*answer;
    }


}

int main() {               // main function
    int n;
    cout<<"Enter the Input : "<<endl;
    cin>>n;

    int ans = 2*Exponent(n-1);
    cout<< "2 to the power  " << n << " ans is : " << ans << endl;
    return ans;

}