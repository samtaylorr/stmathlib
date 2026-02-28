#include "unity.h"
#include "../src/linalg.h"
#include "unity_internals.h"

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

void test_GetUnitVector_zero(void) {
    Vector2 v = {0, 0};
    Vector2 result = stm_GetUnitVector(v);

    TEST_ASSERT_EQUAL_FLOAT(0.0f, result.x);
    TEST_ASSERT_EQUAL_FLOAT(0.0f, result.y);
}

void test_GetUnitVector_magnitude_is_one(void) {
	Vector2 initVector = {5, 5};
	Vector2 testVector = stm_GetUnitVector(initVector);

	float magnitude = stm_GetVectorMagnitude(testVector);
	TEST_ASSERT_EQUAL_FLOAT(1.0f, magnitude);
}

void test_GetUnitVector_correct_value(void) {
    Vector2 initVector = {60, 25};
    Vector2 testVector = stm_GetUnitVector(initVector);
    Vector2 correctVector = {0.92307692307f, 0.38461538461f};
    
    TEST_ASSERT_FLOAT_WITHIN(0.0001f, correctVector.x, testVector.x);
    TEST_ASSERT_FLOAT_WITHIN(0.0001f, correctVector.y, testVector.y);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_VectorMagnitude_zero);
    RUN_TEST(test_VectorMagnitude_positive);
    RUN_TEST(test_GetUnitVector_zero);
    RUN_TEST(test_GetUnitVector_correct_value);
	RUN_TEST(test_GetUnitVector_magnitude_is_one);
    return UNITY_END();
}