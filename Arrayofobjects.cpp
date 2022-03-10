#include<iostream>
using namespace std;

class employee
{
	char name[30];
	float age;
	
public : 
	void details();
	void display();
};

void employee :: details()
{
	cout<<"Enter name : "<<endl;
	cin>>name;
	
	cout<<"Enter age : "<<endl;
	cin>>age;
}

void employee :: display()
{
	cout<<"Name : "<<name<<endl;
	cout<<"Age : "<<age<<endl;
}

const int size = 5;

int main()
{
	employee manager[30];
	
	int i;
	
	for(i = 1; i <= size; i++)
	{
		cout<<"Manager details : "<<i<<endl;
		manager[i].details();
	}
	
	cout<<endl;
	
	for(i = 1; i <= size; i++)
	{
		cout<<"Manager : "<<i<<endl;
		manager[i].display();
	}
	
	return 0;
}