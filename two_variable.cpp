#include <iostream>
using namespace std;

void sol2()
{
    // For 2 variable
    int a1, b1, c1, a2, b2, c2;
    cout << "Enter the values" << endl;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    float x = (float)(b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1);
    float y = (float)(c1 * a2 - c2 * a1) / (a1 * b2 - a2 * b1);

    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
}
void sol1()
{
    // For Single varibale
    int a, b, c;
    cout << "Enter the values" << endl;
    cin >> a >> b >> c;
    // aX+b+c =0;

    if (a == 0)
    {
        cout << "Cannot Predict Value of X" << endl;
    }
    else
    {
        float ans = (float)-1 * (b + c) / a;
        cout << "Value of X " << ans << endl;
    }
}

int main()
{
    //sol1();
    sol2();
    return 0;
}
