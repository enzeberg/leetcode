#include <iostream>
#include <string>
#include <map>

using namespace std;

int romanToInt(string s) {
    map<char, int> _map;
    _map.insert(map<char, int>::value_type('I', 1));
    _map.insert(map<char, int>::value_type('V', 5));
    _map.insert(map<char, int>::value_type('X', 10));
    _map.insert(map<char, int>::value_type('L', 50));
    _map.insert(map<char, int>::value_type('C', 100));
    _map.insert(map<char, int>::value_type('D', 500));
    _map.insert(map<char, int>::value_type('M', 1000));
    const int length = s.length();
    int res = 0;
    for (int i = length - 1; i >= 0; --i) {
        int value = _map[s[i]];
        if (i < length - 1 && value < _map[s[i + 1]]) {
            res -= value;
        } else {
            res += value;
        }
    }
    return res;
}

int main()
{
   cout << romanToInt("III") << endl; 
   cout << romanToInt("IV") << endl; 
   cout << romanToInt("IX") << endl; 
   cout << romanToInt("LVIII") << endl; 
   cout << romanToInt("MCMXCIV") << endl; 
   
   return 0;
}