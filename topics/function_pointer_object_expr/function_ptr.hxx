#include<functional>
#include<iostream>
#include <vector>

void printMatcher(int position, int value1, int value2){
    std::cout << "Match found at position " << position <<  " (" << value1 << "," << value2 << ")" << std::endl;
}

//here either we can use function pointe using std::function or template function as shown in below
// using Matcher = std::function<bool(int,int)>
// using MatchHandler = std::function<void(int, int, int)>

template<typename Matcher, typename MatchHandler>
void findMatches(std::vector<int> values1, std::vector<int> values2, Matcher matcher, MatchHandler handler) {
    if(values1.size() != values2.size()){
        return;
    }
    for(size_t i{0}; i < values1.size(); i++){
        if(matcher(values1[i], values2[i])){
            handler(i, values1[i], values2[i]);
        }
    }
};