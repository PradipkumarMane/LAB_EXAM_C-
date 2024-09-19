// Create a class 'Student' with three data members which are name, age and address. The constructor of the class assigns default values to name as "unknown", age as '0' and address as "not available". It has two functions with the same name 'setInfo'. First function has two parameters for name and age and assigns the same whereas the second function takes has three parameters which are assigned to name, age and address respectively. Print the name, age and address of 10 students.
//  Use array of objects

// Name:Pradipkumar Mane
// ROLL_NO:36
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
