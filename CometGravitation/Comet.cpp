#include <cmath>
#include "RungeKutta.h"

#pragma once

namespace CometGravitation
{
	class Comet : public RungeKutta {
		double m, y0, a0, V0;
		double sm;
		const double G = 6.6740E-11;

	public:
		Comet(double m, double y0, double a0, double V0, double sm) : RungeKutta(4) {
			this->m  = m*1000;
			this->y0 = y0*1000;
			this->a0 = a0;
			this->V0 = V0*1000;
			this->sm = sm*1E10;

			std::vector<double> Y0(4);
			Y0[0] = -100;
			Y0[1] = V0 * cos(a0*0.0174533);
			Y0[2] = y0;
			Y0[3] = V0 * sin(a0*0.0174533);

			SetInit(0, Y0);
		}

		std::vector<double> F(double time, std::vector<double> &coordinates)
		{
			// x - Y[0], dx/dt - Y[1]
			// dx^2/dt^2 - FY[0] , dx/dt - FY[1]
			// y - Y[2], dy/dt - Y[3]
			// dy^2/dt^2 - FY[2] , dy/dt - FY[3]
			if ((abs(Y[0]) > 1) || (abs(Y[2]) > 1)) {
				double z = pow(Y[0] * Y[0] + Y[2] * Y[2], -1.5);

				FY[0] = Y[1];
				FY[1] = -G * sm * Y[0] * z;
				FY[2] = Y[3];
				FY[3] = -G * sm * Y[2] * z;
			}
			else {
				FY[0] = 0;
				FY[1] = 0;
				FY[2] = 0;
				FY[3] = 0;

				Y[0] = 0;
				Y[1] = 0;
				Y[2] = 0;
				Y[3] = 0;
			}

			return FY;
		}

		void Step()
		{
			NextStep(0.01);
		}

		double get_x() { return -Y[0]; }
		double get_y() { return Y[2]; }
	};
}