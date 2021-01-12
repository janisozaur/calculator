add_library(CalculatorUnitTests
    CalcEngineTests.cpp
    CalcInputTest.cpp
    CalculatorManagerTest.cpp
    Mocks/MockResourceProvider.cpp
    pch.cpp
    RationalTest.cpp
    UnitConverterTest.cpp
)
target_link_libraries(CalculatorUnitTests CalcManager)
target_include_directories(CalculatorUnitTests PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/../
    ${CMAKE_CURRENT_SOURCE_DIR}/../CalcManager)
