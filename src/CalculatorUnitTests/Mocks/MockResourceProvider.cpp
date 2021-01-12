#include "MockResourceProvider.h"

namespace CalculatorApp
{
    MockResourceProvider::MockResourceProvider()
    {
        // xmlstarlet sel -t -m '//data' --output "map[L\"" -v @name --output "\"] = L\""  -v value --output "\";" -n
        // <../Calculator/Resources/en-US/CEngineStrings.resw
        map[L"10"] = L"Rsh";
        map[L"100"] = L"Invalid input";
        map[L"101"] = L"Result is undefined";
        map[L"105"] = L"Not enough memory";
        map[L"107"] = L"Overflow";
        map[L"108"] = L"Result not defined";
        map[L"11"] = L"÷";
        map[L"118"] = L"Result not defined";
        map[L"119"] = L"Overflow";
        map[L"12"] = L"×";
        map[L"120"] = L"Overflow";
        map[L"13"] = L"+";
        map[L"14"] = L"-";
        map[L"15"] = L"Mod";
        map[L"16"] = L"yroot";
        map[L"17"] = L"^";
        map[L"18"] = L"Int";
        map[L"19"] = L"RoL";
        map[L"2"] = L"CE";
        map[L"20"] = L"RoR";
        map[L"21"] = L"NOT";
        map[L"22"] = L"sin";
        map[L"23"] = L"cis";
        map[L"24"] = L"tan";
        map[L"25"] = L"sinh";
        map[L"26"] = L"cosh";
        map[L"27"] = L"tanh";
        map[L"28"] = L"ln";
        map[L"29"] = L"log";
        map[L"30"] = L"√";
        map[L"35"] = L"dms";
        map[L"37"] = L"10^";
        map[L"38"] = L"%";
        map[L"4"] = L".";
        map[L"40"] = L"Pi";
        map[L"41"] = L"=";
        map[L"47"] = L"Exp";
        map[L"48"] = L"(";
        map[L"49"] = L")";
        map[L"6"] = L"AND";
        map[L"66"] = L"frac";
        map[L"67"] = L"sin₀";
        map[L"68"] = L"cos₀";
        map[L"69"] = L"tan₀";
        map[L"7"] = L"OR";
        map[L"70"] = L"sin₀⁻¹";
        map[L"71"] = L"cos₀⁻¹";
        map[L"72"] = L"tan₀⁻¹";
        map[L"73"] = L"sinᵣ";
        map[L"74"] = L"cosᵣ";
        map[L"75"] = L"tanᵣ";
        map[L"76"] = L"sinᵣ⁻¹";
        map[L"77"] = L"cosᵣ⁻¹";
        map[L"78"] = L"tanᵣ⁻¹";
        map[L"79"] = L"sin₉";
        map[L"8"] = L"XOR";
        map[L"80"] = L"cos₉";
        map[L"81"] = L"tan₉";
        map[L"82"] = L"sin₉⁻¹";
        map[L"83"] = L"cos₉⁻¹";
        map[L"84"] = L"tan₉⁻¹";
        map[L"85"] = L"sinh⁻¹";
        map[L"86"] = L"cosh⁻¹";
        map[L"87"] = L"tanh⁻¹";
        map[L"88"] = L"e^";
        map[L"89"] = L"10^";
        map[L"9"] = L"Lsh";
        map[L"90"] = L"√";
        map[L"91"] = L"sqr";
        map[L"92"] = L"cube";
        map[L"94"] = L"fact";
        map[L"95"] = L"1/";
        map[L"96"] = L"degrees";
        map[L"97"] = L"negate";
        map[L"99"] = L"Cannot divide by zero";
        map[L"SecDeg"] = L"sec₀";
        map[L"SecRad"] = L"secᵣ";
        map[L"SecGrad"] = L"sec₉";
        map[L"InverseSecDeg"] = L"sec₀⁻¹";
        map[L"InverseSecRad"] = L"secᵣ⁻¹";
        map[L"InverseSecGrad"] = L"sec₉⁻¹";
        map[L"CscDeg"] = L"csc₀";
        map[L"CscRad"] = L"cscᵣ";
        map[L"CscGrad"] = L"csc₉";
        map[L"InverseCscDeg"] = L"csc₀⁻¹";
        map[L"InverseCscRad"] = L"cscᵣ⁻¹";
        map[L"InverseCscGrad"] = L"csc₉⁻¹";
        map[L"CotDeg"] = L"cot₀";
        map[L"CotRad"] = L"cotᵣ";
        map[L"CotGrad"] = L"cot₉";
        map[L"InverseCotDeg"] = L"cot₀⁻¹";
        map[L"InverseCotRad"] = L"cotᵣ⁻¹";
        map[L"InverseCotGrad"] = L"cot₉⁻¹";
        map[L"Sech"] = L"sech";
        map[L"InverseSech"] = L"sech⁻¹";
        map[L"Csch"] = L"csch";
        map[L"InverseCsch"] = L"csch⁻¹";
        map[L"Coth"] = L"coth";
        map[L"InverseCoth"] = L"coth⁻¹";
        map[L"TwoPowX"] = L"2^";
        map[L"LogBaseY"] = L"log base";
        map[L"Abs"] = L"abs";
        map[L"Ceil"] = L"ceil";
        map[L"Floor"] = L"floor";
        map[L"Nand"] = L"NAND";
        map[L"Nor"] = L"NOR";
        map[L"CubeRoot"] = L"cuberoot";
        map[L"ProgrammerMod"] = L"%";
    }

    std::wstring MockResourceProvider::GetCEngineString(std::wstring_view id)
    {
        auto it = map.find(std::wstring(id));
        if (it != map.cend())
        {
            return it->second;
        }
        else
        {
            return {};
        }
    }
}
