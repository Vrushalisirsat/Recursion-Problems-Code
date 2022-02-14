#include<bits/stdc++.h>
using namespace std;

void printSpelling(int n , string str[])  {
    
    //Base Condition/case
    if(n==0)
    return;

    //recursive call with work

    int Number = n%10;              //or we can write as :-> cout<<str[n%10]<<" ";
   cout<<str[Number] << endl;         


}

int main() {               // main function
    int n;
    cout<<"Enter the Input : "<<endl;
    cin>>n;

   string str[10] = {"zero" , "one" , "Two" , "three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine" };

   cout<<"Answer is : ";

    printSpelling(n , str);
    return 0;

}