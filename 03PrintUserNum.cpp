#include<iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cout<<"Enter a number(0 to 5): ";
        cin>>n;
        cout<<"You entered: "<<n<<endl;
    }
    while(n>=0 && n<=5);
    cout<<"Invalid number"<<endl;
    return 0;
}
