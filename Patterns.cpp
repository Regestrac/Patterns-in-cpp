#include <iostream>
using namespace std;
int main()
{

    //Square pattern
    int row=5,col=4;
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            cout << "* ";
        }
        cout<<endl;
    }
    cout<<"---------------"<<endl;

    //Left Triangle pattern
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << "* ";
        }
        cout<<endl;
    }
    cout<<"---------------"<<endl;

    //Right Triangle pattern;
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=row; j++)
        {
            if(j <= row-i)
            {
                cout<<"  ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    cout<<"---------------"<<endl;

    //Hollow rectangle
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            if(i==1 || i==row)
            {
                cout << "* ";
            }
            else if(j==1 || j==col)
            {
                cout << "* ";
            }
            else
            {
                cout<< "  ";
            }
        }
        cout<<endl;
    }
    cout<<"---------------"<<endl;

    //Numeric pyramid
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << i << " ";
        }
        cout<<endl;
    }
    cout<<"---------------"<<endl;

    //Numeric triangle 2
    int num =1;
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout<<endl;
    }
    cout<<"---------------"<<endl;

    //Butterfly pattern 
    for(int i=1; i <=row; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << "* ";
        }
        int space =2*row - 2*i;
        for(int j=1; j<=space; j++)
        {
            cout << "  ";
        }
        for(int j=1; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=row; i >=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout << "* ";
        }
        int space =2*row - 2*i;
        for(int j=1; j<=space; j++)
        {
            cout << "  ";
        }
        for(int j=1; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}