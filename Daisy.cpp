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
    int OutputPosition=CompositionOfFunctions(position)%length;
    output=letters[OutputPosition];
    
    return output;
}

char Enigma::GetOutputLetterTwo(char input,vector<char> R1,vector<char> R2, vector<char> R3,vector<char>letters){
    char output;
    long length=letters.size();
    int position=IsElementInWheel(input, letters);
    int OutputPosition=CompositionOfFunctions(position%length);
    output=letters[OutputPosition];
    
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
    
    
    string Enigma::EncryptMessage(string message,vector<char> R1, vector<char> R2, vector<char> R3){
        
        string Output;
        for(char letter:message){
            
            Output+=GetOutputLetter(letter, R1, R2, R3, letters);
            
        }
        
        return Output;
    }
    
    string Enigma::DecryptMessage(string message, vector<char> R1, vector<char> R2, vector<char> R3){
        
        string Output;
        for(char letter:message){
            Output+=GetOutputLetterTwo(letter, R1, R2, R3, letters);
        }
        return Output; 
      }
        

    //Functions To Apply For Wiring
    int f(int x){
        return x+3;
    }
    int g(int x){
        return x+6;
    }
    int h(int x){
        return x+9;
    }
    int k(int x){
        return x+12;
    }
    
    //Inverse Functions To Apply For Wiring
    
    int invf(int x){
        return x-3;
    }
    int invg(int x){
        return x-6;
    }
    int invh(int x){
        return x-9;
    }
    int invk(int x){
        return x-12;
    }
    
    int Enigma::CompositionOfFunctions(int x){
        return invf(invg(invh(k(k(h(g(f(x))))))));
    }
    int Enigma::SecondCompositionOfFunctions(int x){
        /*int result=(invf(invg(invh(invk(invk(h(g(f(x)))))))))%length*/;
        
        return invf(invg(invh(invk(invk(h(g(f(x))))))));
    }
    
