#include <iostream>
using namespace std;


void func(int (&ref)[10])//char (&a)[10])
{
    ref[0] = 3;
}
int main()
{
    int ele[10] = { 0 };
    cout << ele[0] << endl;
    func(ele);
    for (int i = 0; i < 10; i++)
    {
        cout << ele[i]<<endl;
    }
        return 0;
}