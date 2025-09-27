#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
string txt;
cout<<"Enter the string";
getline(cin,txt);
ofstream file("string.txt");

if(file.is_open()){
		file<<txt;
		file.close();
	cout<<"data write succesfully in file"<<endl;
}
else{
	cout<<"Unable to open the file for writing";
}	
ifstream f("string.txt");
string filedata;
if(f.is_open()){
getline(f,filedata);
f.close();
cout<<"Data read from file:"<<filedata;
}
else{
	cout<<"unable to open file for reading";
}
	return 0;
}

