#include "stm32f4xx.h"
#include <string.h>

int convert_caracter(int recebido, int indice_cover, int mat_show[]) { // se nao funfa, troca pra char
	int aux;
	switch (recebido) {
	case ('a'): {
		int a[] = { 0x3FFC, 0xC4, 0xC4, 0xC4, 0xC4, 0x3FFC, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = a[aux];
			indice_cover++;
		}
		break;
	}
	case ('b'): {
		int b[] = { 0x3FFC, 0x2200, 0x2200, 0x2200, 0x2200, 0x3E00, 0x0, 0x0,
				0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = b[aux];
			indice_cover++;
		}
		break;
	}
	case ('c'): {
		int c[] = { 0x3FFC, 0x3FFC, 0x300C, 0x300C, 0x300C, 0x300C, 0x0, 0x0,
				0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = c[aux];
			indice_cover++;
		}
		break;
	}
	case ('d'): {
		int d[] = { 0x3E00, 0x2200, 0x2200, 0x2200, 0x2200, 0x3FFC, 0x0, 0x0,
				0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = d[aux];
			indice_cover++;
		}
		break;
	}
	case ('e'): {
		int e[] = { 0x3FFC, 0x2184, 0x2184, 0x2184, 0x2184, 0x2184, 0x0, 0x0,
				0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = e[aux];
			indice_cover++;
		}
		break;
	}
	case ('f'): {
		int f[] = { 0x3FFC, 0x18C, 0x18C, 0x18C, 0xC, 0xC, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = f[aux];
			indice_cover++;
		}
		break;
	}
	case ('g'): {
		int g[] = { 0x3FFC, 0x200C, 0x218C, 0x218C, 0x218C, 0x3F8C, 0x0, 0x0,
				0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = g[aux];
			indice_cover++;
		}
		break;
	}
	case ('h'): {
		int h[] = { 0x3FFC, 0xC0, 0xC0, 0xC0, 0xC0, 0x3FFC, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = h[aux];
			indice_cover++;
		}
		break;
	}
	case ('i'): {
		int i[] = { 0x2004, 0x2004, 0x3FFC, 0x3FFC, 0x2004, 0x2004, 0x0, 0x0,
				0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = i[aux];
			indice_cover++;
		}
		break;
	}
	case ('j'): {
		int j[] =
				{ 0xC00, 0x1000, 0x2000, 0x2000, 0x1000, 0xFFC, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = j[aux];
			indice_cover++;
		}
		break;
	}
	case ('k'): {
		int k[] = { 0x3FFC, 0x180, 0x180, 0x180, 0x240, 0x3E7C, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = k[aux];
			indice_cover++;
		}
		break;
	}
	case ('l'): {
		int l[] = { 0x3FFC, 0x3FFC, 0x3000, 0x3000, 0x3000, 0x3000, 0x0, 0x0,
				0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = l[aux];
			indice_cover++;
		}
		break;
	}
	case ('m'): {
		int m[] = { 0x3FFC, 0x8, 0x3F0, 0x3F0, 0x8, 0x3FFC, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = m[aux];
			indice_cover++;
		}
		break;
	}
	case ('n'): {
		int n[] = { 0x3FFC, 0x8, 0xF0, 0xF80, 0x1000, 0x3FFC, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = n[aux];
			indice_cover++;
		}
		break;
	}
	case ('o'): {
		int o[] = { 0x3FFC, 0x2004, 0x2004, 0x2004, 0x2004, 0x3FFC, 0x0, 0x0,
				0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = o[aux];
			indice_cover++;
		}
		break;
	}
	case ('p'): {
		int p[] = { 0x3FFC, 0x44, 0x44, 0x44, 0x44, 0x7C, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = p[aux];
			indice_cover++;
		}
		break;
	}
	case ('q'): {
		int q[] = { 0x3FFC, 0x2004, 0x3004, 0x6004, 0xA004, 0x3FFC, 0x0, 0x0,
				0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = q[aux];
			indice_cover++;
		}
		break;
	}
	case ('r'): {
		int r[] = { 0x3FFC, 0x44, 0x44, 0x3C4, 0xE44, 0x307C, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = r[aux];
			indice_cover++;
		}
		break;
	}
	case ('s'): {
		int s[] = { 0x21FC, 0x2184, 0x2184, 0x2184, 0x2184, 0x3F84, 0x0, 0x0,
				0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = s[aux];
			indice_cover++;
		}
		break;
	}
	case ('t'): {
		int t[] = { 0xC, 0xC, 0x3FFC, 0x3FFC, 0xC, 0xC, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = t[aux];
			indice_cover++;
		}
		break;
	}
	case ('u'): {
		int u[] = { 0x3FFC, 0x3000, 0x3000, 0x3000, 0x3000, 0x3FFC, 0x0, 0x0,
				0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = u[aux];
			indice_cover++;
		}
		break;
	}
	case ('v'): {
		int v[] =
				{ 0x7FC, 0x1E00, 0x3000, 0x3000, 0x1E00, 0x7FC, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = v[aux];
			indice_cover++;
		}
		break;
	}
	case ('w'): { // need testing
		int w[] = { 0xFFC, 0x800, 0x3F00, 0x3F00, 0x800, 0xFFC, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = w[aux];
			indice_cover++;
		}
		break;
	}
	case ('x'): {
		int x[] = { 0x381C, 0xE70, 0x3C0, 0x3C0, 0xE70, 0x381C, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = x[aux];
			indice_cover++;
		}
		break;
	}
	case ('y'): {
		int y[] = { 0x3C, 0x1E0, 0x3F80, 0x3F80, 0x1E0, 0x3C, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = y[aux];
			indice_cover++;
		}
		break;
	}
	case ('z'): { // needs testing
		int z[] = { 0x3E0C, 0x3F0C, 0x318C, 0x318C, 0x30FC, 0x307C, 0x0, 0x0,
				0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = z[aux];
			indice_cover++;
		}
		break;
	}
	case (' '): { //space
		int space = 0x0;
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = space;
			indice_cover++;
		}
		break;
	}
	case ('0'): {
		int zero[] = { 0x3FFC, 0x2004, 0x2004, 0x2004, 0x2004, 0x3FFC, 0x0, 0x0,
				0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = zero[aux];
			indice_cover++;
		}
		break;
	}
	case ('1'): {
		int one[] = { 0x60, 0x30, 0x18, 0xC, 0x3FFC, 0x3FFC, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = one[aux];
			indice_cover++;
		}
		break;
	}
	case ('2'): {
		int two[] = { 0x3E0C, 0x3F0C, 0x318C, 0x318C, 0x30FC, 0x307C, 0x0, 0x0,
				0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = two[aux];
			indice_cover++;
		}
		break;
	}
	case ('3'): {
		int three[] = { 0x318C, 0x318C, 0x318C, 0x318C, 0x318C, 0x3FFC, 0x0,
				0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = three[aux];
			indice_cover++;
		}
		break;
	}
	case ('4'): {
		int four[] =
				{ 0x1E0, 0x1B0, 0x198, 0x18C, 0x3FFC, 0x180, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = four[aux];
			indice_cover++;
		}
		break;
	}
	case ('5'): {
		int five[] = { 0x21FC, 0x2184, 0x2184, 0x2184, 0x2184, 0x3F84, 0x0, 0x0,
				0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = five[aux];
			indice_cover++;
		}
		break;
	}
	case ('6'): {
		int six[] = { 0x3FFC, 0x318C, 0x318C, 0x318C, 0x318C, 0x3F8C, 0x0, 0x0,
				0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = six[aux];
			indice_cover++;
		}
		break;
	}
	case ('7'): { //needs testing
		int seven[] = { 0x3C, 0x3C, 0xC, 0xC, 0x3FFC, 0x3FFC, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = seven[aux];
			indice_cover++;
		}
		break;
	}
	case ('8'): {
		int eight[] = { 0x3FFC, 0x318C, 0x318C, 0x318C, 0x318C, 0x3FFC, 0x0,
				0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = eight[aux];
			indice_cover++;
		}
		break;
	}
	case ('9'): {
		int nine[] = { 0x31FC, 0x318C, 0x318C, 0x318C, 0x318C, 0x3FFC, 0x0, 0x0,
				0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = nine[aux];
			indice_cover++;
		}
		break;
	}
	case ('?'): {
		int interrogation[] = { 0x1C, 0x1C, 0x3384, 0x33C4, 0xFC, 0x7C, 0x0, 0x0, 0x0};
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = interrogation[aux];
			indice_cover++;
		}
		break;
	}
	case ('!'): {
		int exclamation[] =
				{ 0x33FC, 0x33FC, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = exclamation[aux];
			indice_cover++;
		}
		break;
	}
	case ('>'): {
		int bigger[] = { 0x0, 0x840, 0xCC0, 0x380, 0x100, 0x0, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = bigger[aux];
			indice_cover++;
		}
		break;
	}
	case ('<'): {
		int smaller[] = { 0x0, 0x100, 0x380, 0xCC0, 0x840, 0x0, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = smaller[aux];
			indice_cover++;
		}
		break;
	}
	case ('('): {
		int par_left[] =
				{ 0x0, 0x7E0, 0xFF0, 0x1818, 0x1008, 0x0, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = par_left[aux];
			indice_cover++;
		}
		break;
	}
	case (')'): {
		int par_right[] = { 0x0, 0x1008, 0x1818, 0xFF0, 0x7E0, 0x0, 0x0, 0x0,
				0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = par_right[aux];
			indice_cover++;
		}
		break;
	}
	case (':'): {
		int two_dots[] = { 0xC30, 0xC30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = two_dots[aux];
			indice_cover++;
		}
		break;
	}
	case (';'): {
		int dot_comma[] = { 0x1800, 0x1C30, 0xC30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = dot_comma[aux];
			indice_cover++;
		}
		break;
	}
	case ('.'): {
		int dot[] = { 0x3000, 0x3000, 0x0, 0x0, 0x0, 0x0 , 0x0, 0x0, 0x0};
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = dot[aux];
			indice_cover++;
		}
		break;
	}
	case (','): {
		int comma[] = { 0xF000, 0xF000, 0x0, 0x0, 0x0, 0x0 , 0x0, 0x0, 0x0};
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = comma[aux];
			indice_cover++;
		}
		break;
	}
	case ('='): {
		int equals[] =
				{ 0xCC0, 0xCC0, 0xCC0, 0xCC0, 0xCC0, 0xCC0, 0x0, 0x0, 0x0 };
		for (aux = 0; aux < 9; aux++) {
			mat_show[indice_cover] = equals[aux];
			indice_cover++;
		}
		break;
	}

	case ('@'): {
		for (aux = 0; aux < 180; aux++) {
			mat_show[aux] = 0;
		}
		indice_cover = 0;
		break;
	}
	}
	return (indice_cover);
}
