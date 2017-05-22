# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <algorithm>
# include "Circle.hpp"
# include <iostream>
#include <vector>
#include <iterator>
#include <numeric>


int main ()

{   
    std :: vector <Circle> circles {5.0f ,3.0f ,8.0f, 1.0f ,5.0f};
    std :: vector<double> v2(circles.size());
    auto it = std::copy_if(circles.begin(), circles.end(), v2.begin(), [](double i){return !(i<4.0f);} );
    v2.resize(std::distance(v2.begin(),it));  // shrink container to new size
    double x;
    for (double& x: v2) std::cout << ' ' << x;
    std::cout << '\n';
    return 0;
}