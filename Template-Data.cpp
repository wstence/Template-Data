#include <iostream>
#include <fstream>

using namespace std;

template <class T>
T display_name (T first, T last) 
{
	T full_name;
	T age;
	full_name = first + " " + last;
	return full_name;
}

int main() 
{
	ifstream infile("names.txt");
	ofstream outfile("output.txt");
	string first = " ";
	string last = " ";
    int age = 0;
	infile >> first >> last;
	string full_name = display_name<string> (first, last);
	infile >> age;
	outfile << full_name << "\nAge: " << age << "\n";
	infile.close();
	outfile.close();
	return 0;

}

