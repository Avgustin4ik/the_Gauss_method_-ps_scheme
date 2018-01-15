// GaussMethod_ps_scheme.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "my_math.h"
#include <iostream>
using namespace std;
int main()
{
	const size_t m = 3;
	const size_t n = 3;
	int A[m][n] = {
		{1,2,3},
		{3,2,6},
		{7,2,1}
	};
	/*swap_rows<int, m, n>(A, 0, 2);*/
	size_t I = find_max_of_selected_row<int, m, n>(A, 2);
    return 0;

}

