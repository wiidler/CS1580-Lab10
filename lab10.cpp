// Programmer: Will Weidler
// ID: wawq97
// Date: 4/19/22
// File: lab10.cpp
// Assignment: Lab 10
// Purpose: This program takes uses overloaded functions to output and add stats.

#include "constants.h"
#include "GuildMember.h"
#include <iostream>
using namespace std;

int main(){
    GuildMember member1;
    GuildMember member2(MEMBER2);
    GuildMember member3(MEMBER3, MEMBER3ARRAY);
    GuildMember member4(MEMBER4, MEMBER4ARRAY);
    cout << member1 << endl << member2 << endl << member3 << endl << member4 << endl;
    GuildMember member5 = member3 + member4;
    cout << member5 << endl;
    cout << member4[CHARISMA] << endl;
    return 0;
}