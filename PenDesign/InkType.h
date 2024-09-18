#pragma once

enum class InkType
{
	WATERPROOF,
	SPARKLE,
	FRAGRANCE
};

inline const char* to_string(const InkType e)
{
	switch (e)
	{
	case InkType::WATERPROOF: return "WATER PROOF";
	case InkType::SPARKLE: return "SPARKLE";
	case InkType::FRAGRANCE: return "FRAGRANCE";
	default: return "unknown";
	}
}
