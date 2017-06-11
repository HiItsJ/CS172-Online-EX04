//
//  main.cpp
//  EX04
//
//  Created by Josiah on 6/9/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include <iostream>

using namespace std;

//EX04_01
void AnalyzeInput(){
    cout<<"Input a size for your array: ";
    int input;
    cin>>input;
    int numbers[input];
    cout<<"Now enter your "<<input<<" numbers."<<endl;
    int input2;
    for (int i = 0; i<input; i++){
        cin>>input2;
        numbers[i] = input2;
    }
    int sum = 0;
    double avg = 0;;
    for (int i = 0; i<input; i++){
        sum += numbers[i];
        avg = sum/input;
    }
    cout<<"The average of these numbers is "<<avg<<endl;
    int count = 0;
    for (int i = 0; i<input; i++){
        if (numbers[i]>avg){
            count++;
        }
    }
    cout<<"There are "<<count<<" numbers above the average of "<<avg<<endl;
}

//EX04_02
int* doubleCapacity(const int* list, int size){
    int newList[size*2];
    for (int i=0; i<size; i++){
        newList[i] = list[i];
    }
    return newList;
}
int main(){
    AnalyzeInput();
}
