#include "bagapovar.h"

/**
 * Введение в дисциплину
 */

 void bagapovar::lab1()
{
std::cout<<"Hello world";
}


/** 
* Метод Гаусса с выбором главного элемента 
*/ 
void bagapovar::lab2() 
{ 
double t; 

for (int k = 0; k < N; k++) { //Ищем самый большой элемент стоящий на к'атом месте по всем строкам, по умолчанию он k'ый 
	int maxel=k; 
		for(int i=k+1;i<N;i++) 
			if(abs(A[i][k]) > abs(A[maxel][k])) 
				maxel=i; 
//Нашли, теперь надо поменять k'ую строчку и строчку с максимальным элементом местами 
	for(int i=0;i<N;i++) 
	std::swap(A[k][i],A[maxel][i]); 
	std::swap(b[k],b[maxel]); 

//Прямой ход 
t = A[k][k]; 
//Делим все элементы k'ой строки на a[k][k] элемент, потому что он диагональный и мы хотим на нём получить значение 1 
//для удобства дальнейших вычислений 
for (int j = 0; j < N; j++) 
	A[k][j] = A[k][j] / t; 
b[k] =b[k]/t; 

for (int i = k + 1; i < N; i++) { 
	t = A[i][k]; 
//Вычитаем из всех строк лежащих ниже k'ой к'ую строку помноженную на k'ый элемент строки, 
// из которой вычитаем, что даёт нам ноль в этом элементе после вычитания и матрица постепенно приобретает треугольный вид 

	for (int j = 0; j < N; j++) { 
		A[i][j] =A[i][j]- A[k][j] * t; 
	} 
b[i] =b[i]- b[k] * t; 
} 
} 

//Матрица треугольного вида готова, теперь можем последовательно, снизу вверх вычислять искомые значения элементов матрицы x 
//Осуществляем обратный ход 
for (int k = N - 1; k > 0; k--) 
{ 
for (int i = k - 1; i >= 0; i--) 
{ 
t = A[i][k]; 

for (int j = 0; j < N; j++) 
A[i][j] =A[i][j]- A[k][j] * t; 
b[i] =b[i] - b[k] * t; 
} 
} 

for(int i=0; i<N; i++) 
x[i]=b[i]; 
} 



/**
 * Метод прогонки
 */
void bagapovar::lab3()
{

}



/**
 * Метод простых итераций
 */
void bagapovar::lab4()
{

}



/**
 * Метод Якоби или Зейделя
 */
void bagapovar::lab5()
{

}



/**
 * Метод минимальных невязок
 */
void bagapovar::lab6()
{

}



/**
 * Метод сопряженных градиентов
 */
void bagapovar::lab7()
{

}


void bagapovar::lab8()
{

}


std::string bagapovar::get_name()
{
  return "Bagapov A.R.";
}
