#ifndef TEST_H
#define TEST_H
#ifndef __FUNCTION__
#define __FUNCTION__ "unknown"
#endif // __FUNCTION__
#include <stdio.h>

#define TEST_CASE_PREFIX() test_
#define TEST_CASE(name) void TEST_CASE_PREFIX()##name##()
#define TEST_CASE_RUN(name) TEST_CASE_PREFIX()##name##()
// selects main implementation file
#define TEST_CONFIG_MAIN int main(int argc, char** argv) { for(int i = 0; i < argc; ++i) TEST_LOG("%s \n", argv[i]); TEST_RUN_IT(); return 0; }
// where to log messages
#define TEST_OUT_TARGET stdout
#define TEST_LOG(format, ...) fprintf(TEST_OUT_TARGET, format, __VA_ARGS__)
// Tests the main runs
#define TEST_RUN_IT() test_runs()


// current tests to run
void test_runs();

#endif // TEST_H