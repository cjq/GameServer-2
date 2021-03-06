#pragma once

#define PLUGIN_MAKEVERSION(d,c,b,a) (a|b<<8|c<<16|d<<24)
#define PLUGIN_DEPENDENCY_TEST(plg,ver) if (this->FindDependency(plg, ver)) return P_MISSING_DEPENDENCY;

enum PRESULT
{
	P_OK,
	P_NO_IMPLEMENT,
	P_ERROR,
	P_INVALID_ARG,
	P_MISSING_DEPENDENCY,
};