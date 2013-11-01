#include "game_session.h"

GameSession::GameSession(const uint64& session_id)
    : NetworkSession(session_id)
{

}

GameSession::~GameSession()
{

}

void GameSession::attackPlayerPtr(Player* player)
{
    _player = player;
}