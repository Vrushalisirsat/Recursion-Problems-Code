#include<bits/stdc++.h>
using namespace std;


//index--> ith index of input array
// subset : array to store the subset

void getSubSequence(string str, int strIndex , string output)  {

    //sare elements traverse ho chuke hai      // base condition
    if(strIndex == str.length()) {
        cout<<output<<endl;
        return;
    }


    //nahi lena hai
   getSubSequence(str , strIndex+1 , output);

    //lena hai
    output.push_back(strIndex+1);
       getSubSequence(str , strIndex+1, output);

}

int main() {

    cout<<"Enter the string  : "<<endl;
    string str;
    cin>>str;

    cout<<"Printing all the subsequence : " << endl;
    string output="";
    getSubSequence(str , 0 , output);
}