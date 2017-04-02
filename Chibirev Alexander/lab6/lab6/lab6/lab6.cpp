// lab6.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "CMergeSort.h"
#include "CSorterManager.h"

int main()
{
	try
	{
		std::cout << "Simple merge sort:" << "\n";
		CMergeSort mergeCalc;
		CSorterManager mergeSorter(mergeCalc, "data.txt");
		mergeSorter.Start();
	}
	catch (const std::exception & except)
	{
		std::cout << except.what() << std::endl;
		return 1;
	}
	return 0;
}
