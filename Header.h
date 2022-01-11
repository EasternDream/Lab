/**
	\file
	������������ ���� ��� ������� ������������ ������.
*/
/**
	\brief �������, ��������� ������������ ������.
	\details ������� ���������� ������� C, ������ ������������ ������ A �� B.
	\param[in] a ������ ������� A
	\param[in] na ���������� ����� ������� �
	\param[in] ma ���������� �������� ������� �
	\param[in] b ������ ������� B
	\param[in] nb ���������� ����� ������� B
	\param[in] mb ���������� �������� ������� B
	\param[out] nr ���������� ����� ������� B
	\param[out] mr ���������� �������� ������� B
	\return ������� C = A * B

*/
#include <iostream>
#include <ctime>

void initialization(double** matrix_int_B, double** matrix_int_A, int matrix_size);