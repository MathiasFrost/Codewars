//www.codewars.com/kata/6397b0d461067e0030d1315e/train/cpp

#pragma once

#include <string>

class DecimalTimeConversion
{
private:
	double toIndustrial(int time);
	double toIndustrial(std::string time);
	std::string toNormal(double time);
};
