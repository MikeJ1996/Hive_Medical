modded class Hive_Medical_Vile_Blue_DisinfectedMdfr: ModifierBase
{
    const int LIFETIME = 60;
    float m_HealthBoostAmount = 5.00;
    float m_SpeedBoostAmount = 2.5;

    override void Init()
    {
        m_TrackActivatedTime = true;
        m_IsPersistent = true;
        m_ID = eModifiers.MDF_Hive_Medical_Vile_Blue_Disinfected;
        m_TickIntervalInactive = DEFAULT_TICK_TIME_INACTIVE;
        m_TickIntervalActive = 1;
        DisableActivateCheck();
    }

    override bool ActivateCondition(PlayerBase player)
    {
        // Define the activation condition
        return true; // Adjust as needed
    }

    override void OnReconnect(PlayerBase player)
    {
        OnActivate(player);
    }

    override string GetDebugText()
    {
        return (LIFETIME - GetAttachedTime()).ToString();
    }

    override void OnActivate(PlayerBase player)
    {
        // Apply health boost
        player.GetStatStamina().Set(m_HealthBoostAmount);
        // Apply speed boost
        player.GetStatEnergy().Set(m_SpeedBoostAmount);
    }

    override void OnDeactivate(PlayerBase player)
    {
        // Reset health boost
        player.GetStatStamina().Set(0);
        // Reset speed boost
        player.GetStatEnergy().Set(1);
    }

    override bool DeactivateCondition(PlayerBase player)
    {
        float attached_time = GetAttachedTime();
        return attached_time >= LIFETIME;
    }

    override void OnTick(PlayerBase player, float deltaT)
    {
        // Add any periodic effects here if needed
    }
};
