#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

#define weight 20
void task1()
{
//1.Массив предназначен для хранения значений весов двадцати человек
//С помощью датчика случайных чисел заполнить массив целыми значениями, лежащими в диапазоне от 50 до 100 включительно
	int person[weight] = { 0 };
	int i = 0;
	for (int i = 0; i < weight; i++)
	{
		person[i] = 50 + rand() % 100;
		printf("weight[%i] ->%i\n", i, person[i]);
	}
}

#define sequence 8
void task2()
{
//2.Заполнить массив из восьми элементов таким образом, чтобы значения элементов при просмотре массива слева направо образовывали:
//a.убывающую последовательность;
//b.возрастающую последовательность
	int array[sequence] = { 1,2,3,4,5,6,7,8 };
	int n = sequence;
	for (int i = n-1; i >=0; i--)
	{
		printf("array[%i] ->%i\n", i, array[i]);
	}
	printf("--------------------------------\n");
	for (int i = 0; i < sequence; i++)
	{
		printf("array[%i] ->%i\n", i, array[i]);
	}
}

#define RR 10
void task3()
{
//3.Ввести целочисленный массив, состоящий из 10 элементов.Поменять местами максимальный и первый элементы.
	int array[RR] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < RR; i++)
	{	
		array[0] = 10;
		array[9] = 1;
	printf("array[%i] ->%i\n", i, array[i]);
	}
}

#define QQ 15
void task4()
{
//4.Задан массив, состоящий из 15 элементов вещественного типа
//Определить количество элементов, значения которых больше первого элемента.
	int arr[QQ] = {0};
	int c = 0;
	for (int i = 0; i < QQ; i++)
	{
		arr[i] = 1 + rand() % 50;
		printf("arr[%i] ->%i\n",i,arr[i]);
	}
	printf("-------------------------\n");
	for (int i = 0; i < QQ; i++)
	{
		if (arr[i] < arr[i + 1])
			c++;
	}    printf("Результат->%d\n", c);
}


void task5()
{
//5.Ввести целочисленный массив, состоящий из 15 элементов.Определить сумму и разность максимального и минимального  элементов
	int array[15] = { 12,24,13,15,67,23,80,2,23,43,12,34,19,15,55 };
	int min = 100;
	int max = -1;
	for (int i = 0; i < 15; i++)
	{
		if (array[i] < min)
			min = array[i];
		else if (array[i] > max)
			max = array[i];
	}
	min += max;
	max -= min;
	printf("cумма->%i\nразность->%i\n", min, max);
}

#define AA 17
void task6()
{
//6.Ввести целочисленный массив, состоящий из 17 элементов.Заменить элементы кратные трем на сумму нечетных по значению элементов
	int array[AA] = { 0 };
	int c = 0;
	for (int i = 0; i < AA; i++)
	{
		array[i] = 0 + rand() % 999;
		if (array[i+1]%3==0 && array[i+1]/2!=0)
		{
			c += array[i];
			array[i + 1] = c;
		}
		printf("array[%i]->%i\n", i, array[i]);
	}
}

#define size 15
void task7()
{
//7.Ввести массив, состоящий из 15 элементов целого типа.Определить количество отрицательных, произведение положительных и количество нулевых элементов
	int arr[size] = { 0 };
	int n = 0;//нулевые элементы
	int negative = 0;
	int positive = 0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = -5 + rand() % 20;
		if (arr[i] == 0) n++;
		if (arr[i] <= 0) negative++;
		if (arr[i] >= 0) positive++;
		{
			positive = arr[i] +arr[i];
		}
	}
	printf("В массиве %i нулевых элементов\n", n);
	printf("В массиве %i отрицательных чисел\n", negative);
	printf("Произведение положительных чисел ->%i\n", positive);
}

#define LL 19
void task8()
{
//8.Дан массив − 19 элементов целого типа.Найти сумму элементов, расположенных до первого отрицательного элемента
//Если отрицательных элементов нет, то выдать соответствующее сообщение.
	int arr[LL] = { 0 };
	int n = 0;
	for (int i = 0; i <LL; i++)
	{
		arr[i] = -10 + rand() % 20;
	}
	int j=0;
	while (arr[j++]>0)
	{
		n += arr[j++];
		j++;
	}
	printf("%i\n", n);
}

#define N 12
void task9()
{
//9.В заданном массиве М(12) действительных чисел увеличить минимальный элемент в три раза и поменять местами с последним
	int arr[N] = { 0 };
	int min = 0;
	int i,b;
	for (i = 0; i < N; i++) {
		arr[i] = rand() % 100;
		printf("arr[%d]->%d\n",i, arr[i]);
		if (arr[i] < arr[min]) min = i;
	}
	printf("-----------------------------------\n");
	arr[min * 3];
	b = arr[min];
	arr[min] = arr[i = 11];
	arr[i = 11] = b;
	for (i = 0; i < N; i++)
		printf("arr[%d]->%d\n",i, arr[i]);
}

#define M 15
void task10()
{
//10.Дан массив М(15) вещественных чисел.Расположить элементы в обратном порядке
	int arr[M], i, b;
	for (i = 0; i < M; i++)
	{
		arr[i] = 0 + rand() % 1200;
		printf("arr[%d]->%d\n", i, arr[i]);
	}
	printf("----------------------------------\n");
	for (i = 0; i < M / 2; i++) 
	{
		b = arr[i];
		arr[i] = arr[M - i - 1];
		arr[M - i - 1] = b;
	}
	for (i = 0; i < M; i++)
	{
		printf("arr[%d]->%d\n", i, arr[i]);
	}
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int task;
	int flag;
start:
	printf("Введите номер задания-> ");
	scanf_s("%i", &task);
	switch (task)
	{
	case 1: {task1(); }break;
	case 2: {task2(); }break;
	case 3: {task3(); }break;
	case 4: {task4(); }break;
	case 5: {task5(); }break;
	case 6: {task6(); }break;
	case 7: {task7(); }break;
	case 8: {task8(); }break;
	case 9: {task9(); }break;
	case 10: {task10(); }break;
	default:
		break;
	}
	printf("Чтобы продолжить нажмите <1>");
	scanf_s("%i", &flag);
	if (flag==1)
	{
		goto start;
	}
	system("pause");
}