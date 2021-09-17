#pragma once

namespace h3ngine {
	class v3
	{
	public:

		//	x, y and z cords
		float x;
		float y;
		float z;

		//	Constructors
		v3()
		{
			this->zero();
		}
		v3(float x, float y, float z)
		{
			this->x = x;
			this->y = y;
			this->z = z;
		}

		//	Deconstructors
		~v3() {};

		//	Operators
		v3(const v3& vec)
		{
			this->x = vec.x;
			this->y = vec.y;
			this->z = vec.z;
		}
		v3& operator=(const v3& vec)
		{
			this->x = vec.x;
			this->y = vec.y;
			this->z = vec.z;

			return *this;
		}

		v3& operator+=(const v3& vec)
		{
			this->x = vec.x;
			this->y = vec.y;
			this->z = vec.z;

			return *this;
		}
		v3& operator-=(const v3& vec)
		{
			this->x -= vec.x;
			this->y -= vec.y;
			this->z -= vec.z;

			return *this;
		}
		v3& operator*=(const v3& vec)
		{
			this->x *= vec.x;
			this->y *= vec.y;
			this->z *= vec.z;

			return *this;
		}
		v3& operator*=(const float& s)
		{

			this->x *= s;
			this->y *= s;
			this->z *= s;

			return *this;
		}
		v3& operator/=(const v3& vec)
		{
			this->x /= vec.x;
			this->y /= vec.y;
			this->z /= vec.z;

			return *this;
		}

		v3& operator/=(const float& s)
		{
			this->x /= s;
			this->y /= s;
			this->z /= s;

			return *this;
		}

		v3 operator+(const v3& vec)
		{
			this->x  s;
			this->y /= s;
			this->z /= s;

			return *this;
		}
		v3 operator-(const v3& vec);
		v3 operator*(const v3& vec);
		v3 operator/(const v3& vec);

		void zero()
		{
			this->x = 0.f;
			this->y = 0.f;
			this->z = 0.f;
		}

	private:

	};
}