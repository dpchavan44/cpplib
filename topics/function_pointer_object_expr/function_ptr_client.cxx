#include "function_ptr.hxx"
#include <iostream>

bool returnEqual(int a, int b){
    return a == b;
}

int main(){
    std::vector<int> values1 {2,5,8,9};
    std::vector<int> values2 {6,5,2,9};
    // get equal match
    findMatches(values1, values2, &returnEqual, &printMatcher);
    // not_fn gives compliment result, here not equal 
    findMatches(values1, values2, std::not_fn(&returnEqual), &printMatcher);
}