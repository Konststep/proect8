#include <iostream>
#include <clocale>
#include <string>
#include <fcntl.h>
#include <io.h>
#include <Windows.h>

using namespace std;

void counting_function()
{
	static int a;
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	a++;
	cout << "Количество вызовов функции counting_function() :" << a << endl;
}

int main()
{
	for (int i = 0; i < 15; i++)
	{
		counting_function();
	}

	return EXIT_SUCCESS;
}