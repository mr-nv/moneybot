#include "hooks.hpp"
#include "settings.hpp"

bool __fastcall hooks::material_system( void* ecx, void* edx, IMaterialSystem_Config_t* config, bool forceupdate ) {
	static auto original_fn = material_system_o;

	config->m_fullbright = g_settings.visuals.fullbright( );

	return original_fn( ecx, edx, config, forceupdate );
}
