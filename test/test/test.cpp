#include "pch.h"
#include <string.h>
#include <ctype.h>
#include "..\..\summer_practice\func.c"
#define _CRT_SECURE_NO_WARNINGS

TEST(test, cmp) {
	EXPECT_EQ(cmp, 1);
	EXPECT_EQ(cmp(0, 0), 0);
	EXPECT_EQ(cmp, -1);
}

TEST(test, replace1) {
	char mystring[300] = { 0 }, copystring[300]; //string declaration
	replace1(mystring);
	EXPECT_STREQ(mystring, "");
}

TEST(test, replace2) {
	char mystring[300] = { 0 }, copystring[300]; //string declaration
	memset(copystring, 0, 300);
	replace2(copystring);
	EXPECT_STREQ(copystring, "");
}