class Hive_Medical_Injector_Base extends ItemBase
{
    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionInjectSelf);
        AddAction(ActionInjectTarget);
    }
};