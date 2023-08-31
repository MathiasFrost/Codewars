// https://www.codewars.com/kata/559536379512a64472000053/cpp

#include "PlayPass.hpp"

char PlayPass::ShiftChar(char input, int n)
{
    if (input >= 'a' && input <= 'z') return (char) ('a' + (input - 'a' + n) % 26);
    else if (input >= 'A' && input <= 'Z')return (char) ('A' + (input - 'A' + n) % 26);
    else return input;
}

char PlayPass::ComplementBy9(char input)
{
    if (input >= '0' && input <= '9') return (char) ('9' - input + '0');
    return input;
}

char PlayPass::DownCaseOdd(char input, size_t i)
{
    if (i % 2 == 0) return input;
    if (input >= 'A' && input <= 'Z') return (char) (input + 32);
    return input;
}

std::string PlayPass::playPass(const std::string &s, int n)
{
    for (size_t i = 0; i < s.length(); ++i) {
        s[i] = ShiftChar(s[i], n);
        s[i] = DownCaseOdd(s[i], i);
        s[i] = ComplementBy9(s[i]);
    }

    return s;
}