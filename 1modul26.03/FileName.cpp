#include<iostream>


int main() {
	//������ 1.
	/*int minutes;
	std::cout << "Enter minutes: \n";
	std::cin >> minutes;
	int hours = minutes / 60;
	minutes = minutes - hours * 60;
	std::cout << hours << ":" << minutes << "\n";*/

	//������ 2.
	/*system("chcp 1251>nul");
	double n,res;
	const double m = 2.54;

	std::cout << "������� ���-�� ������: \n";
	std::cin >> n;
	res = n * m;
	std::cout << "���-�� �� = " << res << "\n";*/

	//������ 3.
	system("chcp 1251>nul");

	double N, days, res, kg = 1000;
	
	std::cout << "������� ���������� ����� ��������� �� ����:\n";
	std::cin >> N;
	std::cout << "������� ���������� ���� � ������ �������� �������� �������:\n";
	std::cin >> days;
	res = N * days / kg;
	std::cout << "���-�� ��������� ������������ �������� � ����� =  "<<res<<"\n";



	return 0;
}