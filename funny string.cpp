//HackerRank
/*
Suppose you have a String S, of length N that is indexed from 0 to N-1. 
You also have some String, R , that is the reverse of String .  
S is funny if the condition |S[i]-S[i-1]| = |R[i]-R[i-1]|
is true for every character  from 0 to N-1 .
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,j;
    int flag = 0;
    cin>>n;
    string s[n];
    for(int i=0; i<n; i++)
        cin>>s[i];
    
    for(int i=0; i<n; i++)
    {
        flag = 0;
        int len = s[i].length()-1;
        
        for(j=1; j<s[i].length(); j++)
            {
             if(abs(s[i][j]-s[i][j-1]) != abs(s[i][len] - s[i][len-1]))
               {
                   
                   cout<<"Not Funny"<<endl;
                   flag = 1;
                   break;
               }
               len--;
        }
        if(flag == 0)
        cout<<"Funny"<<endl;
    }
    
    return 0;
}
