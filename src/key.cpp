//*************************************************************************************************
// File Name:   key.cpp
// Purpose:     Implementation file of key class.
// Last Edit:   February 17, 2025
//*************************************************************************************************
// Preproccesor Directives
//*************************************************************************************************
// Pragma
#pragma once

// STD Includes

// Local Includes 
#include "key.h"

Key::Key()
{
    this->yes = nullptr;
    this->no = nullptr;
    this->Question = "New Key Question";
}

Key::Key(std::string Question)
{

}

Key::Key(bool direction, std::string Question)
{
    
}
