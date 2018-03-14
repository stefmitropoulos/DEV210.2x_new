//
//  Person.cpp
//  PointersLab
//
//  Created by Stefanos Mitropoulos on 13/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "Person.hpp"

Person::Person(){}    //Default constructor

Person::Person (std::string name, std::string lastName){    //Two var constructor
        _name=name;
        _lastName=lastName;
    }

Person::Person (std::string name, std::string lastName,short int age){    //Three var constructor
        Person::Person (name,lastName);
        _age=age;
    }

        //Destructor
Person::~Person(){
        cout<<"Object is being deleted"<<endl;
    }

    //Getters
    const std::string Person::GetLastName(){
        return _lastName;
    }
    const std::string Person::GetName(){
        return _name;
    }
    const float Person::getWeight(){
        return _weight;
    }const float Person::getHeight(){
        return _height;
    }
    //===========

    void Person::SayHello(){
        std::cout<<"Hello!"<<std::endl;
    }
