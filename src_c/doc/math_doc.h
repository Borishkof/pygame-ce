/* Auto generated file: with make_docs.py .  Docs go in docs/reST/ref/ . */
#define DOC_MATH "pygame module for vector classes"
#define DOC_MATH_CLAMP "clamp(value, min, max, /) -> float\nreturns value clamped to min and max."
#define DOC_MATH_LERP "lerp(a, b, value, do_clamp=True, /) -> float\nreturns value linearly interpolated between a and b"
#define DOC_MATH_INVLERP "invlerp(a, b, value, /) -> float\nreturns value inverse interpolated between a and b"
#define DOC_MATH_SMOOTHSTEP "smoothstep(a, b, value, /) -> float\nreturns value smoothly interpolated between a and b."
#define DOC_MATH_REMAP "remap(i_min, i_max, o_min, o_max, value, /) -> float\nremaps value from given input range to given output range"
#define DOC_MATH_VECTOR2 "Vector2() -> Vector2(0, 0)\nVector2(int) -> Vector2\nVector2(float) -> Vector2\nVector2(Vector2) -> Vector2\nVector2(x, y) -> Vector2\nVector2((x, y)) -> Vector2\na 2-Dimensional Vector"
#define DOC_MATH_VECTOR2_DOT "dot(Vector2, /) -> float\ncalculates the dot- or scalar-product with the other vector"
#define DOC_MATH_VECTOR2_CROSS "cross(Vector2, /) -> float\ncalculates the cross- or vector-product"
#define DOC_MATH_VECTOR2_MAGNITUDE "magnitude() -> float\nreturns the Euclidean magnitude of the vector."
#define DOC_MATH_VECTOR2_MAGNITUDESQUARED "magnitude_squared() -> float\nreturns the squared magnitude of the vector."
#define DOC_MATH_VECTOR2_LENGTH "length() -> float\nreturns the Euclidean length of the vector."
#define DOC_MATH_VECTOR2_LENGTHSQUARED "length_squared() -> float\nreturns the squared Euclidean length of the vector."
#define DOC_MATH_VECTOR2_NORMALIZE "normalize() -> Vector2\nreturns a vector with the same direction but length 1."
#define DOC_MATH_VECTOR2_NORMALIZEIP "normalize_ip() -> None\nnormalizes the vector in place so that its length is 1."
#define DOC_MATH_VECTOR2_ISNORMALIZED "is_normalized() -> Bool\ntests if the vector is normalized i.e. has length == 1."
#define DOC_MATH_VECTOR2_SCALETOLENGTH "scale_to_length(float, /) -> None\nscales the vector to a given length."
#define DOC_MATH_VECTOR2_REFLECT "reflect(Vector2, /) -> Vector2\nreturns a vector reflected of a given normal."
#define DOC_MATH_VECTOR2_REFLECTIP "reflect_ip(Vector2, /) -> None\nreflect the vector of a given normal in place."
#define DOC_MATH_VECTOR2_DISTANCETO "distance_to(Vector2, /) -> float\ncalculates the Euclidean distance to a given vector."
#define DOC_MATH_VECTOR2_DISTANCESQUAREDTO "distance_squared_to(Vector2, /) -> float\ncalculates the squared Euclidean distance to a given vector."
#define DOC_MATH_VECTOR2_MOVETOWARDS "move_towards(Vector2, float, /) -> Vector2\nreturns a vector moved toward the target by a given distance."
#define DOC_MATH_VECTOR2_MOVETOWARDSIP "move_towards_ip(Vector2, float, /) -> None\nmoves the vector toward its target at a given distance."
#define DOC_MATH_VECTOR2_LERP "lerp(Vector2, float, /) -> Vector2\nreturns a linear interpolation to the given vector."
#define DOC_MATH_VECTOR2_SLERP "slerp(Vector2, float, /) -> Vector2\nreturns a spherical interpolation to the given vector."
#define DOC_MATH_VECTOR2_SMOOTHSTEP "smoothstep(Vector2, float, /) -> Vector2\nreturns a smooth interpolation to the given vector."
#define DOC_MATH_VECTOR2_ELEMENTWISE "elementwise() -> VectorElementwiseProxy\nThe next operation will be performed elementwise."
#define DOC_MATH_VECTOR2_ROTATE "rotate(angle, /) -> Vector2\nrotates a vector by a given angle in degrees."
#define DOC_MATH_VECTOR2_ROTATERAD "rotate_rad(angle, /) -> Vector2\nrotates a vector by a given angle in radians."
#define DOC_MATH_VECTOR2_ROTATEIP "rotate_ip(angle, /) -> None\nrotates the vector by a given angle in degrees in place."
#define DOC_MATH_VECTOR2_ROTATEIPRAD "rotate_ip_rad(angle, /) -> None\nrotates the vector by a given angle in radians in place."
#define DOC_MATH_VECTOR2_ROTATERADIP "rotate_rad_ip(angle, /) -> None\nrotates the vector by a given angle in radians in place."
#define DOC_MATH_VECTOR2_ANGLETO "angle_to(Vector2, /) -> float\ncalculates the angle to a given vector in degrees."
#define DOC_MATH_VECTOR2_ASPOLAR "as_polar() -> (r, phi)\nreturns a tuple with radial distance and azimuthal angle."
#define DOC_MATH_VECTOR2_FROMPOLAR "from_polar((r, phi), /) -> None\nSets x and y from a polar coordinates tuple."
#define DOC_MATH_VECTOR2_PROJECT "project(Vector2, /) -> Vector2\nprojects a vector onto another."
#define DOC_MATH_VECTOR2_COPY "copy() -> Vector2\nReturns a copy of itself."
#define DOC_MATH_VECTOR2_CLAMPMAGNITUDE "clamp_magnitude(max_length, /) -> Vector2\nclamp_magnitude(min_length, max_length, /) -> Vector2\nReturns a copy of a vector with the magnitude clamped between max_length and min_length."
#define DOC_MATH_VECTOR2_CLAMPMAGNITUDEIP "clamp_magnitude_ip(max_length, /) -> None\nclamp_magnitude_ip(min_length, max_length, /) -> None\nClamps the vector's magnitude between max_length and min_length"
#define DOC_MATH_VECTOR2_UPDATE "update() -> None\nupdate(int) -> None\nupdate(float) -> None\nupdate(Vector2) -> None\nupdate(x, y) -> None\nupdate((x, y)) -> None\nSets the coordinates of the vector."
#define DOC_MATH_VECTOR2_EPSILON "Determines the tolerance of vector calculations."
#define DOC_MATH_VECTOR2_ANGLE "Gives the angle of the vector in degrees, relative to the X-axis, normalized to the interval (-180, 180]."
#define DOC_MATH_VECTOR2_ANGLERAD "Gives the angle of the vector in radians, relative to the X-axis, normalized to the interval (-π, π]."
#define DOC_MATH_VECTOR3 "Vector3() -> Vector3(0, 0, 0)\nVector3(int) -> Vector3\nVector3(float) -> Vector3\nVector3(Vector3) -> Vector3\nVector3(x, y, z) -> Vector3\nVector3((x, y, z)) -> Vector3\na 3-Dimensional Vector"
#define DOC_MATH_VECTOR3_DOT "dot(Vector3, /) -> float\ncalculates the dot- or scalar-product with the other vector"
#define DOC_MATH_VECTOR3_CROSS "cross(Vector3, /) -> Vector3\ncalculates the cross- or vector-product"
#define DOC_MATH_VECTOR3_MAGNITUDE "magnitude() -> float\nreturns the Euclidean magnitude of the vector."
#define DOC_MATH_VECTOR3_MAGNITUDESQUARED "magnitude_squared() -> float\nreturns the squared Euclidean magnitude of the vector."
#define DOC_MATH_VECTOR3_LENGTH "length() -> float\nreturns the Euclidean length of the vector."
#define DOC_MATH_VECTOR3_LENGTHSQUARED "length_squared() -> float\nreturns the squared Euclidean length of the vector."
#define DOC_MATH_VECTOR3_NORMALIZE "normalize() -> Vector3\nreturns a vector with the same direction but length 1."
#define DOC_MATH_VECTOR3_NORMALIZEIP "normalize_ip() -> None\nnormalizes the vector in place so that its length is 1."
#define DOC_MATH_VECTOR3_ISNORMALIZED "is_normalized() -> Bool\ntests if the vector is normalized i.e. has length == 1."
#define DOC_MATH_VECTOR3_SCALETOLENGTH "scale_to_length(float, /) -> None\nscales the vector to a given length."
#define DOC_MATH_VECTOR3_REFLECT "reflect(Vector3, /) -> Vector3\nreturns a vector reflected of a given normal."
#define DOC_MATH_VECTOR3_REFLECTIP "reflect_ip(Vector3, /) -> None\nreflect the vector of a given normal in place."
#define DOC_MATH_VECTOR3_DISTANCETO "distance_to(Vector3, /) -> float\ncalculates the Euclidean distance to a given vector."
#define DOC_MATH_VECTOR3_DISTANCESQUAREDTO "distance_squared_to(Vector3, /) -> float\ncalculates the squared Euclidean distance to a given vector."
#define DOC_MATH_VECTOR3_MOVETOWARDS "move_towards(Vector3, float, /) -> Vector3\nreturns a vector moved toward the target by a given distance."
#define DOC_MATH_VECTOR3_MOVETOWARDSIP "move_towards_ip(Vector3, float, /) -> None\nmoves the vector toward its target at a given distance."
#define DOC_MATH_VECTOR3_LERP "lerp(Vector3, float, /) -> Vector3\nreturns a linear interpolation to the given vector."
#define DOC_MATH_VECTOR3_SLERP "slerp(Vector3, float, /) -> Vector3\nreturns a spherical interpolation to the given vector."
#define DOC_MATH_VECTOR3_SMOOTHSTEP "smoothstep(Vector3, float, /) -> Vector3\nreturns a smooth interpolation to the given vector."
#define DOC_MATH_VECTOR3_ELEMENTWISE "elementwise() -> VectorElementwiseProxy\nThe next operation will be performed elementwise."
#define DOC_MATH_VECTOR3_ROTATE "rotate(angle, Vector3, /) -> Vector3\nrotates a vector by a given angle in degrees."
#define DOC_MATH_VECTOR3_ROTATERAD "rotate_rad(angle, Vector3, /) -> Vector3\nrotates a vector by a given angle in radians."
#define DOC_MATH_VECTOR3_ROTATEIP "rotate_ip(angle, Vector3, /) -> None\nrotates the vector by a given angle in degrees in place."
#define DOC_MATH_VECTOR3_ROTATEIPRAD "rotate_ip_rad(angle, Vector3, /) -> None\nrotates the vector by a given angle in radians in place."
#define DOC_MATH_VECTOR3_ROTATERADIP "rotate_rad_ip(angle, Vector3, /) -> None\nrotates the vector by a given angle in radians in place."
#define DOC_MATH_VECTOR3_ROTATEX "rotate_x(angle, /) -> Vector3\nrotates a vector around the x-axis by the angle in degrees."
#define DOC_MATH_VECTOR3_ROTATEXRAD "rotate_x_rad(angle, /) -> Vector3\nrotates a vector around the x-axis by the angle in radians."
#define DOC_MATH_VECTOR3_ROTATEXIP "rotate_x_ip(angle, /) -> None\nrotates the vector around the x-axis by the angle in degrees in place."
#define DOC_MATH_VECTOR3_ROTATEXIPRAD "rotate_x_ip_rad(angle, /) -> None\nrotates the vector around the x-axis by the angle in radians in place."
#define DOC_MATH_VECTOR3_ROTATEXRADIP "rotate_x_rad_ip(angle, /) -> None\nrotates the vector around the x-axis by the angle in radians in place."
#define DOC_MATH_VECTOR3_ROTATEY "rotate_y(angle, /) -> Vector3\nrotates a vector around the y-axis by the angle in degrees."
#define DOC_MATH_VECTOR3_ROTATEYRAD "rotate_y_rad(angle, /) -> Vector3\nrotates a vector around the y-axis by the angle in radians."
#define DOC_MATH_VECTOR3_ROTATEYIP "rotate_y_ip(angle, /) -> None\nrotates the vector around the y-axis by the angle in degrees in place."
#define DOC_MATH_VECTOR3_ROTATEYIPRAD "rotate_y_ip_rad(angle, /) -> None\nrotates the vector around the y-axis by the angle in radians in place."
#define DOC_MATH_VECTOR3_ROTATEYRADIP "rotate_y_rad_ip(angle, /) -> None\nrotates the vector around the y-axis by the angle in radians in place."
#define DOC_MATH_VECTOR3_ROTATEZ "rotate_z(angle, /) -> Vector3\nrotates a vector around the z-axis by the angle in degrees."
#define DOC_MATH_VECTOR3_ROTATEZRAD "rotate_z_rad(angle, /) -> Vector3\nrotates a vector around the z-axis by the angle in radians."
#define DOC_MATH_VECTOR3_ROTATEZIP "rotate_z_ip(angle, /) -> None\nrotates the vector around the z-axis by the angle in degrees in place."
#define DOC_MATH_VECTOR3_ROTATEZIPRAD "rotate_z_ip_rad(angle, /) -> None\nrotates the vector around the z-axis by the angle in radians in place."
#define DOC_MATH_VECTOR3_ROTATEZRADIP "rotate_z_rad_ip(angle, /) -> None\nrotates the vector around the z-axis by the angle in radians in place."
#define DOC_MATH_VECTOR3_ANGLETO "angle_to(Vector3, /) -> float\ncalculates the angle to a given vector in degrees."
#define DOC_MATH_VECTOR3_ASSPHERICAL "as_spherical() -> (r, theta, phi)\nreturns a tuple with radial distance, inclination and azimuthal angle."
#define DOC_MATH_VECTOR3_FROMSPHERICAL "from_spherical((r, theta, phi), /) -> None\nSets x, y and z from a spherical coordinates 3-tuple."
#define DOC_MATH_VECTOR3_PROJECT "project(Vector3, /) -> Vector3\nprojects a vector onto another."
#define DOC_MATH_VECTOR3_COPY "copy() -> Vector3\nReturns a copy of itself."
#define DOC_MATH_VECTOR3_CLAMPMAGNITUDE "clamp_magnitude(max_length, /) -> Vector3\nclamp_magnitude(min_length, max_length, /) -> Vector3\nReturns a copy of a vector with the magnitude clamped between max_length and min_length."
#define DOC_MATH_VECTOR3_CLAMPMAGNITUDEIP "clamp_magnitude_ip(max_length, /) -> None\nclamp_magnitude_ip(min_length, max_length, /) -> None\nClamps the vector's magnitude between max_length and min_length"
#define DOC_MATH_VECTOR3_UPDATE "update() -> None\nupdate(int) -> None\nupdate(float) -> None\nupdate(Vector3) -> None\nupdate(x, y, z) -> None\nupdate((x, y, z)) -> None\nSets the coordinates of the vector."
#define DOC_MATH_VECTOR3_EPSILON "Determines the tolerance of vector calculations."
