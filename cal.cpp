#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
        cout<<"Welcome to calculator"<<endl;
        cout<<"Enter 1 for addition"<<endl;
        cout<<"Enter 2 for subtraction"<<endl;
        cout<<"Enter 3 for multiplication"<<endl;
        cout<<"Enter 4 for division"<<endl;
        cout<<"Enter 0 to exit"<<endl;
        int ch;
        cout<<"Enter your choice:\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter the two number for addition"<<endl;
                int a,b;
                cout<<"Enter the operand1: ";
                cin>>a;
                cout<<"Enter the operand2: ";
                cin>>b;
                cout<<"Sum is: "<<a+b<<endl;
                break;
            case 2:
                cout<<"Enter the two number for subtraction"<<endl;
                int c,d;
                cout<<"Enter the operand1: ";
                cin>>c;
                cout<<"Enter the operand2: ";
                cin>>d;
                cout<<"Difference is: "<<c-d<<endl;
                break;
            case 3:
                cout<<"Enter the two number for multiplication"<<endl;
                int e,f;
                long mul;
                cout<<"Enter the operand1: ";
                cin>>e;
                cout<<"Enter the operand2: ";
                cin>>f;
                mul=e*f;
                cout<<"Multiplication is: "<<mul<<endl;
                break;
            case 4:
                cout<<"Enter the two number for Division"<<endl;
                int x,y;
                float div;
                cout<<"Enter the operand1: ";
                cin>>x;
                cout<<"Enter the operand2: ";
                cin>>y;
                div=float(x)/y;
                cout<<"Division is: "<<div<<endl;
                break;
            case 0:
                return 0;
            default:
                cout<<"Enter a valid choice"<<endl;
        }
}
