//
// Created by Administrator on 2021/6/3.
//

#ifndef JNICALLBACK_HUMAN_H
#define JNICALLBACK_HUMAN_H
#include<string>
struct Man{
    std::string name;
    int age;
};
class Human {
public:
    int m_base = 10;
    void add_man(Man &m);
};


#endif //JNICALLBACK_HUMAN_H
