#pragma once


#ifndef DataGenerator_H
#define DataGenerator_H


#include <iostream>
#include <fstream>
#include <cmath>
#include <time.h>

using namespace std;

template <class T>

void HoanVi(T& a, T& b);
void GenerateRandomData(int* a, int n);
void GenerateSortedData(int* a, int n);
void GenerateReverseData(int* a, int n);
void GenerateNearlySortedData(int* a, int n);
void GenerateData(int* a, int n, int dataType);




#endif			