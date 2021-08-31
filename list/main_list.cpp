#include <iostream>

#include "list.h"
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
    List qwa;
    qwa.push_back(test1);
    qwa.push_back(test2);
    std::string qwaqwa= "32832183912938";
    EXPECT_STREQ(qwaqwa.c_str(), static_cast<std::string>((*dynamic_cast<Integer*>(const_cast<ADT*>(qwa[0]->data))).get_num_str()).c_str());
    
    EXPECT_FALSE(*dynamic_cast<Integer*>(const_cast<ADT*>(qwa[0]->data)) == *dynamic_cast<Integer*>(const_cast<ADT*>(qwa[1]->data)) ); 
    // тест на сравнение строк
    std::cout <<"#########################################\n";
    
    ADT *test3 = new Adam_t(5,20,15);
    qwa.push_back(test3);
    // тест на хранимые данные в qwa[2]
    std::cout << "test: push_back "<<  std::endl;
    for(size_t i = 0; i< qwa.size(); ++i)
        std::cout <<  (*qwa[i]->data) << std::endl;

    std::cout <<"#########################################\n";
        
    ADT *test4 = new Integer(12345);
    qwa.push_front(test4);
    // тест на хранимые данные в qwa[2]
    std::cout << "test: push_front "<< *(qwa[0]->data) << std::endl;
    for(size_t i = 0; i< qwa.size(); ++i)
        std::cout <<  (*qwa[i]->data) << std::endl;

    std::cout <<"#########################################\n";

    qwa.pop_back();
    // тест на хранимые данные в qwa[2]
    std::cout << "test: pop_back "<< std::endl;
    for(size_t i = 0; i< qwa.size(); ++i)
        std::cout <<  *(qwa[i]->data) << std::endl;

    std::cout <<"#########################################\n";
    qwa.pop_front();
    // тест pop_front
    std::cout << "test: pop_front "<< std::endl;
    for(size_t i = 0; i< qwa.size(); ++i)
        std::cout <<  (*qwa[i]->data) << std::endl;

    std::cout <<"#########################################\n";

    // тест insert
    Adam_t qwer(9,12,11);
    ADT *test5 = &qwer;
    qwa.insert(1,test5);
    EXPECT_EQ(6984, (*dynamic_cast<Adam_t*>(const_cast<ADT*>(qwa[1]->data))).get_Adam_year() );
    std::cout << "test: insert(1,6984) " << std::endl;
        
    for(size_t i = 0; i< qwa.size(); ++i)
        std::cout <<  (*qwa[i]->data) << std::endl;

    // тест size
    std::cout << "size = " << qwa.size() << std::endl;
     
    // тест erase
    std::cout <<"###################\n";
    qwa.erase(1);
    std::cout << "test: erase(1)\n";
    for(size_t i = 0; i< qwa.size(); ++i)
        std::cout << (*qwa[i]->data) << std::endl;

    std::cout << "new size = " << qwa.size() << std::endl;
    
    std::cout <<"#########################################\n";

    // тест emplace
    ADT *test6 = new Adam_t(5,14,10);
    qwa.emplace(0, test6);
    EXPECT_EQ(770, (*dynamic_cast<Adam_t*>(const_cast<ADT*>(qwa[0]->data))).get_Adam_year() );
    std::cout << "test: emaplce(0)\n";
    for(size_t i = 0; i< qwa.size(); ++i)
        std::cout << (*qwa[i]->data) << std::endl;

    // тест на empty и clear
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
