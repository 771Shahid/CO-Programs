//Programmer Name:-Shahid Saleem//
//Roll No:-17CO56//
#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
void dectobin(int);
void bintodec(int);
int main()
{
    int ch,x;
    do
    {
        cout<<"Enter the choice from the menu given below\n";
        cout<<"\n1> To convert from Decimal to Binary\n";
        cout<<"2> To convert from Binary to Decimal\n";
        cout<<"3>Exit"<<endl;
        cin>>ch;

        switch(ch)
        {
        case 1:
            cout<<"Enter the number"<<endl;
            cin>>x;
            cout<<"The equivalent of "<<x<<" is ";
            dectobin(x);
            break;
        case 2:
            cout<<"Enter the number"<<endl;
            cin>>x;
            cout<<"The equivalent of "<<x<<" is ";
            bintodec(x);
            break;
        case 3:
            break;
        }
    }
    while(ch!=3);
    return 0;

}
void dectobin(int x)
{
    int bin;
    stack<int>a;
    while(x>0)
    {
        bin=x%2;
        a.push(bin);
        x=x/2;
    }
    while(!a.empty())
    {
        cout<<a.top();
        a.pop();
    }
    cout<<endl;
}
void bintodec(int x)
{
    int n,rem,sum=0,temp;
    int i=0;
    while(x>0)
    {
        rem=x%10;
        sum=sum+rem*(pow(2,i));
        i=i+1;
        x=x/10;

    }
    cout<<sum<<endl;
}


