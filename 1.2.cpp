#include <iostream>
using namespace std;
void calcircle();
void rec();
int main ()
{	char menu ;
	do{
	cout << "Program Calculate of Circle." << endl;
	cout << "****************************" << endl;
	cout << "1. circle" << endl;
	cout << "2. Rectangle" << endl;
	cout << "3. Exit" << endl;
	cout << "Choose Menu :";
	cin >> menu;
	if(menu=='1')calcircle();
		else if(menu=='2')rec();
			else if (menu=='3')
				break;
				else cout << "wrong menu"<< endl;
	}while(menu!='3');
}
void calcircle()
{
	float radius,area,circumference;
	cout << "Input radius : ";
	cin >> radius;
	area = 3.14f*radius*radius;
	circumference = 2*3.14f*radius;
	cout << endl;
	cout << "Area of circle :" << area << endl;
	cout << "Circumference of circle :" << circumference << endl;
	cout << "Diameter of circle : " << (2*radius) << endl;
}
void rec()
{
	float w,l,area;
	cout << "Input length :";
	cin >> l;
	cout << "Input width :";
	cin >> w;
	cout << endl;
	area = l*w;
	cout << "Area of Rectangle :" << area << endl;
}