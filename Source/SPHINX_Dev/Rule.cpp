// Fill out your copyright notice in the Description page of Project Settings.


#include "Rule.h"
#include "Item.h"
#include "PuzzleManager.h"

URule::URule()
{
/*     UTerm* InputTerm  = NewObject<UTerm>(this, UTerm::StaticClass(), TEXT("InputTermInstance"));
    if (InputTerm)
    {
        InputTerm->Description = TEXT("Input");
        Inputs.Add(InputTerm);
    }
   
   
    UTerm* OutputTerm  = NewObject<UTerm>(this, UTerm::StaticClass(), TEXT("OutputTermInstance"));
    if (OutputTerm)
    {
        OutputTerm->Description = TEXT("Output"); //could be Name rather than Description
        Outputs.Add(OutputTerm);
    }  */

    this->ToInputsPtr();
    this->ToOutputsPtr();
    this->ToChildrenPtr();
    
}

URule::URule(const FString& Action)
{
    this->Action = Action;
}

bool URule::IsEqual(const UObject* OtherObject) const
{
    const URule* OtherRule = Cast<URule>(OtherObject);
    if (OtherRule != nullptr)
    {
        return OtherRule->Name.Equals(Name);
    }
    return false;
}

void URule::AddOutput()
{
    UTerm* OutputTerm  = NewObject<UTerm>(this, UTerm::StaticClass(), TEXT("OutputTermInstance"));
    if (OutputTerm)
    {
        OutputTerm->Description = TEXT("Output");
        Outputs.Add(OutputTerm);
    } 
}

void URule::AddInput()
{
    UTerm* InputTerm  = NewObject<UTerm>(this, UTerm::StaticClass(), TEXT("InputTermInstance"));
    if (InputTerm)
    {
        InputTerm->Description = TEXT("Input");
        Inputs.Add(InputTerm);
    } 
}

void URule::DeleteOutputAtIndex(int32 Index)
{
    if (Outputs.IsValidIndex(Index))
    {
        Outputs.RemoveAt(Index);
    }
}

void URule::DeleteInputAtIndex(int32 Index)
{
    if (Inputs.IsValidIndex(Index))
    {
        Inputs.RemoveAt(Index);
    }
}

void URule::AddChildRule(URule* Child)
{
    if (Child != nullptr)
    {
        Children.Add(Child);
    }
}

void URule::RemoveLastAddedRule()
{
    if (Children.Num() > 0)
    {
        Children.RemoveAt(Children.Num() - 1);
    }
}

bool URule::MainOutputIs(UTerm* Term) const 
{
    if (Term->DbItem)
    {
        //UE_LOG(LogTemp, Warning, TEXT("Term->DbItem = %s"), *Term->DbItem->Name);
        if(Term->DbItem->Name != Outputs[0]->Name)
        {
            //UE_LOG(LogTemp, Warning, TEXT("Term->DbItem->Name '%s' doesn't equal Outputs[0]->Name '%s'"), *Term->DbItem->Name, *Outputs[0]->Name);
            if (!Term->DbItem->GetSuperTypes().Contains(Outputs[0]->Name))
            {
                return false;
            }
        }
        else 
        {
            if (Term->Name != Outputs[0]->Name)
            {
                if (!Term->GetSuperTypes().Contains(Outputs[0]->Name))
                {
                    return false;
                }
            }
        }
    }

    for (UItemProperty* RuleOutProp : Outputs[0]->Properties)
    {
        bool Found = false;
        for (UItemProperty* TermProperty : Term->Properties)
        {
            if (TermProperty->Equals(RuleOutProp))
            {
                Found = true;
                break;
            }
        }
        if (!Found)
        {
            return false;
        }
    }

    return true;
}

bool URule::HasPlayerInput()
{
    for (UTerm* T : Inputs)
    {
        if (T->Name == TEXT("Player"))
        {
            return true;
        }
    }
    return false;
}

FString URule::GetRuleAsString()
{
    return GetRuleAsString(true);
}


