#include <iostream>
#include <string>
using namespace std;

struct Player {
    string name; //player name
    int level;  //player lvl
    string* inventory;  //items
    int itemCount;  //number of items in inventory

    //constructor
    Player(string n = "", int lvl = 1) {
        name = n;
        level = lvl;
        inventory = nullptr;  //no items
        itemCount = 0;
    }

    //add item to inv
    void addItem(string item) {

        string* newInventory = new string[itemCount + 1];

        for (int i = 0; i < itemCount; i++) {
            newInventory[i] = inventory[i];
        }

        newInventory[itemCount] = item;

        delete[] inventory;

        inventory = newInventory;
        itemCount++;

    }

//print player info
void printPlayer() {
    cout << "something" << name << " something" << level << "something" ;
    cout << "something" ;
    if(itemCount == 0) {
        cout << "";
    } else {
        for (int i = 0; i < itemCount; i++){
            cout << inventory[i];
            if (i < itemCount - 1) cout << "  ";
        }
        cout << endl;
    }
}
    Player() {
        delete[] inventory;
    }

};

//add player to party
struct Party {
    Player* players;
    int playerCount;

    Party() {
        players = nullptr;
        playerCount = 0;
    }

    //add new player
    void addPlayer(Player newPlayer) {

        Player* newPlayers = new Player[playerCount + 1];
        for (int i = 0; i < playerCount; i++) {
            newPlayers[i] = players[i];
        }

        newPlayers[playerCount] = newPlayer;

        delete[] players;
        players = newPlayers;
        playerCount++;
    }

};



int main() {
    Party myParty;

    //adding players
    Player p1("Archer", 5);
    p1.addItem("Bow");
    p1.addItem("Health potion");

    Player p2("Mage", 10);
    p2.addItem("staff");
    p2.addItem("Grimore");
    p2.addItem("mana potion");

    Player p3("Warrior", 8);
    p3.addItem("sword");
    p3.addItem("stamina potion");

    Player p4("tank", 7);
    p4.addItem("shield");
    p4.addItem("strength potion");

    //add players to a party
    myParty.addPlayer(p1);
    myParty.addPlayer(p2);
    myParty.addPlayer(p3);
    myParty.addPlayer(p4);

    //output full party
    myParty.printParty();

    return 0;
}
