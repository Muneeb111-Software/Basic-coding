#include<iostream>
using namespace std;
struct Student{
	int id;
	string name;
	float marks;
};
int main(){
Student s[3];
for(int i=0;i<3;i++){
cout<<"Enter id, Name and marks of Student "<<i+1<<endl;
cin>>s[i].id>>s[i].name>>s[i].marks;
}
int highmarks=0;
for(int i=1;i<33;i++){
if(s[i].marks>s[highmarks].marks){
	highmarks =i;
}	
}
cout<<"Student data:";
cout<<"ID:"<<s[highmarks].id<<endl;
cout<<"Name:"<<s[highmarks].name<<endl;
cout<<"Marks:"<<s[highmarks].marks<<endl;	
	return 0;
}
