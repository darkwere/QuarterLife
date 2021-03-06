//----------------------------------------
// Quarter Life
//
// GNU General Public License v3.0
//
//  (\-/)
// (='.'=)
// (")-(")o
//----------------------------------------

#pragma once

#include "Blueprint/UserWidget.h"
#include "QLPlayGameMenuWidget.generated.h"

UCLASS()
class QL_API UQLPlayGameMenuWidget : public UUserWidget
{
public:
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "C++Function")
    virtual void Play();

    UFUNCTION(BlueprintCallable, Category = "C++Function")
    void SetPlayerController(AQLPlayerController* PlayerController_ext);

private:
    AQLPlayerController* PlayerController;
};
