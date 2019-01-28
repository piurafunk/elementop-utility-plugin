#pragma once

#include "UtilityFunctions.generated.h"

UCLASS()
class UUtilityFunctions : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "float += float", CompactNodeTitle = "+=", Keywords = "Float"), Category = "Utility")
	static float FloatInplaceAdd(UPARAM(ref) float& base, float addition);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Array Sum", CompactNodeTitle = "Sum", Keywords = "Array"), Category = "Utility")
	static float ArraySum(const TArray<float>& Array);
};
