#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int bintohex(int);
//void hextobin(int);
int main()
{
    int ch,x;
    do
    {
        cout<<"\nEnter the choice from the menu given below\n";
        cout<<"\n1> To convert from Binary to Hexadecimal and octal\n";
        cout<<"2> To convert from Hexadecimal or octal to Binary\n";
        cout<<"3>Exit"<<endl;
        cin>>ch;

        switch(ch)
        {
        case 1:
            cout<<"Enter the number"<<endl;
            cin>>x;
            cout<<"The equivalent of "<<x<<" is ";
            bintohex(x);
            break;
      // case 2:
          //  cout<<"Enter the number"<<endl;
          //  cin>>x;
           // cout<<"The equivalent of "<<x<<" is ";
           // hextobin(x);
          //  break;
        case 3:
            break;
        }
    }
    while(ch!=3);

    return 0;
    }


    int bintohex(int x)
    {
 long int binaryval, hexadecimal = 0, g = 1, remainder;
int s=x;

        int octnum = 0, decinum = 0, i = 0;

        while(x != 0)
        {
                decinum += (x % 10) * pow(2,i);
                ++i;
                x /= 10;
        }
        i = 1;
        while (decinum != 0)
        {
                octnum += (decinum % 8) * i;
                decinum /= 8;
                i *= 10;
        }
        cout<<"\nThe octal equivalent of the number is :"<<octnum;
        {

            while (s != 0)

    {
        remainder = s % 10;
        hexadecimal = hexadecimal + remainder * g;
        g = g * 2;
        s = s / 10;
    }//End of while
    cout<<"\nEquivalent hexadecimal value: ";
    cout<<hexadecimal;
       }
 }//End of the function



   void hextobin(int x)
   {

   }
