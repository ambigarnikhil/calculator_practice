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
        cout<<"Enter 5 for addition of three variables"<<endl;
        cout<<"Enter 6 for subtraction of three variables"<<endl;
        cout<<"Enter 7 for multiplication of three variables"<<endl;
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
            case 5:
                cout<<"Enter three number for addition"<<endl;
                int k,l,m;
                cout<<"Enter the operand1: ";
                cin>>k;
                cout<<"Enter the operand2: ";
                cin>>l;
                cout<<"Enter the operand3: ";
                cin>>m;
                cout<<"Sum is: "<<k+l+m<<endl;
                break;
            case 6:
                cout<<"Enter three number for subtraction"<<endl;
                int k1,l1,m1;
                cout<<"Enter the operand1: ";
                cin>>k1;
                cout<<"Enter the operand2: ";
                cin>>l1;
                cout<<"Enter the operand3: ";
                cin>>m1;
                cout<<"Difference is: "<<k-l-m<<endl;
                break;
            case 7:
                cout<<"Enter three number for multiplication"<<endl;
                int k2,l2,m2;
                long long int mul1;
                cout<<"Enter the operand1: ";
                cin>>k2;
                cout<<"Enter the operand2: ";
                cin>>l2;
                cout<<"Enter the operand3: ";
                cin>>m2;
                mul1=k2*l2*m2;
                cout<<"Multiplication is: "<<mul1<<endl;
                break;
            case 0:
                return 0;
            default:
                cout<<"Enter a valid choice"<<endl;
        }
}
