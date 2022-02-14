#include<bits/stdc++.h>
using namespace std;

void getCounting(int n)  {

    //Base condition
     if(n == 0) {      //or   if(n<=0)
         return;
     }

     cout<<n<<endl;

     
     //recursion call or subProblem
     getCounting(n - 1);

}

int main() {
    int n;
    cout<<"Enter the Input : "<<endl;
    cin>>n;

    cout<<"Counting : "<<endl;
    getCounting(n);

}