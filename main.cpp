#include <iostream>

using namespace std;

int main()
{
    int a;
    do{

        cout << "Iveskite amziu: ";
        cin >> a;
    if (a>=18) {

        cout << "Jus esate pilnametis" << endl;
    } else {

        cout << "Jus esate nepilnametis" << endl;

           }
    }

    while (a>=0);

    return 0;
}
