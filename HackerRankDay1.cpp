#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
   int x;
   double y;
   string  z;
   string tmp;
   getline(cin,tmp);
   x = stoi(tmp);
   getline(cin, tmp);
   y= stod(tmp);
   getline(cin, z);

printf("%i\n",i+x);
printf("%.1f\n",d+y);
   cout<< s+z<<endl;

    return 0;
}
