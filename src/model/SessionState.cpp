#include "SessionState.h"

SessionState *SessionState::_instance = 0;

SessionState *SessionState::Instance()
{
    if (_instance == 0)
        _instance = new SessionState;
    return _instance;
}

SessionState::SessionState()
{
}
