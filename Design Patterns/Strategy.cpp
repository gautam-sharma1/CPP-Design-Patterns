//
//  Strategy.cpp
//  Design Patterns
//
//  Created by Gautam Sharma on 10/20/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class FlyInterface{
public:
    FlyInterface(){};
    virtual void fly() = 0;
};

class QuackInterface{
public:
    QuackInterface(){};
    virtual void quack() = 0;
    
};

class Duck{
public:
    Duck() {};
    FlyInterface* flyInterface;
    QuackInterface* quackInterface;
    void seeMyFly(){
        flyInterface->fly();
    }
    
    void hearMeQuack(){
        quackInterface->quack();
    }
    
    virtual void display() = 0;
};


class FlyHigh : public FlyInterface{
public:
    FlyHigh() = default;
    virtual void fly() override{
        cout << "I Fly High!" << endl;
    }
};

class QuackLoud : public QuackInterface{
public:
    QuackLoud() = default;
    virtual void quack() override{
        cout << "I Quack Loud!" << endl;
    }
    
};

class BrownDuck : public Duck{
public:
    BrownDuck(FlyInterface *fi, QuackInterface *qi){
        flyInterface = fi;
        quackInterface = qi;
    }
    virtual void display() override{
        cout << "Hello! I am a Brown Duck!" << endl;
    }
    
};

int main(){
    Duck *d = new BrownDuck(new FlyHigh, new QuackLoud);
    d->display();
    d->seeMyFly();
    d->hearMeQuack();
    
}
