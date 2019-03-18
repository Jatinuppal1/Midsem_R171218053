#include<iostream>
using namespace std;
class data
{
	string name;
	int roll_no;
public:
	void dat_entry();
	void display();
};
void data::dat_entry()
{
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
