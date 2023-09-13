#include <iostream>
using namespace std;

class base
{
int n,r;

public:
void get()
{
cout<<"Enter any number : ";
cin>>n;
}

void square()
{
r=n*n;
disp();
}

private:
void disp()
{
cout<<endl<<"square of "<<n<<" is "<<r;
}
};

class derived:public base
{

};

int main()
{
derived d;
d.get();
d.square();
return 0;
}