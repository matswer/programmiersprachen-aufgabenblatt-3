# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <algorithm>

bool is_multiple_of_3(int i)
    {
    return (i % 3) == 0;  
    }

TEST_CASE (" filter alle vielfache von drei ", "[ erase ]")
{
    std :: vector <unsigned int> v1 (100);  //Liste mit 100 randomisierten Werten
    for ( auto & r : v1) {
      r = std :: rand ()% 101;
        };

    v1.erase( std::remove_if(v1.begin(), v1.end(), is_multiple_of_3), v1.end() );

REQUIRE (std :: none_of (v1. begin (), v1.end (), is_multiple_of_3 ));
}
int main (int argc , char * argv [])
{

return Catch :: Session (). run(argc , argv );
}