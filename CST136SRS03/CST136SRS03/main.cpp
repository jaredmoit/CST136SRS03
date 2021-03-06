#include "stdafx.h"
#include "Currency.h"
#include "Countries.h"
#include <iomanip>

int main()
{
	try
	{
		//Convert 100 USD to AU
		const auto test1{ Currency<100, Countries::US, Countries::AU>{}.value };

		//100 US to US
		const auto test2{ Currency<100, Countries::US, Countries::US>{}.value };

		//77 NZ to SB
		const auto test3{ Currency<77, Countries::NZ, Countries::SB>{}.value };

		//Nested conversion
		//const auto test3{ Currency<Currency<100, Countries::US, Countries::US>{}.value, Countries::NZ, Countries::SB>{}.value };
	}
	catch (std::exception *e)
	{
		e->what();
	}
}

