#include<iostream>
 using namespace std;

 void getNumbers(int &num1, int &num2);
 int displaySum(int num1, int num2);
 int  displayDifference(int num1, int num2);
 int displayProduct(int num1, int num2);
 int displayQuotient(int num1, int num2);

 int main()

 {
     int num1 = 0;
     int num2 = 0;

    getNumbers(int num1, int num2);
    displaySum(int num1, int num2);
    displayDifference(int num1, int num2);
    displayProduct(int num1, int num2);
    displayQuotient(int num1, int num2);

return 0;

 }

 void getNumbers(int &num1, int &num2)

 {
     cout<<"Enter First number:"<<endl;
     cin>>num1;

     cout<<"Enter Second number:"<<endl;
     cin>>num2;
 }

 void displaySum(int num1, int num2)
 cout<<The Sum of the numbers is:<<num1 + num2<<endl;

 void displayDifference(int num1, int num2)
 cout<<The Sum of the numbers is:<<num1 - num2<<endl;

 void displayProduct(int num1, int num2)
 cout<<The Sum of the numbers is:<<num1 * num2<<endl;

 void displaySum(int num1, int num2)
 cout<<The Sum of the numbers is:<<num1 / num2<<endl;



