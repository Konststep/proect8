#include <iostream>
#include <clocale>
#include <string>
#include <fcntl.h>
#include <io.h>
#include <Windows.h>

using namespace std;


namespace sloj
{
	int calc(int x, int y)
	{
		int z = x + y;
		cout << "Сложение: "; return z;
	}
}
namespace vich
{
	int calc(int x, int y)
	{
		int z = x - y;
		cout << "Вычитание: ";return z;
	}
}
namespace ymn
{
	int calc(int x, int y)
	{
		int z = x * y;
		cout << "Умножение: ";return z;
	}
}
namespace del
{
	int calc(int x, int y)
	{
		int z = x / y;
		cout << "Деление: ";return z;
	}
}

int main()
{
	//_setmode(_fileno(stdout), _O_U16TEXT);
	//_setmode(_fileno(stdin), _O_U16TEXT);
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x = 6, y = 9, z;
	cout << "x = " << x << ", y = " << y << endl;

	std::cout << sloj::calc(x, y) << endl;
	std::cout << vich::calc(x, y) << endl;
	std::cout << ymn::calc(x, y) << endl;
	std::cout << del::calc(x, y) << endl;

	return EXIT_SUCCESS;
}