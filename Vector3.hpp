#ifndef VECTOR3_HPP
#define VECTOR3_HPP

namespace PhysStep {
    struct Vector3 {
        Vector3()
        {
            x = y = z = 0.f;
        }

        Vector3(double x, double y, double z)
        {
            this->x = x;
            this->y = y;
            this->z = z;
        }

        Vector3(double a[3])
        {
            x = a[0];
            y = a[1];
            z = a[2];
        }

        Vector3(const Vector3& ref)
        {
            this->x = ref.x;
            this->y = ref.y;
            this->z = ref.z;
        }

        Vector3 operator+(const Vector3& rhs)
        {
            Vector3 ret;
            ret.x = this->x + rhs.x;
            ret.y = this->y + rhs.y;
            ret.z = this->z + rhs.z;
            return ret;
        }

        Vector3 operator-(const Vector3& rhs)
        {
            Vector3 ret;
            ret.x = this->x - rhs.x;
            ret.y = this->y - rhs.y;
            ret.z = this->z - rhs.z;
            return ret;
        }

        bool operator==(const Vector3& rhs)
        {
            return this->x == rhs.x && this->y == rhs.y && this->z == rhs.z;
        }

        bool operator!=(const Vector3& rhs)
        {
            return !operator==(rhs);
        }

        Vector3 operator-()
        {
            return Vector3(-this->x, -this->y, -this->z);
        }

        double x, y, z; // double is used here for more precision

        static Vector3 zero() { return Vector3(); };
        static Vector3 one() { return Vector3(1.0, 1.0, 1.0); };
    };
}

#endif