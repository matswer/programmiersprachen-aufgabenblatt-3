# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <algorithm>
# include "Circle.cpp"

TEST_CASE (" Circle Werte ", "[ geordnet ]")
{
    std :: vector <Circle> c1 (100);  //Liste mit 100 randomisierten Werten
    for ( auto & r : c1) {
      r = std :: rand ()% 101;
        };

std::sort(c1.begin(), c1.end());

REQUIRE (std :: is_sorted ( c1.begin (), c1.end ()));
}
int main (int argc , char * argv [])
{

return Catch :: Session (). run(argc , argv );
}