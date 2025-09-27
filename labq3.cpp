#include<iostream>
using namespace std;
int main(){
	int choice;
	cout<<"Enter the choice:";
	cin>>choice;
 int a;
 cout<<"Enter the number:";
 cin>>a;
 int b;
 cout<<"Enrter the number";
 cin>>b;
 switch(choice){
 	case 1:{	
 		cout<<"Sum of the num is :"<<a+b<<endl;
		break;
	 }
	 case 2:{
	 	cout<<"Difference is:"<<a-b<<endl;
		break;
	 }
	 case 3:{
	 cout<<"Product of num is:"<<a*b<<endl;
		break;
	 }
	 case 4:{
	cout<<"Division of the num is ;"<<a/b<<endl;
		break;
	 }
	 default:{
	 	cout<<"Invalid number";
	}
	 
 }
 
 return 0;
}
