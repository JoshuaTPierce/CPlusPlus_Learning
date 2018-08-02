// Hero’s Inventory 3.0
// Demonstrates iterators
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	//declar iterators
	//myIterator may be used to manipulate vector members
	//const iter will only be used to print (const cannot update)
	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;

	cout << "Your items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
		cout << *iter << endl; } //dereference iterator at each index to print contents

	cout << "\nYou trade your sword for a battle axe.";
	myIterator = inventory.begin();
	*myIterator = "battle axe"; //updates inventory.begin with "battle axe" using pointer

	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
		cout << *iter << endl; } //deferences iteratorat each index to print contents

	cout << "\nThe item name ’" << *myIterator << "’ has ";
	cout << (*myIterator).size() << " letters in it.\n";

	cout << "\nThe item name ’" << *myIterator << "’ has ";
	cout << myIterator->size() << " letters in it.\n";

	cout << "\nYou recover a crossbow from a slain enemy.";
	inventory.insert(inventory.begin(), "crossbow");

	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
		cout << *iter << endl; }

	cout << "\nYour armor is destroyed in a fierce battle.";
	inventory.erase((inventory.begin() + 2));

	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
		cout << *iter << endl; }

	return 0;
}

