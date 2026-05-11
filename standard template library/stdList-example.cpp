#include <iostream>
#include <List>

using namespace std;

void displayRatings(const list<int>& playerRatings){
    for(list<int>::const_iterator it = playerRatings.begin(); it != playerRatings.end(); it++){
        cout << "Players rating: " << *it << '\n';
    }
}

void insertPlayerIntoOrderedList(int newPlayerRating, list<int>& playersByRating){
    for (list<int>::const_iterator it = playersByRating.begin(); it != playersByRating.end(); it++){
        if(*it > newPlayerRating){
            playersByRating.insert(it, newPlayerRating);
            return;
        } 
    }
    playersByRating.push_back(newPlayerRating);
}

int main(){
    list<int> allPlayers = {2,9,6,7,3,1,4,8,3,2,9};

    list<int> beginners; // rating 1-5
    list<int> pros; // rating 6-10

    for(list<int>::iterator it = allPlayers.begin(); it != allPlayers.end(); it++){
        int rating = *it;
        if(rating >= 1 && rating <= 5){
            beginners.push_back(rating);
        }
        else if(rating >= 6 && rating <= 10){
            pros.push_back(rating);
        }
    }

    cout << "Beginners: " << '\n';
    displayRatings(beginners);
    cout << "Pros: " << '\n';
    displayRatings(pros);

    return 0;
}