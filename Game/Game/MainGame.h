#pragma once
#include <iostream>
#include <vector>
#include "Defines.h"
using namespace std;


class CText;
class CScene;
class CGameObject;

class CSoundResource;
class CSpriteResource;


class CMainGame
{


private:
	CScene * m_pCurrentScene = NULL;


	




private: //통합관리 모음

	CSoundResource* pSoundResource;
	CSpriteResource* pSpriteResource;
public:
	
	CSoundResource*  GetSound() { return pSoundResource; }
	CSpriteResource*  GetSpriteResource() { return pSpriteResource;}

public:
	void ChangeScene(int Scene);

	void Init();
	void Update(float deltaTime);
	void Render();
	void ResetSprite();

	DECLARE_SINGLETON(CMainGame)
};
