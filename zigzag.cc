// my first program in C++
#include <iostream>
#include <climits>
#include <string.h>
using namespace std;
int main()
{
    Solution s;
    s.convert("PAYPALISHIRING", 3)

}


class Solution {
public:
    string convert(string s, int numRows) {
	    if (numRows <= 1)
    		return s;

	    const int len = (int)s.length();
	    string *str = new string[numRows];

	    int row = 0, step = 1;      
	    for(int i = 0; i < len; i++) {
	    	str[row].push_back(s[i]);
	    	if(i % (numRows - 1) == 0) {
	    		step = - step;
	    	}
	    	row += step;
	    }
	    string res;
	    for(int i = 0; i < numRows; i++) {
	    	res += str[i];
	    }
	    return res;
    }
};