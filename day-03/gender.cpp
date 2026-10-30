#include<iostream>

using namespace std;

int main(){

//Declare
char gender;

//Prpmpt
cout<<"Enter Gender:"<<endl;

cin>>gender;

if ((gender =='M')|| (gender =='m')){
    cout<<"You are Male";
}

 else if ((gender =='F')|| (gender =='f')){
    cout<<"You are Female"<<endl;

} else {

cout<<"Invalid gender";
}

return 0;


}
