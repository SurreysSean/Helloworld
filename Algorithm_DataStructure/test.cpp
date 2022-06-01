#include <iostream>
#include <cstdio>
#include "Implements/helloVector.cpp"
#include "Implements/helloList.cpp"
#include "helloQueue.h"
#include "helloStack.h"
#include <string>

using namespace HELLOWORLD;
using std::string;

int main()
{
    vector<string> vec = {"123", "do","string is not a default type!!"};
    queue<string> q1(vec);
    std::printf("front: %s\n", q1.front().c_str());
    q1.pop();
    std::printf("front: %s\n", q1.front().c_str());
    q1.pop();
    std::printf("front: %s\n", q1.front().c_str());
    q1.clear();
    q1.push("superise");
    std::printf("front: %s\n", q1.front().c_str());
    
    return 0;
}