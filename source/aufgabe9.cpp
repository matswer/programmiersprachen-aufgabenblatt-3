# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <algorithm>

TEST_CASE (" filter alle vielfache von drei ", "[ erase ]")

{   
    std :: vector <int > v1 {1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9};
    std :: vector <int > v2 {9 ,8 ,7 ,6 ,5 ,4 ,3 ,2 ,1};
    std :: vector <int > v3 (9);

    std::transform (v1.begin(), v1.end(), v2.begin(), v3.begin(), std::plus<int>());
    

REQUIRE(std::all_of(v3.cbegin(), v3.cend(), [](int i){ return i  == 10; }));
}
int main (int argc , char * argv [])
{

return Catch::Session(). run(argc , argv );
}