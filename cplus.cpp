#include <iostream>
using namespace std;
int main(){
int age;
cout<<"enter your age"<<endl;
cin>>age;

if (age>150 || age<=0){
    cout<<"Invalid age";
}
else if (age>=18){
    cout<<"You can vote";
}

else{
    cout<<"You can not vote";
}
    return 0;
}
