#include "mem.hpp"
#include "hooks.hpp"

bool __fastcall hooks::is_paused( void* ecx_, void* edx_ ) {
	static auto return_addr = pattern::first_code_match( g_csgo.m_chl.dll( ), xors( "FF D0 A1 ? ? ? ? B9 ? ? ? ? D9 1D ? ? ? ? FF 50 34 85 C0 74 22 8B 0D" ), 0x29 );
	static auto is_paused_o = g_csgo.m_engine->get_old_function< decltype( &is_paused ) >( 91 );

	stack_t stack( get_baseptr( ) );
	uintptr_t return_address = stack.return_address( );

	//printf( "return address: %08x sig: %08x deref: %08x delta: %08x delta: %08x\n", return_address, return_addr, *( uintptr_t* )return_addr, return_address - return_addr, return_addr - return_address );

	if( return_address == return_addr ) {
		printf( "extrapolate\n" );
		return true;
	}

	return is_paused_o( ecx_, 0 );
}