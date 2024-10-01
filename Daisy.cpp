//
//  Daisy.cpp
//  Flowers
//
//  Created by Owner on 9/30/24.
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <thread>
#include <iomanip>
#include <complex>
#include "Rose.hpp"
#include "Petunia.hpp"
#include "Marigold.hpp"
#include "Iris.hpp"
#include "Daisy.hpp"
using namespace std;

vector<char>Enigma::SetRotorOne(){
    Enigma e;
    vector<char> R1;
    int element;
    long length=e.letters.size();
    for(int i=0; i<length; i++){
        element=1+(i+2)%(length);
        R1.push_back(letters[element-1]);
    
    }
    
    return R1;
}
vector<char> Enigma:: SetRotorTwo(){
    Enigma e;
    vector<char> R2;
    int element;
    long length=e.letters.size();
    for(int i=0; i<length; i++){
        element=1+(i+3)%(length);
        R2.push_back(letters[element-1]);

    }
        
    return R2;
}
vector<char> Enigma:: SetRotorThree(){
    Enigma e;
    int element;
    vector<char> R3;
    long length=e.letters.size();
    for(int i=0; i<length; i++){
        element=1+(i+4)%(length);
        R3.push_back(letters[element-1]);
    }
    return R3;
}


char Enigma::GetOutputLetter(char input,vector<char> R1,vector<char> R2, vector<char> R3,vector<char> letters){
    char output;
    long length=letters.size();
    int position=IsElementInWheel(input, letters);
    int OutPutPosition= CompositionOfFunctions(position)% length;
    output=letters[OutPutPosition];
    
    return output;
}



int IsElementInWheel(char element,vector<char> r){
    
    for(int i=0; i<r.size(); i++){
        if(r.at(i)==element){
            return i;
        }
        
    }
    return 0;
}


void Enigma::EncryptMessage(string message,vector<char> R1, vector<char> R2, vector<char> R3){
   
    int i=0,j=0,k=0;
    string Output;
    for(char letter:message){
        Output+=GetOutputLetter(letter, R1, R2, R3, letters);
    }
    
    cout<<"Output: \t "<<Output<<endl;
}

//Functions To Apply For Wiring
int f(int x){
    return (9*x+1);
}
int g(int x){
    return (2*x+3);
}
int h(int x){
    return (5*x-5);
}
int k(int x){
    return (3*x-7);
}

//Inverse Functions To Apply For Wiring

int invf(int x){
    return (x-1)/9;
}
int invg(int x){
    return (x-3)/2;
}
int invh(int x){
    return (x+5)/5;
}
int invk(int x){
    return (x+7)/3;
}

int CompositionOfFunctions(int x){
    return invf(invg(invh(k(k(h(g(f(x))))))));
}
