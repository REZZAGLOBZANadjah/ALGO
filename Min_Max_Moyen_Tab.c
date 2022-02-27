/* Calcul du minimum, maximum et moyenne d'un tableau */

#include <stdio.h>

/* Saisie au clavier des elements d'un tableau */
void saisie(double *tab, int nb)
{
	int i;
	printf("\n");
	for (i=0; i<nb; i++)
	{
		printf ("Valeur de tab[%d] = ", i);
		scanf ("%lf", &tab[i]);
	}
	return;
}

/* Affichage des elements d'un tableau */
void affiche(double *tab, int nb)
{
	int i;
	printf("\n");
	for (i=0; i<nb; i++)
	{
		printf ("tab[%d] = %f\n", i, tab[i]);
	}
	printf("\n");
	return;
}

/* Calcul de la moyenne */
double calculer_moyenne (double *tab, int nb)
{
	double moyen, somme;
	int i;
	somme = 0;
	for (i=0; i<nb; i++)
	{
		somme = somme + tab[i];
	}
	moyen = somme / nb;
	return moyen;
}

/* pmin et pmax contiendront resp. le min et le max du tableau tab */
void chercher_min_max (double *tab, int nb, double *pmin, double *pmax)
{
	double val_min, val_max;
	int i;
	val_min = tab[0];
	val_max = tab[0];
	for (i=0; i<nb; i++)
	{
		if (tab[i] < val_min)
		{
			val_min = tab[i];
		}
		else if (tab[i] > val_max)
		{
			val_max = tab[i];
		}
	}
	*pmin = val_min;
	*pmax = val_max;
}

int main ()
{
	int nb_val;
	double min, max,moyenne, table [10];

	printf("Nombre d\'elements ? "); scanf ("%d", &nb_val);

	saisie(table, nb_val);
	affiche(table, nb_val);

	moyenne = calculer_moyenne(table, nb_val);
	printf("Moyenne = %f\n", moyenne);

	chercher_min_max(table, nb_val, &min, &max);
	printf ("Min = %f\tMax = %f\n", min, max);

	return 0;
}
