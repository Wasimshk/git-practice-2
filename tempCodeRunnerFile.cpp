#include <iostream>
using namespace std;
int main(){
int age;
cout<<"enter your age"<<endl;
cin>>age;

if (age>=18){
    cout<<"You can vote";
}
else if (age>150){
    cout<<"Invalid age";
}
else{
    cout<<"You can not vote";
}
    return 0;
}
