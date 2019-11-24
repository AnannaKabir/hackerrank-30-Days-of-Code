#include<bits/stdc++.h>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
double mealCost;
int tipPercent;
int taxPercent;
cin>>mealCost>>tipPercent>>taxPercent;
    double tip = tipPercent * mealCost / 100;
    double tax = taxPercent * mealCost / 100;

    int totalCost = (int) round(tip + tax + mealCost);
    cout<<totalCost;

    return 0;
}
