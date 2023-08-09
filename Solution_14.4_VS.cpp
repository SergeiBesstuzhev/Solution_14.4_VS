#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "Sinhrophazotron";
    cout << s << "\n";
    cout << "String length: " << s.length() << " letters\n";
    cout << "First letter: " << s[0] << " Last letter: " << s[s.length() - 1] << "\n";
}