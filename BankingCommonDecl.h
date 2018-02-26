#pragma once

#ifndef __BANKING_COMMON_H__
#define __BANKING_COMMON_H__
#include <iostream>
#include <string>


using namespace std;
const int NAME_LEN = 20;

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

enum { NORMAL = 1, CREDIT = 2 };

enum { LEVEL_A = 7, LEVEL_B = 4, LEVEL_C = 2 };



#endif
