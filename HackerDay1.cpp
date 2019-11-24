#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string name = "Bill";
    stringstream ss;
    ss << "Your name is: " << name;
    string info = ss.str();
    cout << info << endl;
    return 0;
}
