// CMakeProject1.cpp: define o ponto de entrada para o aplicativo.
//

#include "CMakeProject1.h"
#include <sstream>
using namespace std;


int main()
{
	cout << "Hello CMake, I am here" << endl;
	int i = 100;
	for (size_t i = 0; i <= 100 ; i++)
	{
		cout << "Hello CMake, I am here " <<std::to_string(i) << endl;
	}
	return 0;
}
