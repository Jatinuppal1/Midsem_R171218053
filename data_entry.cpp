#include<iostream>
using namespace std;
class data
{
	string name;
	int roll_no;
	static int count;
public:
	data();
	{
		cout << "\nData entry no. -" << ++count;
	}
	void dat_entry();
	void display();
};
int data::count = 0;
void data::dat_entry()
{
	cout<<"____Data Entries____";
	cout << "\nEnter your namr - ";
	cin >> name;
	cout << "\nEnter your roll no. - ";
	cin >> roll_no;
	display();
}
void data::display()
{
	cout<<"\nYour name is "<<name;
	cout<<"\nYour roll no. is "<<roll_no;
}
int main()
{
	data D;
	D.dat_entry();
	return 0;
}
