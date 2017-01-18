#include "Alogrithm.h"

int main()
{
    auto t0 = chrono::high_resolution_clock::now();

    //Test_Solution_242_Valid_Anagram();
    Test_Solution_349_Intersection_of_Two_Arrays();
    
    
    auto t = chrono::high_resolution_clock::now();
    cout << chrono::duration_cast<std::chrono::milliseconds>(t - t0).count() << " ms\n";
    return 0;
}

