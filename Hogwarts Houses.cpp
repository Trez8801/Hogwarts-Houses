#include <iostream>
using namespace std;

int main(){
    int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0, largest = 0;
    int ans1, ans2, ans3, ans4;
    string  house;

    cout << "Hello Muggle, welcome to The Sorting Hat Quiz!\n\n";

    cout << "Q1) When I'm dead, I want people to remeber me as:\n\n";
    cout << "1) The Good\n" << "2) The Great\n" << "3) The Wise\n" << "4) The Bold\n" << "Your choice: ";
    cin >> ans1;

    if(ans1 == 1){
        hufflepuff++;
    }else if(ans1 == 2){
        slytherin++;
    }else if(ans1 == 3){
        ravenclaw++;
    }else if(ans1 == 4){
        gryffindor++;
    }else{
        cout << "Invalid Input";
    }
    
    cout << "\nQ2) Dawn or Dusk?\n\n";
    cout << "1) Dawn\n" << "2) Dusk\n" << "Your choice: ";
    cin >> ans2;

    if(ans2 == 1){
        gryffindor++;
        ravenclaw++;
    }else if(ans2 == 2){
        hufflepuff++;
        slytherin++;
    }else{
        cout << "Invalid Input";
    }

    cout << "\nQ3) Which kind of instrunment most pleases your ear?\n\n";
    cout << "1) The violin\n" << "2) The trumpet\n" << "3) The piano\n" << "4) The drum\n" << "Your choice: ";
    cin >> ans3;

    if(ans3 == 1){
        slytherin++;
    }else if(ans3 == 2){
        hufflepuff++;
    }else if(ans3 == 3){
        ravenclaw++;
    }else if(ans3 == 4){
        gryffindor++;
    }else{
        cout << "Invalid Input";
    }

    cout << "\nQ4) Which road tempts you the most?\n\n";
    cout << "1) The wide, sunny grassy lane\n" << "2) The narrow, dark, lantern-lit alley\n"  << "3) The twisting, leaf-strewn path through woods\n" << 
            "4) The cobbled street lined (acient buildings\n" << "Your choice: ";
    cin >> ans4;

    if(ans4 == 1){
        hufflepuff++;
    }else if(ans4 == 2){
        slytherin++;
    }else if(ans4 == 3){
        gryffindor++;
    }else if(ans4 == 4){
        ravenclaw++;
    }else{
        cout << "Invalid Input";
    }

    if(hufflepuff > largest){
        largest = hufflepuff;
        house = "\nYou would be house Hufflepuff, Muggle.";
    }

    if(slytherin > largest){
        largest = slytherin;
        house = "\nYou would be house Slytherin, Muggle.";
    }

    if(gryffindor > largest){
        largest = gryffindor;
        house = "\nYou would be house Gryffindoor, Muggle.";
    }

    if(ravenclaw > largest){
        largest = ravenclaw;
        house = "\nYou would be house Ravenclaw, Muggle.";
    }

    cout << house;
    return 0;
}