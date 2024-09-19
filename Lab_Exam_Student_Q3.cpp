#include<iostream>
using namespace std;
class Student
{
	private:
		string name,address;
		int age;
	public:
		Student()
		{
			name="unknown";
			age=0;
			address="not available";
		}
		void setInfo(string name,int age)
		{
			cout<<"Enter name and age: ";
			cin>>name>>age;
			name=name;
			age=age;
			cout<<"\nStudent name:"<<name<<"& age: "<<age;
		}
		
		void setInfo(string name,int age,string address)
		{
			name=name;
			age=age;
			address=address;
			cout<<"\nStudent name:"<<name<<" age: "<<age<<" & address : "<<address;
		}	
};
int main()
{
	string name,address;
	int age;
	
	Student s[10];
	
	for(int i=0;i<10;i++)
	{
		s[i].setInfo(name,age);
		cout<<"\n===============================\n";
	}
};