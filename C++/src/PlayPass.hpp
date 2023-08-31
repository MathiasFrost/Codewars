// https://www.codewars.com/kata/559536379512a64472000053/cpp

#pragma once

#include <string>

class PlayPass {
public:
    static std::string playPass(const std::string &s, int n);

private:
    static char ShiftChar(char input, int n);

    static char ComplementBy9(char input);

    static char DownCaseOdd(char input, size_t i);
};
