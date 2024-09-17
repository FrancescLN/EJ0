#include <iostream>

using namespace std;

class BrazoRob{
	private:
		double x,y,z;
		bool sujetar;
	public:
		BrazoRob(double x, double y, double z, bool sujetar);
		double getX();
		double getY();
		double getZ();
		bool getSujetar();

		void coger();
		void soltar();
		void mover(double, double, double);
};
