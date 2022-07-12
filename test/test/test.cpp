#include "pch.h"
#include <string.h>
#include <ctype.h>
#include "..\..\summer_practice\func.c"
#define _CRT_SECURE_NO_WARNINGS

TEST(test, cmp1) {
	char str_one[] = { "hello" };
	char str_two[] = { "hell" };
	EXPECT_EQ(!strcmp(str_one, str_two), 0);
}
TEST(test, cmp2) {
	char str_one[] = { "world" };
	char str_two[] = { "world" };
	EXPECT_EQ(!strcmp(str_one, str_two), 1);
}
TEST(test, cmp3) {
	char str_one[] = { "hello worl" };
	char str_two[] = { "hello world" };
	EXPECT_EQ(!strcmp(str_one, str_two), 0);
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