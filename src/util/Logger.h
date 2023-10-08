#pragma once
#include <wx/wx.h>

// TODO add logging levels
#define DEBUG
#ifdef DEBUG
#define CREATE_LOGGER(parent) Logger::CreateLogger(parent)
#define LOG_MESSAGE(msg) Logger::LogMessage(msg)
#define LOG_WARNING(wrn) Logger::LogWarning(wrn)
#define LOG_ERROR(err) Logger::LogError(err)
#else
#define CREATE_LOGGER(parent)
#define LOG_MESSAGE(msg)
#define LOG_WARNING(wrn)
#define LOG_ERROR(err)
#endif

class Logger
{
private:
    Logger();

public:
    static void CreateLogger(wxWindow *parent);

public:
    static void LogMessage(wxString msg);
    static void LogWarning(wxString wrn);
    static void LogError(wxString err);

private:
};