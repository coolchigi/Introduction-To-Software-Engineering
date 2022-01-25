
#include "Product.h"

Product::Product(const string& name, StoreLocation* sloc){
	this->name = name;
	this->storeLocation = sloc; //is this supposed to be an array?
	whLocations = new Queue(); //is this what it means to make a new Queue class?
}

Product::~Product(){
	delete whLocations;
}
/* We take as much as we can from the storeLocation.
   The input-output parameter quantity returns
   the amount left to fill in the order
*/

const string& Product::getName(){
	return this->name;
}

StoreLocation* Product::getStoreLocation(){
	return storeLocation;
}

void Product::setStoreLocation(StoreLocation* st){
	this->storeLocation = st;
}

void Product::addWHLocation(WHLocation* wh){
	whLocations->addLast(wh);
}
void Product::getFromStoreLocation(int& quantity){
	if (quantity > storeLocation->getQuantity()){
		quantity -= storeLocation->getQuantity();
		storeLocation->remove(storeLocation->getQuantity());
	}else{
		storeLocation->remove(quantity);
		quantity = 0;
	}

}

/* We try to fill the order with whatever is in
   the warehouse locations.
   The input-output parameter "quantity" returns
   the amount left to fill in the order
*/
void Product::getFromWHLocations(int& quantity){
	WHLocation* loc;
	while(quantity>0){
		//there are no more warehouse locations storing
		//this product - so break
		if (whLocations->isEmpty())break;

		//otherwise get the first whlocation
		whLocations->peekFirst(&loc);

		//if we empty the location, remove from the queue
		if (quantity > loc->getQuantity()){
			quantity -= loc->getQuantity();
			loc->remove(loc->getQuantity());
			whLocations->popFirst(&loc);
		}else{
			// we are not emptying the location,
			// but we have finished filling the order
			loc->remove(quantity);
			quantity = 0;
		}
	}
}

void Product::fillOrder(int& quantity){
	while (quantity > 0 && !storeLocation->isEmpty()){
		if (quantity < storeLocation->getQuantity()){
			storeLocation->remove(quantity);
			quantity = 0;
		}else{
			quantity -= storeLocation->getQuantity();
			storeLocation->remove(storeLocation->getQuantity());
			stockStoreLocation();
		}
	}

}

void Product::stockStoreLocation(){
	int q = storeLocation->getFreeSpace();
	int toAdd = q;
	getFromWHLocations(q);
	toAdd -= q;
	storeLocation->add(name, toAdd);
}

void Product::print(){
	cout << "Product:   "<<name<<endl;
}
