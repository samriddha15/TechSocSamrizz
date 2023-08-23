#include <iostream>
using namespace std;
int main()
{
    int calc;
    cout << "welcome to the calender press 1 to start" << endl;
    cin >> calc;
    while (calc == 1)
    {
    int n1,n2,n3,n4,n5;
    char a ; 
    cout << "choose a function" << endl << "1.*" << endl << "2./" << endl << "3.+" << endl << "4.-" << endl << "5. trigonometric function" << endl << "6. exponent" << endl ;
    cin >> n1;
    if (n1>6)
        {
            cout << "invalid code";
        } 
    else if (n1<5)
        {
            cout << "enter your first number" << endl;
            cin >> n2;
            cout << "enter your second number" << endl;
            cin >> n3;
            if (n1 == 1)
                {
                    cout << "your ans is " << n2*n3 << endl;
                }
            else if (n1==2)
                {
                    cout << "your ans is " << (float) n2/n3 << endl;
                }
            else if (n1==3)
                {
                    cout << "your ans is " << n2+n3 << endl;
                }
            else if (n1==4)
                {
                    cout << "your ans is " << n2-n3 << endl;
                }
        }
            else if (n1 == 5)
                {
                    cout << "which function" << endl << "1. sine" << endl << "2. cosine" << endl << "3. tangent" << endl;
                    cin >> n4;
                    cout << "enter the angle in degree" << endl;
                    cin >> n5;
                    float n6,n7;
                    n6 = (float)n5 * 3.14159265359/180;
                    n7 = (float)n5 * 3.14159265359/180;
                    float s1,s2,s3,s4,s5,s6,s7,s8;
                    s1 = 1;
                    s2 = 1;
                    s3 = 2;
                    s4 = 0;
                    s5 = 2;
                    s7 = 0;
                    s8 = 0;
                    if (n4 == 1)
                    {
                    while (s2 < 250)
                        {
                            float sine;
                            sine =(float) n6/s1;
                            n6 = (-1)*n6*n7*n7;
                            s1 = s1 * s3* (s3+1);
                            s2 = s2+2;
                            s2 = s2 + 1;
                            s4 = (float) s4+sine;
                            
                        }
                        cout << s4 << endl;
                    }
                    else if (n4 == 2)
                    {
                        while (s2<10)
                            {
                                float cosine;
                                cosine = (float) n6*n7/s3;
                                n6 = (-1)*n6*n7*n7;
                                s3 = s3*(s1+2)*(s1+3);
                                s1 = s1 + 2;
                                s4 = (float) s4 + cosine;
                                s2  = s2 +1;
                            }
                        s6 = 1 - s4;
                        cout << s6 << endl;
                    }
                    else if (n4==3)
                    {
                        while (s2 < 250)
                        {
                            float sine;
                            sine =(float) n6/s1;
                            n6 = (-1)*n6*n7*n7;
                            s1 = s1 * s3* (s3+1);
                            s2 = s2+2;
                            s2 = s2 + 1;
                            s4 = (float) s4+sine;
                            
                        }
                        s1 = 1;
                        s2 = 1;
                        s3 = 2;
                        s5 = 2;
                        s7 = 0;
                        s8 = 0;
                        n6 = (float)n5 * 3.14159265359/180;
                        n7 = (float)n5 * 3.14159265359/180;
                         while (s8<10)
                            {
                                float cosine;
                                cosine = (float) n6*n7/s3;
                                n6 = (-1)*n6*n7*n7;
                                s3 = s3*(s1+2)*(s1+3);
                                s1 = s1 + 2;
                                s7 = (float) s7 + cosine;
                                s8  = s8 +1;
                            }
                        
                        s6 = 1 - s7;
                        
                        s8 = (float)s4/s6;
                        cout << s8 << endl;
                    }
                    
                }
                else if (n1 == 6)
                {
                    int a1=1 , a2 , a3 ,a4;
                    cout << "enter the number" << endl ; 
                    cin >> a2;
                    a4 = a2;
                    cout << "enter the power" << endl ; 
                    cin >> a3;
                    while (a1 < a3)
                        {
                            a2 = a2 * a4;
                            a1 = a1 +1;
                        }
                    cout << a2 << endl;
                }
                cout << "enter 1 to restart or press any other key to close"<< endl;
                cin >> calc;
    }
            
}  
    

