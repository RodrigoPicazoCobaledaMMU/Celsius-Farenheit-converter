#include <iostream> 

int main(){
	bool run = true;
	do{
		char option;
		std::cout<< "Do you wanna convert Celsius to Farenheit (type C) or Farenheit to Celsius (type F) ?\n";
		std::cin >> option;
		if (option == 'F'){
			int tempf,tempc;
			std::cout<< "Enter your temperature in Farenheit\n";
			std::cin>>tempf;
			tempc = (tempf - 32) / 1.8;
			std::cout<< tempf << " in Celsius is: " << tempc<<"\n";
		} else if (option == 'C'){
			int tempf,tempc;
			std::cout<< "Enter your temperature in Celsius\n";
			std::cin >> tempc;
			tempf = (tempc * 1.8) + 33;
			std::cout << tempc << " in farenheit is: " << tempf << "\n";
		} else {
			std::cout << "Unavailable response try either F or C\n";
		}
	} while (run == true);
} 