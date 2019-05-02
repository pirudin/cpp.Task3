﻿// Task 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "MyIterator.h"
#include "MyNode.h"
#include "MyGraph.h"
#include <iostream>
#include <string>

using namespace std;

/*
Реализовать шаблон класса (функции), принимающий элементы любого типа и поддерживающий базовые операции 
в соответствии со своим назначением. В качестве внутренней структуры хранения данных можно 
использовать, например, динамический массив. Использование шаблона должно осуществляться 
из функции main() и содержать примеры работы как минимум с двумя разными типами данных 
(например, int и string).

5. Направленный граф.

Сделать итератор.
Граф с узлами целых числе, граф с узлами строк.

Операции :
1) Получить количество узлов
2) Пометить все узлы как посещенные
3) Пометить все узлы как непосещенные
4) Напечатать все узлы
5) Напечатать инцедентные вершины узла
6) Получить имя графа
*/


int main()
{
	setlocale(LC_ALL, "Russian"); // установка локализации для корректного отображения русских символов


	cin.ignore();
	cin.ignore(); // для удобства отладки
}