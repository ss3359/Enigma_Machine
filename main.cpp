//
//  main.cpp
//  Flowers
//
//  Created by Owner on 8/28/24.
//

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
#include "Daisy.hpp"
#include <fstream>
using namespace std;

int main(){
    
    Enigma e;
    vector<char> R1,R2,R3;
    long length=e.letters.size();
    for (int i=0; i<length; i++){
        cout<<e.letters[i]<<" ";
    }
    cout<<endl;
    //Set The Rotors
    R1=e.SetRotorOne();
    R2=e.SetRotorTwo();
    R3=e.SetRotorThree();
    
    
    string input;
    cout<<"Enter Your Message: "<<endl;
    cin>>input;
    
    string Enc=e.EncryptMessage(input, R1, R2, R3);
    cout<<"Encrypted Message: "<<Enc<<endl;

    string Dec=e.DecryptMessage(Enc, R1, R2, R3);
    cout<<"Decrypted Message: "<<Dec<<endl;
 
    
    
    
    
    cout<<endl;
    
    
  

    return 0;
}



/*
 Enigma Code (Save For Later):
 

 
 */




/*
 Excess Code:
 
 
 
 int x=10;
 int m=20;
 
 int y=g(f(x));
 
 cout<<"y=g(f("<<x<<")))"<<"="<<y<<endl;
 cout<<"x=f^(-1)g^(-1)(("<<y<<"))="<<invf(invg(y))<<endl;
 
 cout<<endl;
 cout<<"y=g(f("<<x<<"))%"<<m<<"="<<y%m<<endl;
 cout<<"x=f^(-1)g^(-1)(("<<y<<"))%" <<m<<"="<<invf(invg(y))%m<<endl;
 cout<<"x=f^(-1)g^(-1)(("<<y<<"%"<<m<<"))="<<invf(invg(y%m))<<endl;

 
 
 //Print Out The Following Rotors Just To Make Sure The Rotors Are Aligned Properly.
 cout<<"\n\n";
 //Rotor One
 for (int i=0;i<R1.size(); i++){
     cout<<R1.at(i)<<" ";
 }
 cout<<endl;
 //Rotor Two
 for (int i=0;i<R2.size(); i++){
     cout<<R2.at(i)<<" ";
 }
 cout<<endl;
 //Rotor Three

 for (int i=0;i<R3.size(); i++){
     cout<<R3.at(i)<<" ";
 }
 
 */




































/*
 
 //We are going to count the complex numbers that are probabily zeroes of the Riemann Zeta Function
    
//    cout<<"Zeroes Of The Riemann Zeta Function: "<<endl;
    
    
    Complex s(6,0);

    cout<<"Gamma of ";
    PrintComplex(s);
    cout<<": \t ";
    PrintComplex(Gamma(s));
    
 
 Riemann Zeta Function Code:
 //    Complex a(1,1);
 //    Complex b(2,2);
 //    Complex c(-1,-0.00001);
 //    Complex d(0.5, -0.5);
 //    Complex e(3,0);
     
    //Eta Function
 //    cout<<"Eta Function for ";
 //    PrintComplex(e);
 //    cout<<"is: \t";
 //    PrintComplex(Eta(10000, d));
 //
 //
     
 //    cout<<"Riemann Zeta function for: ";
 //    PrintComplex(e);
 //    cout<<"is: "<<endl;
 //    PrintComplex(CalculateRiemannZeta(e));
 //
     

 */









