#include<iostream>


int main() {
	//Задача 1.
	/*int minutes;
	std::cout << "Enter minutes: \n";
	std::cin >> minutes;
	int hours = minutes / 60;
	minutes = minutes - hours * 60;
	std::cout << hours << ":" << minutes << "\n";*/

	//Задача 2.
	/*system("chcp 1251>nul");
	double n,res;
	const double m = 2.54;

	std::cout << "Введите кол-во дюймов: \n";
	std::cin >> n;
	res = n * m;
	std::cout << "Кол-во см = " << res << "\n";*/

	//Задача 3.
	system("chcp 1251>nul");

	double N, days, res, kg = 1000;
	
	std::cout << "Введите количество корма съеденное за день:\n";
	std::cin >> N;
	std::cout << "Введите количество дней в месяце подсчета каллорий хомячка:\n";
	std::cin >> days;
	res = N * days / kg;
	std::cout << "Кол-во килограмм потребляемое хомячком в месяц =  "<<res<<"\n";



	return 0;
}