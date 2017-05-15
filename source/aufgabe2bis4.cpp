#include <cstdlib> // std :: rand (), RAND_MAX 
#include <list> // std :: list <>
#include <vector> // std :: vector <>
#include <iostream> // std :: cout
#include <iterator> // std :: ostream_iterator <>
#include <algorithm> // std :: reverse , std :: generate
	
int main ()
{
  std :: list <unsigned int> l1 (100);
  for ( auto & r : l1) {
      r = std :: rand ()% 101;
        }
    std :: copy (std :: begin (l1), std :: end(l1),
              std :: ostream_iterator<int>( std :: cout , "\n"));

    std :: vector<unsigned int> v1(l1.size());
    std :: copy (std :: begin (l1), std :: end(l1), std :: begin (v1));
    return 0;
};