#include <stdio.h>

// you buy 41112 Lego blocks with a price of kr. 11,48 without moms
// make a invoice, where all the numbers are nice lined up under each other.
// Number.
// Price each without moms.
// total cost without moms.
// moms
// total price all inclusive(moms is a tax of 25 %).

void exercise1(){

    printf("---------------------Exercise-One--------------------\n\n");

    double legoPrice = 11.48;
    int legPiecesBought = 41112;
    double momsMultiplier = 1.25;

    double totalPriceNoMoms = legoPrice*legPiecesBought;
    double totalPriceWithMoms = totalPriceNoMoms*momsMultiplier;
    double momsPrice = totalPriceWithMoms-totalPriceNoMoms;

    printf("--------------------RECEIPT-START--------------------\n");
    printf("Item: %s %24s %9.2fkr\n","Lego Piece", "price :",legoPrice);
    printf("%15s %d %19s %.2fkr\n\n","Quantity: ", legPiecesBought, "total price :", totalPriceNoMoms);
    printf("%41s %.2fkr\n","Moms :", momsPrice);
    printf("%41s %.2fkr\n","Total with Moms :", totalPriceWithMoms);
    printf("---------------------RECEIPT-END---------------------\n");

    printf("\n------------------End-Exercise-One-------------------\n\n\n");
}
