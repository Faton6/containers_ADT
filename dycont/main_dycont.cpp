#include <iostream>
#include <string>

#include "dycont.h"
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
    Integer var("32832183912938");
    ADT *test1 = &var;
    Integer *test2 = new Integer(21212312);
    Dycont qwa(2);
    qwa[0] = test1;
    qwa[1] = test2;
    std::cout <<  *(qwa[0]) << std::endl;
    //test на результат сложения
    std::string qwaqwa= "32832183912938";
    EXPECT_STREQ(qwaqwa.c_str(), static_cast<std::string>((*dynamic_cast<Integer*>(qwa[0])).get_num_str()).c_str());
    EXPECT_FALSE(*dynamic_cast<Integer*>(qwa[0]) == *dynamic_cast<Integer*>(qwa[1]) ); 
    std::cout <<"#########################################\n";
    
    ADT *test3 = new Adam_t(5,20,15);
    qwa.push_back(test3);
    // тест на хранимые данные в qwa[2]
    EXPECT_EQ(2960, (*dynamic_cast<Adam_t*>(qwa[2])).get_Adam_year() );
    std::cout << "test: push_back "<< *dynamic_cast<Adam_t*>(qwa[2]) << std::endl;
    for(size_t i = 0; i< qwa.size(); ++i)
        std::cout <<  (*qwa[i]) << std::endl;

    std::cout <<"#########################################\n";    

    qwa.pop_back();
    // тест на хранимые данные в qwa[2]
    std::cout << "test: pop_back "<< std::endl;
    for(size_t i = 0; i< qwa.size(); ++i)
        std::cout <<  (*qwa[i]) << std::endl;

    std::cout <<"#########################################\n";

    Adam_t qwer(9,12,11);
    ADT *test5 = &qwer;
    qwa.insert(1,test5);
    // тест на хранимые данные в qwa[1]

    EXPECT_EQ(6984, (*dynamic_cast<Adam_t*>(qwa[1])).get_Adam_year() );
    std::cout << "test: insert(1,6984) " << std::endl;
        
    for(size_t i = 0; i< qwa.size(); ++i)
        std::cout <<  (*qwa[i]) << std::endl;

    std::cout << "size = " << qwa.size() << "\t capacity = " << qwa.capacity() << std::endl;
    // тест на size и capacity

    std::cout <<"###################\n";
    qwa.erase(1);
    // тест на хранимые данные в qwa[1]    

    EXPECT_STREQ(qwaqwa.c_str(), static_cast<std::string>((*dynamic_cast<Integer*>(qwa[0])).get_num_str()).c_str());
    std::cout << "test: erase(1)\n";
    for(size_t i = 0; i< qwa.size(); ++i)
        std::cout <<  (*qwa[i]) << std::endl; 

    std::cout << "new size = " << qwa.size() << "\t new capacity = " << qwa.capacity() << std::endl;
    // тест на size и capacity
    
    std::cout <<"#########################################\n";

    ADT *test6 = new Adam_t(5,14,10);
    qwa.emplace(0, test6);
    EXPECT_EQ(770, (*dynamic_cast<Adam_t*>(qwa[0])).get_Adam_year() );

    std::cout << "test: emaplce(0)\n";
    // тест на хранимые данные в qwa[0]
    for(size_t i = 0; i< qwa.size(); ++i)
        std::cout <<  (*qwa[i]) << std::endl; 

    
    std::cout <<"#########################################\n";
    std::cout << "test: empty: ";
    std::cout << std::boolalpha << qwa.empty() << '\n';
    EXPECT_FALSE(qwa.empty());
    qwa.clear();
    EXPECT_TRUE(qwa.empty());
    std::cout << "test: clear\n";
    std::cout << "test: empty: ";
    std::cout << std::boolalpha << qwa.empty() << '\n';

    
    return RUN_ALL_TESTS();
}

