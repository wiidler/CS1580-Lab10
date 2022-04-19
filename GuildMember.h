#ifndef GUILDMEMBER_H
#define GUILDMEMBER_H

#include "constants.h"
#include <iostream>
using namespace std;

/***********************FUNCTION DOCUMENTATION***********************/

// Function: GuildMember();
// Description: A constructor that will define the name of the GuildMember as Nobody and stats to 0
// Pre: None
// Post: An initialized GuildMember

// Function: GuildMember(const string name);
// Description: A constructor that will define the name of the GuildMember as the const string MEMBER2 and stats to 0
// Pre: A constant string passed in
// Post: An initialized GuildMember

// Function: GuildMember(const string name, const int array[ARRAY]);
// Description: A constructor that will define the name of the GuildMember as the const string and stats to a const array
// Pre: A constant string and array passed in
// Post: An initialized GuildMember

// Function: GuildMember operator+(const GuildMember & member1) const;
// Description: An overloaded operator that enables two GuildMembers to add names and stats
// Pre: 2 GuildMembers must be initialized
// Post: A new fused GuildMember

// Function: int operator[](const int choice) const;
// Description: An overloaded operator that can get the specific stat value of a GuildMember based on index
// Pre: An initialized GuildMember and passed in index value
// Post: An integer corresponding to stat value

// Function: friend ostream & operator<<(ostream & os, const GuildMember & member);
// Description: An overloaded friend function that outputs the info housed in the GuildMember class
// Pre: An initialized GuildMember
// Post: A series of cout statments corresponding to that GuildMember

/***********************CLASS DEFINITION***********************/
class GuildMember{
    public:
        // Constructors
        GuildMember();
        GuildMember(const string name);
        GuildMember(const string name, const int array[ARRAY]);
        // Member Functions
        GuildMember operator+(const GuildMember & member1) const;
        int operator[](const int choice) const;
        // Friend Functions
        friend ostream & operator<<(ostream & os, const GuildMember & member);
    private:
        string m_name;
        int m_strength;
        int m_wisdom;
        int m_dex;
        int m_char;
        int m_intel;
};
#endif