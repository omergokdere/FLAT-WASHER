/* Computes the weight of a batch of flat washers. */

#include <stdio.h>
#define PI 3.14159

int main(void)
{
	double holeDiameter;  /*input - diameter of hole            */
	double edgeDiameter;  /*input - diameter of outer edge      */
	double thickness;     /*input - thickness of washer         */
	double density;       /*input - density of material used    */
	double quantity;      /*input - number of wasgers made      */
	double weight;        /*output - weight of waster batch     */
	double holeRadius;    /*radius of hole                      */
	double edgeRadius;    /*radius of outer edge                */
	double rimArea;       /*area of rim                         */
	double unitWeight;    /*weight of 1 washer                  */

	             /* Get the inner diameter, outer diameter, and thickness    */
	printf("\nInner diameter in centimeters -> ");
	scanf("%lf", &holeDiameter);
	printf("\nOuter diameter in centimeters -> ");
	scanf("%lf", &edgeDiameter);
	printf("\nThickness in centimeters -> ");
	scanf("%lf", &thickness);

	             /* Get the material density and quantity manucfactured      */
	printf("\nMaterial density in grams per cubic centimeter -> ");
	scanf("%lf", &density);
	printf("\nQuantity in batch -> ");
	scanf("%lf", &quantity);

	             /* Compute the rim area. */
	holeRadius = holeDiameter / 2.0;
	edgeRadius = edgeDiameter / 2.0;
	rimArea = PI * edgeRadius * edgeRadius - PI * holeRadius *holeRadius;

	             /* Compute the weight of flat washer */
	unitWeight = rimArea * thickness * density;
	             /* Compute the weight of the batch of washers.*/
	weight = unitWeight * quantity;
	             /* Display the weight of the batch of washers. */
	printf("\n\nThe expected weight of the batch is %.2f\n\n", weight);
	printf(" grams.\n\n");
	printf(" \n\n\n\n"
	      "	                                                    *****************\n"
          "			                                    * OMER GOKDERE  *\n"
          "	                                                    *****************\n");

	return 0;
}