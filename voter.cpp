#include<iostream>
using namespace std;

int main(){
	char name[20];
	int age;
	cout << "Enter your Name: ";
	cin >> name;
	cout << "Enter your Age: ";
	cin >> age;

	if(age>=18)
		cout << "You are eligible to Vote " << name << "!\n";
	else
		cout << "You are underage to Vote " << name << "!\n";
}
