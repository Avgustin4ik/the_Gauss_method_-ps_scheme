#pragma once
template <typename T, size_t M, size_t N>
void swap_rows(T (&A)[M][N], const size_t &first, const size_t &second)
{
	T temp_raw[N];
	for (size_t j = 0; j < N; j++)
	{
		temp_raw[j] = A[first][j];
	}
	for (size_t j = 0; j < N; j++)
	{
		A[first][j] = A[second][j];
	}
	for (size_t j = 0; j < N; j++)
	{
		A[second][j] = temp_raw[j];
	}
}
template <typename T, size_t M, size_t N>
size_t find_max_of_selected_row(T(&A)[M][N], const size_t _j)
{
	T max;
	size_t i_max;
	max = fabs(A[0][0]);
	i_max = 0;
	for (size_t i = 0; i < M; i++)
	{
		if (fabs(A[i][_j]) > max)
		{
			max = A[i][_j];
			i_max = i;
		}
	}
	return i_max;
}

template <typename T, size_t M, size_t N>
void method_Gauss_SLAU(T(&A)[M][N], T(&B)[M][1], T(&X)[M][1])
{

}