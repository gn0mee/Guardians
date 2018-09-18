#include "Sprite.h"



const RECT* CSprite::GetFrameRect(int Frame)
{
	Frame %= m_SpriteInfo.iFrameCount;


	RECT rc ;	//프레임, 좌표값에 따라 출력할 범위 설정

	int StartX = m_SpriteInfo.iXBegin
		+ (m_SpriteInfo.iXSize+m_SpriteInfo.iIsLine) *(Frame%m_SpriteInfo.iXFrame);

	int StartY = m_SpriteInfo.iYBegin
		+ (m_SpriteInfo.iYSize + m_SpriteInfo.iIsLine)*(Frame/m_SpriteInfo.iXFrame);

	int EndX = StartX + m_SpriteInfo.iXSize;

	int EndY = StartY + m_SpriteInfo.iYSize;

	rc = { StartX,StartY,EndX,EndY };

	return &rc;
}

const D3DXVECTOR3* CSprite::GetCenter()
{
	return &D3DXVECTOR3((float)m_SpriteInfo.iXSize / 2, (float)m_SpriteInfo.iYSize / 2, 0);
}

void CSprite::SetSpriteInfo(spriteInfo* SpriteInfo)
{
	m_SpriteInfo = *SpriteInfo;
}

CSprite::CSprite()
{
	
}




CSprite::CSprite(wstring body, int XBegin, int YBegin, int isLine, int XFrame, int YFrame, int XSize, int YSize)

{

}

CSprite::~CSprite()
{
}
