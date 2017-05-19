# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
#include <algorithm>
#include <iterator>
#include <vector>

int number, i;
bool prime1;
bool is_prime(int); 

template<typename T>
    int filter (int v)
    {
        return v.erase(std::remove_if(v.begin(), v.end(), is_prime()), v.end());
    }    

bool is_prime(int number)
    {
    int i = 0;
    for(int i=2; i < number; i++)
    {
       if(number%i == 0)
          return false;
    } 
    return true;
    }

TEST_CASE (" filter alle vielfache von drei ", "[ erase ]")
{ 

    std :: vector <int> v{1 ,2 ,3 ,4 ,5 ,6, 21, 13, 7, 8};
    std :: vector <int> prime1 = filter (v, is_prime );
    

REQUIRE (std :: all_of (prime1.begin (), prime1.end (), is_prime ));
}
int main (int argc , char * argv [])
{

return Catch :: Session (). run(argc , argv );
}