# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <algorithm>
# include <Circle.hpp>


TEST_CASE (" filter alle vielfache von drei ", "[ erase ]")

{   
    std :: vector<Circle::double > container(10);
    for ( auto & r : container) {
      r = std :: rand ()% 101;
        };
    std::sort container(container.begin (), container.end ());
    

REQUIRE (std :: is_sorted ( container.begin (), container.end ()));
}
int main (int argc , char * argv [])
{

return Catch :: Session (). run(argc , argv );
}