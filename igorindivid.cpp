// igorindivid.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

const int N = 5 ;
int index;
void izfile(int A[N][N] , const int N )
{
	ifstream file("Kyko.txt");
	for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
		file >> A[i][j];
		}
	}
};
//-------------------------------------------------------------------------------------
void print_matr(int A[N][N] ,const int N )
{
	for (int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<A[i][j] <<'\t';
		}
		cout<<endl;
	}
};
void sort(int A[N][N],const int N,int index,int a[])
{

	 for (int j=0;j<N;j++)  
				{
                for (int  i=0; i<N; i++) 
					{ 
						index=rand()%N;
						a[i]=A[i][j];
						A[i][j]=A[i][index];
						A[i][index]=a[i];
					}
						j++;
			 }
};
//-------------------------------------------------------------------------------------
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0 , "Rus");

	int A[N][N];
	int l=1;
	bool flag_vozvr=true;
	bool flag_ubiv=true;

	srand(time(0));

	izfile( A , N );

	cout<<"-----------------Вывод начальной матрицы------------------ "<<endl;

	print_matr( A , N );
	cout << endl;
	int*a = new int[N];
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(A[i][N-1-j]<A[i+1][N-2-i])
			{
				
				cout << "---------------Сортировка побочной диагонал по возрастанию проход ["<<l<<"]--------------- \n" ;
				sort(A,N,index,a);
				l++;

				cout<<endl;
				for (int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<A[i][j]<< '\t';
		}
		cout<<endl;
	}
			}
			
		}
	}
	cout<<endl;
//-------------------------------------------------------------------------------------
	cout<<"-----------------------------Решение найдено!---------------------------"<<endl;
	cout<<"Вывод отсортированной матрицы "<<endl;
	print_matr( A , N );
	/*cout << "Вывод матрицы по заданию ! \n" ;
	for (int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<A[i][j]<<'\t';
		}
		cout<<endl;
	}
	system("pause");
	return 0;*/
	system("pause");
	return 0;
}
