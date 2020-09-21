#pragma once
#include <Windows.h>
#include <d3d9.h>
#include "../../../dependencies/imgui/imgui.h"
#include "../../../dependencies/imgui/dx9/imgui_impl_dx9.h"
#include "../../../dependencies/imgui/win32/imgui_impl_win32.h"

#define SECTION_START( x ) const auto x = [ ]( )
#define SECTION_END( x ) ; x( );

class c_menu {
public:
	void create_context( );
	void set_style( );
	void impl_init( HWND hwnd, IDirect3DDevice9* device );
	void new_frame( );
	void populate_render_list( );
	void end_frame_and_render( );
	void pre_reset( );
	void post_reset( );
	void shutdown( );
	bool is_open;
};