#define COMMENTCOUNT 3

struct BlogComment {
	char *comment;
	int like, dislike;
};

int main() {
	const int nComments = COMMENTCOUNT;
	struct BlogComment blogComments[nComments] = {
		[0] = (struct BlogComment) {
			"A", 5, 3
		},
		[1] = (struct BlogComment) {
			"B", 7, 1
		},
		[2] = (struct BlogComment) {
			"C", 3, 2
		}
	};
	
	char *mostControversial;
	int top_count = 0;
	for(int i = 0; i <= nComments; i++) {
		if(blogComments[i].like * blogComments[i].dislike > blogComments[top_count].like * blogComments[top_count].dislike) {
			top_count = i;
		}
		mostControversial = blogComments[top_count].comment;
	}


	return 0;
}
