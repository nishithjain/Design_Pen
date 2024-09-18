

#include "ClickClosingBehavior.h"
#include "FountainPen.h"
#include "GelPen.h"
#include "PenFactory.h"

int main()
{
	Nib nib(0.3);
	Ink redInk("Red", InkType::SPARKLE);
	Ink blueInk("Blue", InkType::WATERPROOF);

	Refill redRefill(nib, redInk);
	Refill blueRefill(nib, blueInk);
	// Test various pens
	GelPen redGelPen("Red Reynolds", "Reynolds", 10.5, redRefill,
		std::make_unique<ClickClosingBehavior>());

	auto blueGelPen = PenFactory::CreatePen(PenType::GEL_PEN,
		"Blue Parker Pen",
		"Blue",
		"Parker", 5.6);

	auto redFountainPen = PenFactory::CreatePen(PenType::FOUNTAIN_PEN,
		"Hero Fountain Pen", "Black", "Hero", 10.6);

	redGelPen.Write();
	blueGelPen->Write();
	redFountainPen->Write();

	redGelPen.Close();
	blueGelPen->Close();
	redFountainPen->Close();
	return 0;
}
