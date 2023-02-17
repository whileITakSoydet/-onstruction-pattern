#pragma once
#include "AircraftBuilder.h"

class PaperAirplane : public AircraftBuilder
{
public:
	PaperAirplane()
	{
		aircraft = new Aircraft("paper plane");
	}

	void BuildFrame() override
	{
		aircraft->SetPart("frame", "paper plane");
	}

	void BuildEngine() override
	{
		aircraft->SetPart("engine", "no engine");
	}

	void BuildWheels() override
	{
		aircraft->SetPart("wheels", "no engine");
	}

	void BuildDoors() override
	{
		aircraft->SetPart("doors", "no engine");
	}

	void BuildWings() override
	{
		aircraft->SetPart("wings", "one list of paper");
	}
};