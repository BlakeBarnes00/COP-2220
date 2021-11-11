#include <stdio.h>
#define new_card(...) \
	((Card) {__VA_ARGS__})

typedef struct {
	int number;
	char *face;
	char *suit;
} Card;

int main() {
	Card a = {
		.number = 7,
		.suit = "Hearts"
	};

	Card *b = &new_card (
		.number = 0,
		.face = "King",
		.suit = "Spades"
	);

	printf("%i of %s\n", a.number, a.suit);
	printf("%s of %s\n", b->face, b->suit);

	return 0;
}