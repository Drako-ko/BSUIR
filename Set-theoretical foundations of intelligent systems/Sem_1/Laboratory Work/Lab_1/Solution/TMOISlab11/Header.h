#pragma once
#include <iostream>

class CL {
	int Kx, Ky, *A, *B;
public:
	//Функция определения мощности двух множеств
	void setStrenght() {
		std::cout << "Enter a Moschnost' of Mnozhestvo A: ";
		std::cin >> Kx;
		std::cout << "Enter a Moschnost' of Mnozhestvo B: ";
		std::cin >> Ky;
	}
	//Функция вывода мощности двух множеств
	void showStrenght() {
		std::cout << "Kx = " << Kx << " | Ky = " << Ky << std::endl;
	}
	//Функция ввода элементов двух множеств
	void setNumbers() {
		A = new int[Kx];
		for (int i = 0; i < Kx; i++)
		{
			std::cout << "Enter a number for A[" << i << "]: ";
			std::cin >> A[i];
		}
		
		B = new int[Ky];
		for (int i = 0; i < Ky; i++)
		{
			std::cout << "Enter a number for B[" << i << "]: ";
			std::cin >> B[i];
		}
	}
	
	//Функция вывода элементов двух множеств
	void showNumbers() {
		for (int i = 0; i < Kx; i++)
		{
			std::cout << A[i] << " ";
		}
		std::cout << std::endl;
		for (int i = 0; i < Ky; i++)
		{
			std::cout << B[i] << " ";
		}
		std::cout << std::endl;
	}
	//Функция выбора операции
	void choseOp() {
		int CASE;
		std::cout << std::endl<<"Operation 1: Obj'edinenne\nOperation 2: Peresechenne\nEnter a case: ";
		std::cin >> CASE;
		switch (CASE)
		{
		case 1: this->operationOne(); break;
		case 2: this->operationTwo(); break;
		default: std::cout << "Error!"; break;
		}
	}
	//Функция алгоритма операции объединения
	void operationOne() {
		
		std::cout << "Mnozhestvo C: ";
		for (int i = 0; i < Kx; i++)
		{
			std::cout << A[i] << " ";
		}

		bool isTrue = false;
		for (int y = 0; y < Ky; y++)
		{
			for (int x = 0; x < Kx; x++)
			{
				if (B[y] == A[x]) { isTrue = true; }
			}
			if (isTrue == false) { std::cout << B[y] << " "; }
			isTrue = false;
		}
	}

	//Функция алгоритма операции пересечения
	void operationTwo() {
		std::cout << "Mnozhestvo D: ";
		bool isTrue = false;
		for (int y = 0; y < Ky; y++)
		{
			for (int x = 0; x < Kx; x++)
			{
				if (B[y] == A[x]) { isTrue = true; }
			}
			if (isTrue == true) { std::cout << B[y] << " "; }
			isTrue = false;
		}
	}
};