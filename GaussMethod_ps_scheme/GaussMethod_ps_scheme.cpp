// GaussMethod_ps_scheme.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "Gauss_math.h"
#include <iostream>
using namespace std;
int main()
{
	const size_t m = 4;
	const size_t n = 4;
	float A[m][n] = {
		{10,6,2,0},
		{5,1,-2,4},
		{3,5,1,-1},
		{0,6,-2,2}
	};
	float B[m][1] = {
		25,14,10,8
	};
	float X[m][1] = {
		1,1,1,1 
	};

	method_Gauss_SLAU<float,m,n>(A,B,X);

    return 0;

}

