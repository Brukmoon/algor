/*
 * @brief: C console testing framework
 * @author: Michal H.
 * @email: MHlous@gmail.com
 *
 **/
#include <stdio.h>
#include "simple_sorts.h"

bool less(const int* first, const int* second)
{
	if (*first < *second)
		return true;
	return false;
}

int main(int argc, char* argv[])
{
	int arr[] = { 1, 2, 5, 3, 1 };
	insertion_sort(arr, sizeof(int), 5, less);
	return EXIT_SUCCESS;
}