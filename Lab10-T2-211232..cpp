#include <iostream>
#include <string>
using namespace std;
/*a program that takes data of five students from the user (names, roll numbers, and
GPA). After storing the data, prompt the user to enter a roll number, search in the stored
data and display the complete grade report for that roll number.*/

int main() 
{
	//variables declaration
	string name[5];
	float gpa[5];
	int roll_num[5];
	int index,check;
	
	for(int i=0;i<5;i++) //loop for inputs from students
	{
		cout<<"Enter name of Student "<<i+1<<": "; cin>>name[i];
		cout<<"Enter GPA of Student "<<i+1<<": "; cin>>gpa[i];
		cout<<"Enter Roll number of Student "<<i+1<<": "; cin>>roll_num[i];
		cout<<endl;
	}
	cout<<"\n\nEnter the Roll Number of Required student: "; cin>>check;
	for(int i=0;i<5;i++)  //loop for check of roll numbers from first to last
	if (check==roll_num[i]) //if conditionfor roll number check
		index=i; 
		
	// display Complete Grade report of student ,which roll number is entered
	cout<<"\n\nName Of Student: "<<name[index]<<endl; 
	cout<<"GPA of Student: "<<gpa[index]<<endl;
	cout<<"Roll Number OF Student: "<<roll_num[index]<<endl;
	
	return 0;
}
