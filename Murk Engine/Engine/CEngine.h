#pragma once

#include <Windows.h>

#include <d3d9.h>
#include <d3dx9.h>

#include <stdio.h>

#define Msg(x) MessageBoxA(0, x, "Murk Engine", MB_ICONERROR)
#define Print(x) printf(x)
#define IsKeyPressed(x) GetAsyncKeyState(x)

#define ClassName "murk_engine"
#define WindowName "Murk Engine"
#define VK_W 0x57
#define VK_A 0x41
#define VK_S 0x53
#define VK_D 0x44

class CWindow
{
public:
	HWND m_hWindow;
	LPSTR m_lpszClassName;
	HINSTANCE m_hInst;

	POINT m_posMouse;

	LPDIRECT3DDEVICE9 m_pDevice;
	LPDIRECT3D9 m_pD3D;
	D3DPRESENT_PARAMETERS m_D3Dpp;

	bool InitializeWindow( );
	void DeleteWindow( );

	bool InitializeDevice( );
	void CleanupDevice( );
	void ResetDevice( );
};

inline CWindow* g_pWindow = new CWindow;