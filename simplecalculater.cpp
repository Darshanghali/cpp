#include <iostream>
using namespace std;
int main (){

int a,b;

cout<<"enter the number first number"<<endl;
cin>>a;

cout<<"enter the number second number"<<endl;
cin>>b;

char op;
cout<<"Enter the operter"<<endl;
cin>>op;

switch (op){
     case '+': cout<<(a+b)<<endl;
     break;
     case '-': cout<<(a-b)<<endl;
     break;
     case '*': cout<<(a*b)<<endl;
     break;
     case '/': cout<<(a/b)<<endl;
     break;
     case '%':cout<<(a%b)<<endl;
     break;
      
   


}




}
