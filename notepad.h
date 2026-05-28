#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Functions
void createDocument(string filename);
void readDocument(string filename);
void appendDocument(string filename);

#endif