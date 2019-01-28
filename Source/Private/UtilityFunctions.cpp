#include "UtilityFunctions.h"


float UUtilityFunctions::FloatInplaceAdd(float& base, float addition)
{
	return (base += addition);
}

float UUtilityFunctions::ArraySum(const TArray<float>& Array)
{
	float sum = 0;
	for (auto& element : Array)
	{
		sum += element;
	}

	return sum;
}