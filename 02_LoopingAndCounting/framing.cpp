#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    //Get name and separate input from framed output
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << endl;
    
    const string greeting = "Hello, " + name + "!";

    const int pad = 1;
    const int rows = 2*pad + 3;
    const string::size_type cols = 2*pad + 2 + greeting.size();

    for (int r = 0; r < rows; ++r)
    {
        string::size_type c = 0;
        while (c != cols)
        {
            if (r == pad + 1 && c == pad + 1)
            {
                cout << greeting;
                c += greeting.size();
            }
            else
            {
                if (r == 0 || r == rows - 1 ||
                    c == 0 || c == cols - 1)
                    cout << "*";
                else
                    cout << " ";
                ++c;
            }
        }
        cout << endl;
    }

    return 0;
}