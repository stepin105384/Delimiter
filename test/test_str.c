#include "unity.h"
#include "str.h"
#include<string.h>

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_stringSplit(void)
{
     char str1[80] = "my_name_is_edcast_future_skills";
	 char *arr1[100];

  char  *cmparr[]={ "my", "name", "is", "edcast", "future", "skills"};
   str(str1,arr1);

 for(int i=0;i<5;i++)
  TEST_ASSERT_EQUAL(strcmp(cmparr[i],arr1[i]),0);

}

void test_underscoreBetweenSubstrings(void)
{
     char str1[80] = "my_name_is_edc_ast_fut_ure_skills";
	 char *arr1[100];

  char  *cmparr[]={ "my", "name", "is", "edc","ast", "fut","ure", "skills"};
  str(str1,arr1);
 for(int i=0;i<7;i++)
  TEST_ASSERT_EQUAL(strcmp(cmparr[i],arr1[i]),0);

}

int test_main(void)
{
    RUN_TEST(test_stringSplit);
  UNITY_BEGIN();

   RUN_TEST(test_stringSplit);
    RUN_TEST(test_underscoreBetweenSubstrings);
  return UNITY_END();
}
