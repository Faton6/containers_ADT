#include <iostream>

#include "queue.h"

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
    Queue qwa(3);
    qwa.push_front(test1);
    qwa.push_front(test2);
    std::string qwaqwa= "32832183912938";
    EXPECT_STREQ(qwaqwa.c_str(), static_cast<std::string>((*dynamic_cast<Integer*>(qwa[1])).get_num_str()).c_str());
    std::cout <<"#########################################\n";
        
    ADT *test4 = new Integer(12345);
    qwa.push_front(test4);
    // тест на хранимые данные в qwa
    std::string sad= "12345";
    EXPECT_STREQ(sad.c_str(), static_cast<std::string>((*dynamic_cast<Integer*>(qwa[0])).get_num_str()).c_str());
    std::cout << "test: push_front "<< *(qwa[0]) << std::endl;
    for(size_t i = 0; i< qwa.size(); ++i)
        std::cout <<  (*qwa[i]) << std::endl;

    std::cout <<"#########################################\n";

    
    // тест на хранимые данные в qwa
    EXPECT_STREQ(qwaqwa.c_str(), static_cast<std::string>((*dynamic_cast<Integer*>(qwa.pop_back())).get_num_str()).c_str());
    std::cout << "test: pop_back " << *(qwa.pop_back()) << std::endl;
    for(size_t i = 0; i< qwa.size(); ++i)
        std::cout <<  (*qwa[i]) << std::endl;

    std::cout <<"#########################################\n";


    Adam_t qwer(9,12,11);
    ADT *test5 = &qwer;
    qwa.insert(1,test5);
    // тест на хранимые данные в qwa
    EXPECT_EQ(6984, (*dynamic_cast<Adam_t*>(qwa[1])).get_Adam_year() );
    std::cout << "test: insert(1,6984) " << std::endl;
        
    for(size_t i = 0; i< qwa.size(); ++i)
        std::cout <<  (*qwa[i]) << std::endl;

    std::cout <<"#########################################\n";
        
    ADT *test8 = new Integer(5432);
    qwa.push_front(test8);
    // тест на хранимые данные в qwa[2]
    std::cout << "test: push_front "<< *(qwa[0]) << std::endl;
    for(size_t i = 0; i< qwa.size(); ++i)
        std::cout <<  (*qwa[i]) << std::endl;

    std::cout <<"#########################################\n";
    std::cout << "size = " << qwa.size() << std::endl;
    // тест на size и capacity

    std::cout <<"###################\n";
    qwa.erase(1);
    // тест на хранимые данные в qwa[1]    
    std::cout << "test: erase(1)\n";
    for(size_t i = 0; i< qwa.size(); ++i)
        std::cout <<  (*qwa[i]) << std::endl; 

    std::cout << "new size = " << qwa.size() << std::endl;
    // тест на size и capacity
    
    std::cout <<"#########################################\n";

    ADT *test6 = new Adam_t(5,14,10);
    qwa.emplace(0, test6);
    EXPECT_EQ(770, (*dynamic_cast<Adam_t*>(qwa[0])).get_Adam_year() ); // тест на хранимые данные в qwa[0]
    std::cout << "test: emaplce(0)\n";
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
