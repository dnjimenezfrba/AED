//============================================================================
// Name        : EjemploTipos.cpp
// Author      : Nicolas Jimenez
// Description : TP 1: Ejemplo Tipos
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
using namespace std;

const string str1 = "Grand";
const string str2 = " ";
const string str3 = "Challenger";

const unsigned int uint1 = 1;

const int int1 = -11; 
const int int2 = 20;

const double d1 = 4.5;
const double d2 = 10.2;

const bool b1 = true;
const bool b2 = false;

const char ch1 = 65;
const char ch2 = 3;
const char ch3 = 'A';


int main() {
    
    assert(str1+str2+str3 == "Grand Challenger");

    assert(int1+int2==9); 
    assert(int1*int2==-220); 

    assert(uint1+int1==-10); 
    
    assert(d1+d2==14.7); 

    assert(b2|b1==true);
    assert(b1^b1==false);

    assert(ch1+int2==85);
    assert(ch2+ch1==68);
    assert(char(ch2+ch1)=='D');
    assert(char(ch3+int2)=='U');
    assert(char(ch3+ch2-1)=='C');


	return 0;
}
