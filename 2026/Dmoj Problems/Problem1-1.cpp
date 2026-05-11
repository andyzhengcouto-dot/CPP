#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int youngest,middle,oldest;
    
    cin >> youngest >> middle;  
    oldest = middle + (middle-youngest); 
    cout << 'the oldest is: ' <<  oldest << endl;
 
    return 0;
}