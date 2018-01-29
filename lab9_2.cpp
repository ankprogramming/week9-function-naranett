#include <iostream>

using namespace std;

float cArea(float r)
{
    float area;
    area = 3.1416*r*r;
    return (area);
}

int main()
{
    float r,cmd;
    do
    {
        cin >> cmd;
        if(cmd==1)
        {
            cin >> r;
            cout << cArea(r) << endl;
        }
        else
        {
            break;
        }
    }
    while(1);

    return 0;
}
