#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string a;
    cin>>a;
    int h1=int(a[0]-48);
    int h2=int(a[1]-48);
    int m1=int(a[3]-48);
    int m2=int(a[4]-48);
    int s1=int(a[6]-48);
    int s2=int(a[7]-48);
    char p=char(a[8]);
    if (p=="P")
    {
        
    }

   
    
    cout<<h1<<h2<<":"<<m1<<m2<<":"<<s1<<s2;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

