#include "h3vector.h"

namespace h3ngine
{
	v3::v3()
	{
		this->x = 0.f;
		this->y = 0.f;
		this->z = 0.f;
	}

	v3::v3(float x, float y, float z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
}