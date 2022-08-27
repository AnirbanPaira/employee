#include <iostream>
using namespace std;
int main()
{
    string name;
    double basic, da, hra, pf, np, gross_pay;
    cout << "Enter the employee name" << endl;
    cin >> name;
    cout << "Enter the basic salary" << endl;
    cin >> basic;
    da = 25.0 / 100.0 * (basic);
    hra = 15.0 / 100.0 * (basic);
    pf = 8.33 / 100.0 * (basic);
    np = basic + da + hra;
    gross_pay = np - pf;
    cout << "the basic apy of the employee :" << basic << endl;
    cout << "The dearness allowence of the employee :" << da << endl;
    cout << "The house rent allowence of the employee :" << hra << endl;
    cout << "The provident found of the employee :" << pf << endl;
    cout << "The net pay of the employee :" << np << endl;
    cout << "The gross pay of the employee :" << gross_pay << endl;
}
