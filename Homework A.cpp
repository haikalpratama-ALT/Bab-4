#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main(){
	int data1, data2, data3, data4, data5, data6;
	ifstream file("data_x.txt");
	if(file){
		cout<<"File sukses dibuka!"<<endl;
		file>>data1;
		file>>data2;
		file>>data3;
		file>>data4;
		file>>data5;
		file>>data6;
		file.close();
		cout<<"x"<< setw(5)<<"y"<<endl;
		cout<<data1<<setw(5)<< data1*data1+1<<endl;
		cout<<data2<<setw(5)<< data2*data2+1<<endl;
		cout<<data3<<setw(5)<< data3*data3+1<<endl;
		cout<<data4<<setw(5)<< data4*data4+1<<endl;
		cout<<data5<<setw(5)<< data5*data5+1<<endl;
		cout<<data6<<setw(5)<< data6*data6+1<<endl;
		return 0;
	}else{
		cout<<"File gagal dibuka!"<<endl;
		return 1;
	}
}
