void RegisterAnimation(string name, int category, int pUserData, bool pFullBody, int pStanceMask = -1)
{
    PluginDayzPlayerDebugUserData data = new PluginDayzPlayerDebugUserData(name, category, pUserData, pFullBody, pStanceMask);
    m_AnimationList.Insert(data);
    m_AnimationListMappings.Insert(data.GetNameUnique(), data);
}

RegisterAnimation("Hive_Medical_Injector_Base", TYPE_FB_ONETIME, DayZPlayerConstants.CMD_ACTIONFB_MORPHINE, true, DayZPlayerConstants.STANCEMASK_CROUCH);