/*
 
 
 Excess Code:
 
 int exponent=2; //Squared First, Then we will cube it, or take the exponent to the kth power.

 for(int n=1; n<=10; n++){
     for(int m=n+1; m<=10; m++){
         int a=m*m-n*n,b=2*m*n,c=m*m+n*n;
         if(IsPythagoreanTriple(a,b,c,exponent)&&GCD(m,n)==1){
             cout<<"("<<a<<","<<b<<","<<c<<")"<<endl;
         }
         
         
     }
 }
 
 Point operator+(Point a, Point b){
     double x=a.GetX()+b.GetX();
     double y=a.GetY()+b.GetY();
     Point sum(x,y);
     
     return sum;
 }
 Point operator-(Point a, Point b){
     double x=a.GetX()-b.GetX();
     double y=a.GetY()-b.GetY();
     Point diff(x,y);
     
     return diff;
 }

 bool operator==(Point a, Point b){
     
     if(a.GetX()==b.GetX() && a.GetY()==b.GetY()){
         return true;
     }
     return false;
 }

 
 //
 //    Line l(5,3,15);
 //    l.PrintLine(l);
 //    Point p(3,5);
 //    Point q(2,-3);
 //
 //    if(l.IsOnLine(l, p))
 //        cout<<"("<<p.GetX()<<","<<p.GetY()<<")"<<" is on the line. "<<endl;
 //    else
 //        cout<<"("<<p.GetX()<<","<<p.GetY()<<")"<<" is not on the line. "<<endl;
 //
 //    cout<<"Distance from: ("<<p.GetX()<<","<<p.GetY()<<") to ("<<q.GetX()<<","<<q.GetY()<<")"<<" is "<<p.Distance(p, q)<<"\n\n";
 //
 //    Point u(0, -5);
 //    Point uPol=u.CarToPol(u);
 //
 //    cout<<"Cartesian: ("<<u.GetX()<<","<<u.GetY()<<")"<<endl;
 //    cout<<"Polar: ("<<uPol.GetX()<<","
 //    <<uPol.GetY()<<")"<<endl;
 //   
 
 
 
 
 Polynomial operator+(Polynomial p, Polynomial q){
     
     vector<int> TotalCoeff;
     int m=0,n=0;
     while(m<sizeof(p.coefficients) && n<sizeof(q.coefficients)){
             TotalCoeff.push_back(m+n);
         m++;
         n++;
     }
     Polynomial total(p.degree,TotalCoeff);
     
     return total;
     
 }

 Polynomial operator-(Polynomial p, Polynomial q){
     
     vector<int> TotalCoeff;
     int m=0,n=0;
     while(m<sizeof(p.coefficients) && n<sizeof(q.coefficients)){
         TotalCoeff.push_back(m-n);
         m++;
         n++;
     }
     Polynomial total(p.degree,TotalCoeff);
     
     
     return total;
     
 }


 vector<int> RemoveElementFromArray(int n, int element,vector<int> arr){
     
     
     int placeholder=0;
     int position=0;
    
     //Find the element in the array
     for(position=0; position<n; position++){
         if(arr[position]==element){
             placeholder=position;
         }
     }
     
     //Make New Array Whose size gets smaller.
     vector<int> NewArr(n-1);
     for(int m=0; m<=n; m++){
         if(m>=placeholder){
             NewArr.push_back(arr[m+1]);
         }
         else{
             NewArr.push_back(arr[m]);
         }
     }
     return NewArr;
 }

 
 int n=10;
 vector<int> primes;
 vector<int>NewPrimes;
 
 for(int i=0; i<n; i++){
     primes.push_back(i+1);
 }
 
 for(int p:primes){
     
     for(int q:primes){
         if(q%p!=0 && q>p){
             NewPrimes.push_back(q);
         }
     }
 }
 
 for (int newP:NewPrimes)
     cout<<newP<<"\t"<<endl;
 
 
 vector<int> CoeffP {1,0,1};
 vector<int> CeoffQ {2,1,2};
 
 Polynomial p(2, CoeffP);
 Polynomial q(2, CeoffQ);
 Polynomial total=p+q;
 
 for(int num=0; num<sizeof(p.coefficients); num++)
     cout<<total.coefficients.at(num)<<endl;
 
 
 
 
 
 bool isPrime(int n){
     for(int i=2; i<=n; i++){
         if(n%i==0 && i!=n){
             return false;
         }
     }
     return true;
 }

 bool isMersennePrime(int n){
     for(int i=2; i<n; i++){
         if(isPrime(i)){
             for(int j=2; j<i; j++){
                 if(i ==pow(2,j)-1)
                     return true;
             }
         }
         
     }
     return false;
 }
 int factorial(int n){
     if (n==0){
         return 1;
     }
     else{
         return n*factorial(n-1);
     }
             
 }

 double TaylorSeriesLog(int n, double x){
     double sum=0;
     if(n==1){
         return sum;
     }
     for(int i=1; i<=n; i++){
         sum+=(pow(-1, i+1)*pow(x-1,i))/i;
         cout<<sum<<endl;

     }
     return sum;
 }

 class Fraction{
     
 public:
     int GreatestCommonFactor(int a, int b);
     int LeastCommonMultiple(int a, int b);
 };


 int Fraction:: GreatestCommonFactor(int a, int b){
     
     int GCD=1;
     int factor=1;
     
     while(factor<a || factor<b){
         if(a%factor==0 && b%factor==0)
             GCD=factor;
         factor+=1;
     }
     return GCD;
     
 }

 int Fraction::LeastCommonMultiple(int a, int b){
     int GCF= GreatestCommonFactor(a, b);
     
     int LCM=abs(a*b)/GCF;
     
     return LCM;
 }


 void MersennePrimes(int number){
     int MP,PN;
     for(int i=2; i<number;i++){
         if(isPrime(i)){
             MP=pow(2,i)-1;
             PN=(MP*(MP+1))/2;
             cout<<"Prime: "<<i<<"\t Mersenne Prime: "<<i<<"\t Perfect Number: "<<PN<<endl;
         }
         
     }

     
 }

 struct Node{
     
     int data;
     Node* LeftNode;
     Node* RightNode;
     
     void AddNode(int d){
         Node* MainNode=new Node();
         MainNode->data=d;
         MainNode->LeftNode=nullptr;
         MainNode->RightNode=nullptr;
         
     }
 };

 int main(){
    
     Node* MainNode=new Node();
     MainNode->AddNode(10);
     MainNode->LeftNode->AddNode(20);
     MainNode->RightNode->AddNode(30);
     
     cout<<MainNode->LeftNode<<endl;
     
    
 }

 
 
 Fraction f;
 
 int m=24,n=35;

 cout<<"GCF of "<<m<<" and "<<n<<" is "<<f.GreatestCommonFactor(m, n)<<endl;
 cout<<"LCM of "<<m<<" and "<<n<<" is "<<f.LeastCommonMultiple(m, n)<<endl;

 return 0;
 */
//    double x=2.0;
//    int n = 40;
//
//    double sum=TaylorSeriesLog(n, x);
//
//    cout<<"Sum of n="<<n<<" terms of ln("<<x<<") is "<<sum<<endl;
//    cout<<"Actual Number: ln("<<x<<")= "<<log(x)<<endl;
