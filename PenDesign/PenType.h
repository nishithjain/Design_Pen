#pragma once
enum class PenType
{
	GEL_PEN,
	BALLPOINT_PEN,
	FOUNTAIN_PEN
};

inline const char* to_string(const PenType e)
{
	switch (e)
	{
	case PenType::GEL_PEN: return "GEL PEN";
	case PenType::BALLPOINT_PEN: return "BALLPOINT PEN";
	case PenType::FOUNTAIN_PEN: return "FOUNTAIN PEN";
	default: return "unknown";
	}
}
