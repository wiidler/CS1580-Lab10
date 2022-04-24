#include "GuildMember.h"
#include "constants.h"
#include <iostream>

using namespace std;

/***********************FUNCTION DEFINITIONS***********************/
// Constructors
GuildMember::GuildMember(){
    m_name = NOBODY;
    m_strength = 0;
    m_wisdom = 0;
    m_dex = 0;
    m_char = 0;
    m_intel = 0;
}
GuildMember::GuildMember(const string name){
    m_name = name;
    m_strength = 0;
    m_wisdom = 0;
    m_dex = 0;
    m_char = 0;
    m_intel = 0;
}
GuildMember::GuildMember(const string name, const int array[ARRAY]){
    m_name = name;
    m_strength = array[0];
    m_wisdom = array[1];
    m_dex = array[2];
    m_char = array[3];
    m_intel = array[4];
}
// Member Functions
GuildMember GuildMember::operator+(const GuildMember & member) const{
    string newName = (m_name + member.m_name);
    int newStrength = (m_strength + member.m_strength);
    int newWisdom = (m_wisdom + member.m_wisdom);
    int newDex = (m_dex + member.m_dex);
    int newChar = (m_char + member.m_char);
    int newIntel = (m_intel + member.m_intel);
    GuildMember result;
    result.m_name = newName;
    result.m_strength = newStrength;
    result.m_wisdom = newWisdom;
    result.m_dex = newDex;
    result.m_char = newChar;
    result.m_intel = newIntel;
    return result;
}
int GuildMember::operator[](const int choice) const{
    switch(choice){
        case 0:
            return m_strength;
            break;
        case 1:
            return m_wisdom;
            break;
        case 2:
            return m_dex;
            break;
        case 3:
            return m_char;
            break;
        case 4:
            return m_intel;
            break;
        default:
            return 0;
            break;
    }
}
// Friend Functions
ostream & operator<<(ostream & os, const GuildMember & member){
    os << "Name: " << member.m_name << endl;
    os << "Strength: " << member.m_strength << endl;
    os << "Wisdom: " << member.m_wisdom << endl;
    os << "Dexterity: " << member.m_dex << endl;
    os << "Charisma: " << member.m_char << endl;
    os << "Intelligence: " << member.m_intel << endl;
    return os;
}
