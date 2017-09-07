// no package

#include <iostream> // provides namespace 'std'
class Hello
{
  public:
    // method to say hello call sayHello()
    static void sayHello()
    {
        std::cout << "Hello, World\n";
    }
};

int main()
{
    Hello::sayHello();
    return 0;
}