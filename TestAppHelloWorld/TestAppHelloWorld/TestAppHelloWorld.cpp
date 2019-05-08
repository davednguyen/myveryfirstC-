
#include <iostream>
using namespace std;


double CheckBodyWeight(int weightInLb) {
	double kgConvert = 0.45359237;
	double humanWeightInKg = 0;

	if (weightInLb != NULL && weightInLb > 0 && weightInLb < 300) {

		humanWeightInKg = kgConvert * weightInLb;
		return humanWeightInKg;
	}
	else {
		throw ("wrong weight");
	}

}

int main()
{
    std::cout << "Weight converter tool\n"; 
	int weight;
	cout << "enter your weight: ";
	cin >>  weight;
	cout << "your weight: " << weight;
	double WeightInKg = CheckBodyWeight(weight);
	cout << "your weight in kb: " << WeightInKg;
}



