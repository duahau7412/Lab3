#pragma once
#ifndef _TERMINAL_H
#define _TERMINAL_H
#include <string>
#include <sstream>
using namespace std;
bool isNumber(string s);

bool isValidAlgorithm(string algorithm, int& valid_algorithm);

bool isValidOutputParam(string output_param, int& valid_output);

bool isValidDataOrder(string data_order, int& valid_order);

void ifNOTValidAlgorithm(string algorithm);

void ifNOTValidOutputParam(string output_param);

void ifNOTValidDataOrder(string data_order);

void OutputConsole(string ALGORITHM_NAME, int INPUT_SIZE, string INPUT_ODER, int output_param, double running_time, int count_compare,string INPUT_FILE);

void DataOrderMODE(int* arr, int inputSIZE, int inputDataOrder);

bool handleAlgorithmsMode(int argc, char* argv[]);

bool handleComparisonMode(int argc, char* argv[]);

bool handleArguments(int argc, char* argv[]);

bool Command_1(int argc, char* argv[], int algorithm);

bool Command_2(int argc, char* argv[], int algorithm);

bool Command_3(int argc, char* argv[], int algorithm);

bool Command_4(int argc, char* argv[], int algorithm1, int algorithm2);

bool Command_5(int argc, char* argv[], int algorithm1, int algorithm2);

void DevTestMode();
#endif 
