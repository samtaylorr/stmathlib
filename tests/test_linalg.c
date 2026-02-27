#include "unity.h"
#include "../src/linalg.h"
#include "unity.h"
#include <math.h>

void setUp(void) {}
void tearDown(void) {}

void test_VectorMagnitude_zero(void) {
    Vector2 v = {0, 0};
    TEST_ASSERT_EQUAL_FLOAT(0.0f, stm_GetVectorMagnitude(v));
}

void test_VectorMagnitude_positive(void) {
    Vector2 v = {3, 4};
    TEST_ASSERT_EQUAL_FLOAT(5.0f, stm_GetVectorMagnitude(v));
}

void test_VectorNormalized_magnitude_is_one(void) {
	Vector2 initVector = {5, 5};
	Vector2 normalVector = stm_GetVectorNormalized(initVector);
	float magnitude = stm_GetVectorMagnitude(normalVector);
	TEST_ASSERT_EQUAL_FLOAT(1.0f, magnitude);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_VectorMagnitude_zero);
    RUN_TEST(test_VectorMagnitude_positive);
		RUN_TEST(test_VectorNormalized_magnitude_is_one);
    return UNITY_END();
}
