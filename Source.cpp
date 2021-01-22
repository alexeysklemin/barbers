#include <iostream>

int main() {

	int menCount, menPerDay, quantityBarbers, requiredBarberCount, requiredBarberCount1;
	std::cout << "Input quantity men in City\n";
	std::cin >> menCount;
	std::cout << "Input quantity barbers\n";
	std::cin >> quantityBarbers;
	int menPerbarber = 8;
	requiredBarberCount = menPerbarber * 30;
	requiredBarberCount = requiredBarberCount * quantityBarbers;
	std::cout << "Barbers can cut: " << requiredBarberCount << "\n";
	if (quantityBarbers == 0) {
		std::cout << "Barbers are not enough\n";
		quantityBarbers++;
		std::cout << "We need at lest " << quantityBarbers;
		return 0;
	}
	
	if (menCount % requiredBarberCount) {
		quantityBarbers++;
	}

	if (requiredBarberCount < menCount) {
		std::cout << "Barbers are not enogh, we need at least " << quantityBarbers << "\n";
	}
	else {
		quantityBarbers++;
		std::cout << "Barbers are enogh ";
	}
	return 0;
}