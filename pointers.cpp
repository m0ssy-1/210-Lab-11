#include <iostream>
#include <string>
usding namespace std;

struvt Player {
    string name; //player name
    int level;  //player lvl
    string inventory;  //items
    int itemCount;  //number of items in inventory

    //constructor
    Player(string n = "", int lvl = 1) {
        name = n;
        level = lvl;
        inventory = nullptr;
        itemCount = 0;
    }

    //add item to inv
    void addItem(string item){
        string newInventory = new string(itemCount + 1);

        for (int i = 0; i < itemCount; i++) {
            newInv[i] = inventory[i];
        }
        newInventory(itemCount) = item;

        inventory = new newInventory;
        itemCount++;

    }

//print player info
void printPlayer() {
    cout << "something" << name << " something" << level << "something" ;
    cout << "something" ;
    if(itemCount == 0) {
        cout << ""
    }
}


}


int main() {
    Party myParty;

    //adding players
    Player p1("ARcher")
    p1.addItem("Bow")
    p1.addItem("Health potion")

    Plater p2("Mage")
    p2.addItem("staff")
    p2.addItem("Grimore")
    p2.addItem("mana potion")

    PLayer p3("Warrior")
    p3.addItem("sword")
    p3.addIrem("stamina potion")

    Plater p4("tank")
    p4.addItem("shield")
    p4.addItem("strength potion")

    //add players to a party
    myParty.addPlayer(p1);
    myParty.addPlayer(p2);
    myParty.addPlayer(p3)
    myParty.addPlayer(p4);

    //output full party
    myParty.printParty();

    return 0;
}
