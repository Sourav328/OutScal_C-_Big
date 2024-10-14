#include <iostream>
using namespace std;

void Starting()
{
    cout << "Welcome, brave adventurer!" << endl;
    cout << "You find yourself standing in front of a massive, ancient castle."<< endl; 
    cout << "The walls are cracked with age," << endl;
    cout << "and the doors creak as they slowly open in front of you." << endl;
    cout << "Inside, there are many rooms, each more mysterious than the last." << endl;
    cout << "Some may hold treasures beyond imagination," << endl;
    cout << "while others may hide dangers lurking in the shadows." << endl;
}

void MissionOBJ()
{
    cout << "                  " << endl;
    cout << "Mission Objective:" << endl;
    cout << "Your goal is simple, yet perilous—choose a room!" << endl;
    cout << "Once inside, who knows what you may find ? " << endl;
    cout << "Will it be riches, knowledge, or something… more sinister ?" << endl;
    cout << "It’s all up to the room you pick." << endl;
    cout << "                  " << endl;
   
}
void GameMid()
{
    
    cout << "The fate of your adventure lies in the room you choose." << endl;
    cout << "Will you find riches or danger?" << endl;
    cout << "Only time will tell... Choose wisely, adventurer, for once you step inside," << endl;
    cout << "there’s no turning back." << endl;
    cout << "                  " << endl;
    cout << "Let's Go...." << endl;


    cout << "Select Room:- ";
}

int main()
{
    Starting();
    MissionOBJ();
    GameMid();

    int Choose;
    cin >> Choose;

    switch (Choose)
    {
    case 1:
        Choose = 1;
        cout <<"A room full of gold coins! You can retire now, you lucky soul!"<< endl;
        break;
    case 2:
        Choose = 2;
        cout << "A library of ancient books! You gain immense knowledge,\nbut beware… some knowledge comes with a price." << endl;
        break;
    case 3:
        Choose = 2;
        cout << "A sleeping dragon! You barely escape with your life. Perhaps next time, choose more wisely..." << endl;
        break;
    case 4:
        Choose = 2;
        cout << "A garden of glowing flowers. The air smells sweet, and your wounds are healed.\nBut be warned, the beauty of the garden hides its secrets time moves differently here, and you may not leave unchanged." << endl;
        break;
    case 5:
        Choose = 2;
        cout << "A grand hall with mirrors on every wall. The reflections whisper your deepest fears.\nTo escape, you must confront the truth hidden within the glass." << endl;
        break;
    case 6:
        Choose = 2;
        cout << "A bubbling fountain in the middle of the room full of Water in it. Drink the Water For Eternal youth" << endl;
        break;
    default:
        cout << "A secret passage to the dungeon! Beware, danger lies ahead in the dark corridors."
            << endl;
        break;
    }
    
}

