//
//#include <iostream>
//#include <memory>
//#include <string>
//
//class Person
//{
//public:
//    Person(const std::string& name) : myName(name)
//    {
//        std::cout << "... constructing " << name << std::endl;
//    }
//    
//    ~Person()
//    {
//        std::cout << "... destroying " << myName << std::endl;
//    }
//    
//    std::string getName() const { return myName; }
//    
//private:
//    std::string myName;
//};
//
//
//void doSomethingDangerous()
//{
//    throw "Oh, no!";
//}
//
//
//using HPerson = std::shared_ptr<Person>;
//
//inline HPerson make_HPerson(const std::string& name)
//{
//    return std::make_shared<Person>(name);
//}
//
//void managePeople()
//{
////    Person* chris = new Person("chris");
////    SmartPtr<Person> chris(new Person("chris"));
////    HPerson chris(new Person("chris"));
//    HPerson chris(make_HPerson("chris"));
//    
//    std::cout << "managing " << chris->getName() << std::endl;
//    
//    HPerson copyOfChris(chris);
//    //copyOfChris = chris;
//    std::cout << "managing copy of " << copyOfChris->getName() << std::endl;
//    
//    doSomethingDangerous();
//    
////    delete chris;
//}
//
//int main(int argc, const char * argv[])
//{
//    try
//    {
//        managePeople();
//    }
//    catch (...)
//    {
//        std::cout << "Something bad happened" << std::endl;
//    }
//    
//    return 0;
//}
