/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Eric Gass
 */

#include "std_lib_facilities.h"

class Name_value
{
    public:
        int value;
        string name;
};

int main()
    {
        vector<Name_value> nameValues;
        bool keepRunning = true;
        
        while(keepRunning)
        {
            Name_value nameValue;
            cout << "Enter a name and a number separated by a space (Enter NoName 0 to exit) \n";
            cin >> nameValue.name; 
            cin >> nameValue.value;
            
            for(int i = 0;  i < nameValues.size(); i++)
            {
                if(nameValue.name == nameValues.at(i).name)
                {
                    keepRunning = false;
                    cout << "Name is not unique and already inputted\n\n";
                    nameValues.clear();
                }
            }
            
            if(nameValue.name == "NoName" && nameValue.value == 0)
            {
                cout << "\n";
                keepRunning = false;
            }
            else
            {
                if(keepRunning == true)
                {
                    nameValues.push_back(nameValue);
                }
            }
        }
        
        while(nameValues.size() != 0)
        {
            cout << nameValues.back().name << " ";
            cout <<nameValues.back().value << "\n";
            
            nameValues.pop_back();
        }
        
        return 0;
    }
