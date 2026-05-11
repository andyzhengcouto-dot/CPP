#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
   // DOnt use this one (Not updated use Problem 1-1) And wont be
    unsigned int y = 0;
    unsigned int m = 0;
    
    cout << "Insert youngest below:" << endl;
    
    cin >> y;


    cout << "Insert middle below:" << endl;
    cin >> m;
      
    
    
    unsigned int o = m + (m-y);
    
    cout << "Oldest Child:" << o << endl;
 
 
    return 0;
}