#pragma once

#include "ScreenState.h"
#include "GameEngine.h"

void ScreenState::Render()
{
	SDL_RenderPresent(GameEngine::Instance()->GetRenderer());

}

void ScreenState::RenderFont(bool isRefreshText, const char *text, int x, int y)
{

	if (isRefreshText)
	{
		SDL_Color textColor = { 255,255,255,0 };//white color
		SDL_Surface * fontSurface = TTF_RenderText_Solid(m_pFont, text, textColor);

		SDL_DestroyTexture(m_pFontTexture); //need to de-allocate previous font texture
		m_pFontTexture = SDL_CreateTextureFromSurface(GameEngine::Instance()->GetRenderer(), fontSurface);
		m_rFontRect = { x,y,fontSurface->w,fontSurface->h };

	}

	SDL_RenderCopy(GameEngine::Instance()->GetRenderer(), m_pFontTexture, 0, &m_rFontRect);

}

void ScreenState::RenderFontColor(bool isRefreshText, const char* text, int x, int y, SDL_Color textColor)
{
	if (isRefreshText)
	{
		SDL_Surface* fontSurface = TTF_RenderText_Solid(m_pFont, text, textColor);

		SDL_DestroyTexture(m_pFontTexture); //need to de-allocate previous font texture
		m_pFontTexture = SDL_CreateTextureFromSurface(GameEngine::Instance()->GetRenderer(), fontSurface);
		m_rFontRect = { x,y,fontSurface->w,fontSurface->h };

	}

	SDL_RenderCopy(GameEngine::Instance()->GetRenderer(), m_pFontTexture, 0, &m_rFontRect);
}