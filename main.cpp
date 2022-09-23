/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: saulg
 *
 * Created on 22 de septiembre de 2022, 17:46
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int canti;
    int canti2;
    int canti3;
    int canti4;
    int canti5;
     int res['no'];
    
        cout <<"Cual es la tabla inicial? "; 
        cin>>canti;
        cout <<"Cual es la tabla final ";
        cin>>canti2; 
	cout<<"Rango inicio ";
        cin>>canti3;
	cout<<"Rango fin: ";
        cin>>canti4;
        
        for(int cont=canti; cont<= canti2; cont++)
        {
		cout<<endl;
                cout<<endl;
		cout <<"La tabla del numero "<<canti<<"es:"<<endl;
		
		for(int i=canti3; i<=canti4; i++)
                {
                    res['i'] = cont * i;
                    cout << cont << " * " << i << " = " << res['i'] << endl;
		}
	}
    return 0;
}

