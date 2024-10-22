// CMakeProject1.cpp: define o ponto de entrada para o aplicativo.
//

#include "CMakeProject1.h"
#include <sstream>
#include <iostream>
#include <list>

using namespace std;


int main()
{
	// Print
	cout << "Hello CMake, I am here" << endl;
	
	// For
	int i = 100;
	for (size_t i = 0; i <= 100 ; i++)
	{
		cout << "Hello CMake, I am here " <<std::to_string(i) << endl;
	}

	// Creating List
	list<string> gqlist { "Jhon","Bosco" };
	for (auto i : gqlist) {
		cout << i << ' - ';
	}
	return 0;
}
