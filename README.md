# test_of_googletest
A test of googletest.

Google test is a good tool for the testing of software.

Testcases can be defined in a source code file.
Each testcase starts with *ASSERT_* or *EXPECT_*. After
the underscore there are some additional letters representing
[assertions](https://google.github.io/googletest/reference/assertions.html).
If a test fails, then *ASSERT* stops the testing (maybe after an failed
comparisions of vector lengths) while *EXPECT* continues with
the other test cases.

Visit the [Users's Guide](https://google.github.io/googletest/)
for more information.
