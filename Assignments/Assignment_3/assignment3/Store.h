
#ifndef STORE_H
#define STORE_H



#include "Product.h"
#include "List.h"
#include "defs.h"

using namespace std;

class Store {

	public:
		//constructor
		Store();
		Store(const string& name);

		//destructor
		~Store();

		//other

		void findAvailableSLoc(StoreLocation** sloc);
		void findAvailableWHLoc(WHLocation** whloc);

		void printStoreStock();
		void printWareHouseStock();
		void printProducts();
		void printBackStock();

		//these are done for you
		void findProduct(const string&, Product**);
		void receiveProduct(const string&, int quantity);
		void fillOrder(const string&, int &quantity);
		void print();



	private:
		string name;
		WHLocation whLoc[WHLOCS];
		StoreLocation storeLoc[SLOCS];
		List* products;


};
#endif
