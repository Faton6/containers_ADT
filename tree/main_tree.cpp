#include <iostream>

#include "tree.h"
#include "new_integer.h"
#include "Adam_time.h"

#include <gtest/gtest.h>

TEST(TestGroupMane, TestName)
{
    ASSERT_TRUE(true);
}

int main()
{
    ::testing::InitGoogleTest();
    Tree qwa;
    ADT *test1 = new Integer("123456");
    ADT *test2 = new Integer("8998");
    ADT *test3 = new Integer("5555");
    ADT *test4 = new Integer(444);

    qwa.insert(4,test1);
    qwa.insert(1,test2);
    qwa.insert(12,test3);
    qwa.insert(6,test4);

    std::string qwaqwa= "123456";
    EXPECT_STREQ(qwaqwa.c_str(), static_cast<std::string>((*dynamic_cast<Integer*>(const_cast<ADT*>(qwa[4]))).get_num_str()).c_str());
    
    // тест insert
    Adam_t qwer(9,12,11);
    ADT *test5 = &qwer;
    qwa.insert(2,test5);
    EXPECT_EQ(6984, (*dynamic_cast<Adam_t*>(const_cast<ADT*>(qwa[2]))).get_Adam_year() );
    std::cout << "test: insert(1,6984) " << std::endl;
    qwa.print(qwa.get_tree(), std::cout);
    // тест erase
    std::cout <<"###################\n";
    qwa.erase(6);
    std::cout << "test: erase(1)\n";
    
    qwa.print(qwa.get_tree(), std::cout);
    
    std::cout <<"#########################################\n";

    // тест на empty
    std::cout <<"#########################################\n";
    std::cout << "test: empty: ";
    std::cout << std::boolalpha << qwa.empty() << '\n';
    EXPECT_FALSE(qwa.empty());
    return RUN_ALL_TESTS();
}