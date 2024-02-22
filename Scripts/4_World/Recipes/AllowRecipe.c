modded class PluginRecipesManagerBase extends PluginBase
{   
    override void RegisterRecipies()
    {
        super.RegisterRecipies();        
        
        // Register existing recipes
        RegisterRecipe(new Disinfect_Vial_B);
        RegisterRecipe(new Disinfect_Vial_G);
        RegisterRecipe(new Disinfect_Vial_P);
        RegisterRecipe(new Disinfect_Vial_R);
        RegisterRecipe(new Disinfect_Vial_Y);

        // Register new recipe
        RegisterRecipe(new Hive_Injector);
    }
};
