/*-------------------------------------------------------------------------------
 Multiscale Bernstein polynomial [msBP]
 bintree.h - Header for bintree.cpp
 Version 0.1 of September 2013
 2013 - Antonio Canale (antonio.canale@unito.it)
-------------------------------------------------------------------------------*/
// define the C++ binary tree struct
struct bintree
{
	double data;
	struct bintree *left;
	struct bintree *right;
};
struct bintree *newtree(double data); 
struct bintree* writeNode(struct bintree *tree, double x, int s, int h);
double extractNode(struct bintree *tree, int s, int h, double ifempty);
void tree2array(struct bintree *node, double *array, int maxScale, double ifempty);
void array2tree(double *a, int maxScale, struct bintree *node);
void printTree(struct bintree *node, int maxS);
int maxDepth(struct bintree *node);
void clearTree(struct bintree *node);
void deleteTree(struct bintree *node);
