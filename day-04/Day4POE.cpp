#include<iostream>
#include<conio.h>

using namespace std;

void provideNumbers(int &num1, int &num2)
{
    cout<<"Enter First number:"<<endl;
    cin>>num1;

    cout<<"Enter Second number:"<<endl;
    cin>>num2;


}

int calcSum(int num1, int num2)

{
    return num1 + num2;
}


int calcDifference(int num1, int num2)

{
    return num1 - num2;
}


int calcProduct(int num1, int num2)

{
    return num1 *num2;
}
int calcQuotient(int num1, int num2)

{
    return num1 / num2;
}
int main()
{
    int n1 = 0;
    int n2 = 0;

    provideNumbers(n1,n2);

    cout<<n1<<"and"<<n2<<endl;
    cout<<"The sum of first number and Second Numbver is:"<<calcSum(n1,n2)<<endl;
    cout<<"The sum of first number and Second Numbver is:"<<calcDifference(n1,n2)<<endl;
    cout<<"The sum of first number and Second Numbver is:"<<calcProduct(n1,n2)<<endl;
    cout<<"The sum of first number and Second Numbver is:"<<calcQuotient(n1,n2)<<endl;

    return 0;

}



