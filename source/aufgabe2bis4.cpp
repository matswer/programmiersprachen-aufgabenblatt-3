#include <cstdlib> // std :: rand (), RAND_MAX 
#include <list> // std :: list <>
#include <vector> // std :: vector <>
#include <set> //set
#include <map> //map
#include <iostream> // std :: cout
#include <string> // std::set <>
#include <iterator> // std :: ostream_iterator <>
#include <algorithm> // std :: reverse , std :: generate
	
int main ()
{
  std :: list <unsigned int> l1 (100);  //Liste mit 100 randomisierten Werten
  for ( auto & r : l1) {
      r = std :: rand ()% 101;
        }
    std :: copy (std :: begin (l1), std :: end(l1),     //Gibt Werte aus
            std :: ostream_iterator<int>( std :: cout , "\n"));

    std :: vector<unsigned int> v1(l1.size());
    std :: copy (std :: begin (l1), std :: end(l1), std :: begin (v1));
    
// Aufgabe 3.2
    std :: set <unsigned int> set1(std :: begin (l1), std :: end(l1));
    std :: copy (std :: begin (set1), std :: end(set1),
            std :: ostream_iterator<int>( std :: cout , "\n"));

// Aufgabe 3.3  

    std :: cout << "Anzahl der verschiedenen Zahlen: " << set1.size() << "\n";

    std :: cout << "Die Zahlen die nicht enthalten sind lauten:\n";

   for (int i=0; i<100; ++i){

    if (set1.count(i)==0){
    
        std::cout << i << "\n";
        }
      
    else
    i=i+1;
    };

// Aufgabe 3.4
    
    std :: list <unsigned int> anz (100);

        for (auto & a : anz){
                for (int i=0; i<100; ++i){
                a = std::count(l1.begin(), l1.end(), i);
            }
        };
    std :: copy (std :: begin (anz), std :: end(anz),
            std :: ostream_iterator<int>( std :: cout , "\n"));

    return 0;
    };