#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Question a:  If his flight was straight up and down, what was his mean speed, to the nearest kilometre per hour, over the course of the whole journey?
    double distance = 105.9; // Distance in Km
    double time = (10 * 60 + 17) / 3600.0; // 10 mins and 17 senconds in hours
    int velocity = round (distance/time)   ; // Velocity = Dsitance / Time (km/hours) Round to nearent kilomiter
    cout << "a: The velocity is: " << velocity << endl;
    
    // Question b: The length of the Trans-Canada Highway between the east and west coasts of
    // Canada is 7821 km. If the rocket travels a distance of 7821 km at the mean
    // speed found in part (a), approximately how long (in hours and minutes)
    // would that trip take?
    distance = 7821; // New distance in km
    time = distance / (velocity / 60.0); // I flipped the variables, velovity is km/min after dividing by 60 so time in minutes
    int hours = time / 60; // Finding hours
    int minutes = time - hours * 60; // Remaining mins
    cout << "b: The time it would take would be: " << hours << ":" << minutes << endl;
    return 0;
}
