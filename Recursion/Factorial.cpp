#include<bits/stdc++.h>
using namespace std;

int getFactorial(int n)  {
    
    //Base Condition/case
    if(n<=1)
    return 1;

    //recursive call with work

    int answer = n * getFactorial(n - 1);
    return answer;


}

int main() {               // main function
    int n;
    cout<<"Enter the Input : "<<endl;
    cin>>n;

    cout<<"Value of "<< n << "! is : " <<  getFactorial(n) << endl;
    
    

}