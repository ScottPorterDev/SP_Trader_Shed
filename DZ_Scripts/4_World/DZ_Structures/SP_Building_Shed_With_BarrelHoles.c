class SP_Land_Shed_Trad_With_BarrelHoles: BuildingWithFireplace
{
    override void EEDelete(EntityAI parent)
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			if (m_SP_Light_Classique)
				m_SP_Light_Classique.Destroy();       
		}
	}
};