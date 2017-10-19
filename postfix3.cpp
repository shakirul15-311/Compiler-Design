#include <iostream>
#include <conio.h>
#include <stack>
#include <string>
using namespace std;

int priority(char a)
{
     int temp;
     if( a=='^')
         temp = 1;
     else
     {
         if(a=='*' || a=='/')
              temp = 2;
         else
         {
             if(a=='+' || a=='-')
                  temp = 3;
         }
     }
     return temp;
}

int main()
{
    string infix;
    cout << "Enter an arithmetic expression: " << endl;
    cin >> infix;

    stack<char> temp;
    stack<char> postfix;

    int i;

    for (i=0; i<11; i++)
    {
       if (infix[i]!='+' || infix[i]!='-' || infix[i]!='*' || infix[i]!='/' || infix[i]!='^' || infix[i]!='(' || infix[i]!=')')
          {postfix.push(infix[i]);
          cout << postfix.top();}
       else
       {
           if (infix[i]=='(')
              temp.push(infix[i]);
           else
           {
               if (infix[i]=='+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/' || infix[i]!='^')
               {
                    while (priority(temp.top()) <= priority(infix[i]))
                    {
                         postfix.push(infix[i]);
                         cout << postfix.top();
                         temp.pop();
                    }
                    temp.push(infix[i]);
               }
               else if(infix[i]==')')
               {
                    while (temp.top() != '(')
                    {
                         postfix.push(infix[i]);
                         cout << postfix.top();
                         temp.pop();
                    }
                    temp.pop();
               }

           }
       }
    }

    getch();
    return 0;
}
