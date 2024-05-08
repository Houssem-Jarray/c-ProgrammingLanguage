//
// Created by houssem on 02/05/24.
//

#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    // Take any two strings
    char str1[10] = "akash";
    char str2[10] = "akcsh";

    // Compare strings using strncmp()
    int result = strncmp(str1, str2, 4);

    if (result == 0) {
        // num is the 3rd parameter of strncmp() function
        cout << "str1 is equal to str2 up to num characters"
             << endl;
    }
    else if (result > 0)
        cout << "str1 is greater than str2" << endl;
    else
        cout << "str2 is greater than str1" << endl;

    cout << "Value returned by strncmp() is: " << result
         << endl;

    return 0;
}
