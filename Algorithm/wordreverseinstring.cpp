//inclide string for
#include <string>
#include <iostream>
using namespace std;
//include sstream::
#include <sstream>
//include vector for
#include <vector>
//include algorithm for
#include <algorithm>

string reverseWords(string s)
{
    stringstream ss(s);

    string result = "";
    string token = "";

    while (ss >> token)
    {
        reverse(begin(token), end(token));
        result += token + " ";
    }

    return result.substr(0, result.length() - 1);
}
