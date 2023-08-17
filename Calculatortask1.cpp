#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to the Calculator!" << endl;
    char ct = 'Y';
    while(ct == 'Y')
    {     
        int ch = 0;
        double n1 = 0,n2 = 0;
        char op;
        cout << "Enter " << endl << "1 - for +, -, *, /, ^ " << endl << "2 - for basic trignometric operations(sin,cos,tan)" << endl;
        cin >> ch;
        if(ch == 1)
        {
            cout << "Enter two numbers for calculation: " << endl;
            cin >> n1 >> n2;
            cout << "Enter Operator: ";
            cin >> op;
            if(op == '+')
            {
                cout << "The sum of " << n1 << " and "<< n2 << " is "<< n1 + n2 << endl;
            }
            else if(op == '-')
            {
                if(n1 > n2)
                    cout << "The positive difference of " << n1 << " and "<< n2 << " is "<< n1 - n2 << endl;
                else
                    cout << "The positive difference of " << n1 << " and "<< n2 << " is "<< n2 - n1 << endl;
            }
            else if(op == '*')
            {
                cout << "The product of " << n1 << " and "<< n2 << " is "<< n1 * n2 << endl;
            }
            else if(op=='/')
            {
                if(n2 == 0)
                    cout << "DIVISION BY ZERO!";
                else
                    cout << "The quotient on dividing " << n1 << " by "<< n2 << " is "<< n1 / n2 << endl;
            }
            else if(op=='^')
            {
                int pro = 1;
                for(int i = 1; i <= n2; i++)
                    pro = pro * n1;
                cout << "The value of " << n1 << " to the power " << n2 << " is " << pro << endl;
            }
            else
                cout << "Enter from the given operators.";
        }
        else if(ch == 2)
        {
            cout << "Enter the trignometric function to be used: " <<endl << "s for sin" <<endl << "c for cos "<< endl << "t for tan" << endl;
            cin >> op;
            double n;
            cout << "Enter angle for calculation: ";
            cin >> n ;
            n1 = (n * 3.14159)/180;
            double sum1;
            if(op == 's')
            {
                double sum1=0,sum2=0;
                for(int i = 1; i<=21 ; i+=4)
                {
                    double res = 1,pro = 1;
                    for(int j=1; j <= i; j++)
                    {
                        res = res * n1;
                        pro = pro * j;
                    }

                    res = res/pro;
                    sum1 = sum1 + res;
                }
        
                for(int i = 3; i<=23 ; i+=4)
                {
                    double res = 1,pro = 1;
                    for(int j=1; j <= i; j++)
                    {    
                        res = res * n1;
                        pro = pro * j;
                    }
                    res = res/pro;
                    sum2 =sum2 + res;
                }
                cout << "The result is: " << sum1 - sum2 <<endl;
            } 
            else if(op == 'c')
            {
                double sum1=0,sum2=0;
                for(int i = 0; i<=24 ; i+=4)
                {
                    double res = 1,pro = 1;
                    for(int j=1; j <= i; j++)
                    {
                        res = res * n1;
                        pro = pro * j;
                    }
                    res = res/pro;
                    sum1 = sum1 + res;
                }
        
                for(int i = 2; i<=26 ; i+=4)
                {   
                    double res = 1,pro = 1;
                    for(int j=1; j <= i; j++)
                    {    
                        res = res * n1;
                        pro = pro * j;
                    }
                    res = res/pro;
                    sum2 =sum2 + res;
                }
                cout << "The result is: " << sum1 - sum2 <<endl;
            }
            else if(op == 't')
            {
                if(n == 90)
                    cout << "The result is: infinity" << endl;
                else
                {
                    double sum1=0,sum2=0;
                    for(int i = 1; i<=41 ; i+=4)
                    {
                        double res = 1,pro = 1;
                        for(int j=1; j <= i; j++)
                        {
                            res = res * n1;
                            pro = pro * j;
                        }

                        res = res/pro;
                        sum1 = sum1 + res;
                    }
        
                    for(int i = 3; i<=39 ; i+=4)
                    {
                        double res = 1,pro = 1;
                        for(int j=1; j <= i; j++)
                        {    
                            res = res * n1;
                            pro = pro * j;
                        }
                        res = res/pro;
                        sum2 =sum2 + res;
                    }

                    double sum3=0,sum4=0;
                    for(int i = 0; i<=20 ; i+=4)
                    {
                        double res = 1,pro = 1;
                        for(int j=1; j <= i; j++)
                        {
                            res = res * n1;
                            pro = pro * j;
                        }

                        res = res/pro;
                        sum3 = sum3 + res;
                    }
        
                    for(int i = 2; i<=22 ; i+=4)
                    {
                        double res = 1,pro = 1;
                        for(int j=1; j <= i; j++)
                        {    
                            res = res * n1;
                            pro = pro * j;
                        }
                        res = res/pro;
                        sum4 =sum4 + res;
                    }
                    cout << "The resut is: " << (sum1 - sum2)/(sum3 - sum4) << endl;
                } 
            }  
        }
        cout << "Press " << endl << "Y to continue" << endl << "N to end"<< endl;
        cin>> ct;       
    }
}
