//
//  Daisy.hpp
//  Flowers
//
//  Created by Owner on 9/30/24.
//

#ifndef Daisy_hpp
#define Daisy_hpp

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <vector>
#include <thread>
#include <iomanip>
#include <complex>
#include "Rose.hpp"
#include "Petunia.hpp"
#include "Marigold.hpp"
#include "Iris.hpp"
#include <fstream>
using namespace std;


//This is the function descibing the wire mechanism in the Enigma Machine
// L f-> R1 g-> R2 h-> R3 k ->R3
// R3-> invH-> R2 invG-> R1 invF-> L
//We need functions that are bijections (one-to-one and onto).
/*
 Here are the functions I will use for this scenario:
 
 f(x) = 9x+1
 g(x) = 2x+3
 h(x) = 5x-5
 k(x) = 3x-7
 
 */



class Enigma{
public:
    vector<char> letters={'A','B','C','D','E','F',
        'G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char input;
    vector<char> SetRotorOne();
    vector<char> SetRotorTwo();
    vector<char> SetRotorThree();

    char GetOutputLetter(char input,vector<char> R1,vector<char> R2, vector<char> R3,vector<char> letters);
    char GetOutputLetterTwo(char input,vector<char> R1,vector<char> R2, vector<char> R3,vector<char> letters); 
    string EncryptMessage(string message,vector<char> R1, vector<char> R2, vector<char> R3);
    string DecryptMessage(string message, vector<char> R1, vector<char>R2, vector<char> R3);
    
    int CompositionOfFunctions(int x);
    int SecondCompositionOfFunctions(int x);
    
};
int IsElementInWheel(char element,vector<char> r);

//Functions To Apply For Wiring
int f(int x);
int g(int x);
int h(int x);
int k(int x);

//Inverse Functions To Apply For Wiring

int invf(int x);
int invg(int x);
int invh(int x);
int invk(int x);

int CompositionOfFunctions(int x);
int SecondCompositionOfFunctions(int x);

#endif /* Daisy_hpp */