FString URule::GetRuleAsString(bool Speech)
{
    FString RuleAsString;

    for (UTerm* Output : Outputs)
    {
        if (Output != nullptr && Output->Name == "Speech" && !Speech)
        {
            continue;
        }
    
    
        RuleAsString += Output->Name;
        if(Output != nullptr && Output->Properties.Num() > 0)
        {
            RuleAsString += TEXT("[");
            for (int32 i = 0; i< Output->Properties.Num(); i++)
            {
                RuleAsString += Output->Properties[i]->Name + TEXT(":");
                RuleAsString += Output->Properties[i]->Value;
                if (i < Output->Properties.Num() - 1)
                {
                    RuleAsString += TEXT(",");
                }
            }
            RuleAsString += TEXT("]");
        }
        else RuleAsString += TEXT("");
    }

    RuleAsString += TEXT("-->") + Action + TEXT("");
    for (UTerm* Input : Inputs)
    {
        RuleAsString += Input->Name;
        if (Input != nullptr && Input->Properties.Num() > 0)
        {
            RuleAsString += TEXT("[");
            for (int32 i = 0; i< Input->Properties.Num(); i++)
            {
                RuleAsString += Input->Properties[i]->Name + TEXT(":");
                RuleAsString += Input->Properties[i]->Value;
                if (i < Input->Properties.Num() - 1)
                {
                    RuleAsString += TEXT(",");
                }
            }
            RuleAsString += TEXT("]");
        }
        else RuleAsString += TEXT("");
    }
    return RuleAsString;
}

FString URule::ToString()
{
    return GetRuleAsString();
}

FString URule::ToShortString()
{
    return GetRuleAsString(false);
}

bool URule::ContainsItem(UItem* Item)
{
    FString ItemName = Item->Name;
    for (UTerm* T : Inputs)
    {
        if (T != nullptr && T->Name == ItemName)
        {
            return true;
        }
    }
    for (UTerm* T : Outputs)
    {
        if (T != nullptr && T->Name == ItemName)
        {
            return true;
        }
    }
    return false;
}

URule* URule::Clone()
{
    URule* ClonedRule = NewObject<URule>(GetOuter(), GetClass());

    ClonedRule->Outputs = this->Outputs;
    ClonedRule->Inputs = this->Inputs;
    ClonedRule->Action = this->Action;
    ClonedRule->Hint = this->Hint;
    ClonedRule->Parent = this->Parent;
    ClonedRule->Children = this->Children;
    ClonedRule->bAutomatic = this->bAutomatic;
    ClonedRule->bSelectedInput = this->bSelectedInput;
    ClonedRule->bInventory = this->bInventory;
    ClonedRule->RuleNumber = this->RuleNumber;
    ClonedRule->Name = this->Name;

    return ClonedRule;
}

void URule::ToOutputsPtr()
{
    for (TSubclassOf<UTerm> AssetClass : OutputsBP)
    {
        if (AssetClass != nullptr)
        {
            UTerm* TermPtr = NewObject<UTerm>(this, AssetClass);
            if (TermPtr != nullptr)
            {
                Outputs.Add(TermPtr);
                //UE_LOG(LogTemp, Error, TEXT("%s added to rule outputptrs"), *TermPtr->Name);
            }
        }
    }
}

void URule::ToInputsPtr()
{
    for (TSubclassOf<UTerm> AssetClass : InputsBP)
    {
        if (AssetClass != nullptr)
        {
            UTerm* TermPtr = NewObject<UTerm>(this, AssetClass);
            if (TermPtr != nullptr)
            {
                Inputs.Add(TermPtr);
            }
        }
    }
}

void URule::ToChildrenPtr()
{
    for (TSubclassOf<URule> AssetClass : ChildrenBP)
    {
        if (AssetClass != nullptr)
        {
            URule* RulePtr = NewObject<URule>(this, AssetClass);
            if (RulePtr != nullptr)
            {
                Children.Add(RulePtr);
            }
        }
    }
}

FString URule::ToPMString()
{
    FString RuleAsString;
    
    RuleAsString += TEXT("-->") + Action + TEXT("");
    for (UTerm* Input : Inputs)
    {
        RuleAsString += Input->Name;
        if (Input != nullptr && Input->Properties.Num() > 0)
        {
            RuleAsString += TEXT("[");
            for (int32 i = 0; i< Input->Properties.Num(); i++)
            {
                RuleAsString += Input->Properties[i]->Name + TEXT(":");
                RuleAsString += Input->Properties[i]->Value;
                if (i < Input->Properties.Num() - 1)
                {
                    RuleAsString += TEXT(",");
                }
            }
            RuleAsString += TEXT("]");
        }
        else RuleAsString += TEXT("");
    }
    return RuleAsString;
}

void URule::GetDbItems()
{
    APuzzleManager* PMInstance = APuzzleManager::GetInstance();

    if (PMInstance)
    {
        for (UTerm* Input : Inputs)
        {
            if (Input)
            {
                UItem* DbItemMatch = PMInstance->GetObject(Input->Name);
                Input->DbItem = DbItemMatch;
            }
        }

        for (UTerm* Output : Outputs)
        {
            if (Output)
            {
                UItem* DbItemMatch = PMInstance->GetObject(Output->Name);
                Output->DbItem = DbItemMatch;
            } 
        }
    }
}

void URule::InitialiseRule()
{
    ToInputsPtr();
    ToOutputsPtr();
    GetDbItems();
}