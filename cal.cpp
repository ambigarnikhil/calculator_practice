#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
        cout<<"Welcome to calculator"<<endl;
        cout<<"Enter 1 for addition"<<endl;
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
            case 0:
                return 0;
            default:
                cout<<"Enter a valid choice"<<endl;
        }
}
