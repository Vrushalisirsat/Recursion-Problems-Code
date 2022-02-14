#include<bits/stdc++.h>
using namespace std;

int getFibnacci(int n)  {

    //base condition
    if(n==0 || n==1)
    return n;

    //recuesion

    return getFibnacci(n-1) + getFibnacci(n-2);

}



int main() {               // main function
    int n;
    cout<<"Enter the Input : "<<endl;
    cin>>n;

    cout<<"Value of "<< n << "th Fibnacci serious is : " <<  getFibnacci(n) << endl;
    
    

}