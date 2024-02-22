class Hive__Medical_Injector extends RecipeBase
{   
    override void Init()
    {
        m_Name = "Hive__Medical_Injector";
        m_IsInstaRecipe = false;
        m_AnimationLength = 2;
        m_Specialty = 0.02;

        // Ingredients
        // Ingredient 1: Injector Pen
        InsertIngredient(0, "Hive_Medical_Injector");

        // Ingredient 2: Injector Vial (Red)
        InsertIngredient(1, "Hive_Medical_Vile_Red_Disinfected");

        // Ingredient 3: Injector Vial (Green)
        InsertIngredient(2, "Hive_Medical_Vile_Green_Disinfected");

        // Ingredient 4: Injector Vial (Blue)
        InsertIngredient(3, "Hive_Medical_Vile_Blue_Disinfected");

        // Ingredient 5: Injector Vial (Purple)
        InsertIngredient(4, "Hive_Medical_Vile_Purple_Disinfected");

        // Ingredient 6: Injector Vial (Yellow)
        InsertIngredient(5, "Hive_Medical_Vile_Yellow_Disinfected");

        // Results
        // Add combined injector items for each color
        AddResult("Hive_Medical_Injector_Red"); 
        AddResult("Hive_Medical_Injector_Green"); 
        AddResult("Hive_Medical_Injector_Blue"); 
        AddResult("Hive_Medical_Injector_Purple"); 
        AddResult("Hive_Medical_Injector_Yellow"); 
    }

    override bool CanDo(ItemBase ingredients[], PlayerBase player)
    {
        // Check if the injector pen is empty and if there's a vial inserted into it
        return ingredients[0].IsEmpty() && HasValidVial(ingredients);
    }

    bool HasValidVial(ItemBase ingredients[])
    {
        // Check if any of the vials are present in the ingredients
        for (int i = 1; i < 6; i++)
        {
            if (!ingredients[i].IsEmpty())
                return true;
        }
        return false;
    }

    override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialtyWeight)
    {
        // Apply the modifier based on the inserted vial and create the combined item
        for (int i = 1; i < 6; i++)
        {
            if (!ingredients[i].IsEmpty())
            {
                ApplyModifierByVialColor(ingredients[i], player);
                break;
            }
        }

        // Place the combined item into the player's inventory or on the ground
    }

    void ApplyModifierByVialColor(ItemBase vial, PlayerBase player)
    {
        string vialClassName = vial.ClassName();
        switch (vialClassName)
        {
            case "Hive_Medical_Vile_Red_Disinfected":
                player.ApplyModifier(new Hive_Medical_Vile_Red_DisinfectedMdfr());
                break;
            case "Hive_Medical_Vile_Green_Disinfected":
                player.ApplyModifier(new Hive_Medical_Vile_Green_DisinfectedMdfr());
                break;
            case "Hive_Medical_Vile_Blue_Disinfected":
                player.ApplyModifier(new Hive_Medical_Vile_Blue_DisinfectedMdfr());
                break;
            case "Hive_Medical_Vile_Purple_Disinfected":
                player.ApplyModifier(new Hive_Medical_Vile_Purple_DisinfectedMdfr());
                break;
            case "Hive_Medical_Vile_Yellow_Disinfected":
                player.ApplyModifier(new Hive_Medical_Vile_Yellow_DisinfectedMdfr());
                break;
            // Add cases for other vial colors if needed
            default:
                break;
        }
    }
};
