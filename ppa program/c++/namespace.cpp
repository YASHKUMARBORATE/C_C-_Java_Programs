#include<iostream>

namespace marvellous
{
    class demo
    {
        // logic
    };
    
} // namespace maevellous
namespace ppa
{
    class hello
    {
        // lofic
    };
    
} // namespace ppa

using namespace marvellous;

int main()
{
    std::cout<<"inside main\n";
    demo dobj;
   ppa:: hello hobj;
    return 0;
}

