//
//  Controller.cpp
//  ArrayProject
//
//  Created by Morales, Brittney on 1/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller:: Controller()
{
    
}

void Controller:: start()
{
    intArray();
    doubleArray();
    stringArray();
    
}
int Controller:: intArray()
{
    int wholeNumArray [30];
    
    for(int i = 0; i < 30; i++)
    {
        wholeNumArray[i] = i;
    }
    for(int j = 0; j < 30; j++)
    {
        cout << wholeNumArray[j] << endl;
    }
    
    return 0;
}

double Controller:: doubleArray()
{
    int decimalArray[25];
    int num = 0 ;
    cout.precision(4);
    
    for(double decimal = 0.0; num < 25; decimal+=.5)
    {
        decimalArray[num] = decimal;
        
        num++;
    }
    for (int num = 0; num < 25; num++)
    {
        
        cout << fixed << decimalArray[num] << endl;
    }
    
    
    return 2;
}

string Controller:: stringArray()
{
    string strArray[5] = {"Hello","Bonjour","Hola","Nin Hao","Kon'nichiwa"};
    
    for(int i = 0; i < 5; i++)
    {
        cout<< "How to say Hello in a different Language around the world: "<< strArray[i] << endl;
    }
    return "3";
}
