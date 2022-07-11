#include "pch.h"
#include <string.h>
#include <ctype.h>
#include "..\..\summer_practice\func.c"

TEST(test, replace1) {
	char mystring[300] = { 0 }, copystring[300]; //string declaration
	replace1(mystring);
	EXPECT_STREQ(mystring, "");
}

TEST(test, replace2) {
	char mystring[300] = { 0 }, copystring[300]; //string declaration
	replace2(copystring);
	EXPECT_STREQ(copystring, "");
}