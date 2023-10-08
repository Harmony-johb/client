#include "Logger.h"

void Logger::CreateLogger(wxWindow *parent)
{
    new wxLogWindow(parent, "Console", true, false);
}

void Logger::LogMessage(wxString msg)
{
    wxLogMessage(msg);
}

void Logger::LogWarning(wxString wrn)
{
    wxLogWarning(wrn);
}

void Logger::LogError(wxString err)
{
    wxLogError(err);
}
