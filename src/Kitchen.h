#ifndef KITCHEN_H
#define KITCHEN_H
#include <vector> //Style problem?

class Kitchen {
public:
	void SetNumCooking();
	void SetNumCooks();
	void SetOvenStatus();
	void SetOvenTemp();
	void GetNumCooking();
	void GetNumCooks();
	void GetOvenStatus();
	void GetOvenTemp();
	void SafetyCheck();
	void SetListIngreds();
	void GetListIngreds();
	void SetListOrders();
	void GetListOrders();

private:
	int cooking = 0;
	int cooks = 0;
	int status = 0;
	int ovenTemp = 0;
	int numCooks = 0;
	int ovenHeat = 0;
	std::vector<std::string> listIngreds;
	std::vector<std::string> listOrders;
};

#endif
