#include <stdio.h>
//menghitung bangun datar
int main()
{
	int angka;
	printf("		Menghitung Keliling dan Luas Bangun Datar\n");
	printf("		=========================================\n\n");
	
	while(1)
	{
		printf("Bangun Datar:\n");
		printf("1. Persegi\n");
		printf("2. Persegi Panjang\n");
		printf("3. Jajar Genjang\n");
		printf("4. Trapesium\n");
		printf("5. Belah Ketupat\n");
		printf("6. Layang-layang\n");
		printf("7. Segitiga\n");
		printf("8. Lingkaran\n");
		
		do
		{
			printf("Pilih Bangun Datar: ");
			scanf("%d", &angka);
			getchar();
			printf("\n");
		}while(angka>8 || angka<=0);
		
		switch(angka)
		{
			case 1 :
				{
					printf("PERSEGI\n");
					printf("K / L: ");
					char x = 'K' || 'L'; 
					scanf("%c", &x);
					getchar();
					int s;
					long long int K, L;
					if(x=='K')
					{
						printf("Keliling = 4 x Sisi\n");
						printf("Sisi = ");
						scanf("%d", &s);
						getchar();
						printf("...\n");
						K = 4*s;
						printf("Keliling = 4 x %d\n", s);
						printf("Keliling = %lld\n", K);
						break;
					}
					else if(x=='L')
					{
						printf("Luas = Sisi x Sisi\n");
						printf("Sisi = ");
						scanf("%d", &s);
						getchar();
						printf("...\n");
						L = s*s;
						printf("Luas = %d x %d\n", s, s);
						printf("Luas = %lld\n", L);
						break;
					}
				}
			case 2 :
				{
					printf("PERSEGI PANJANG\n");
					printf("K / L: ");
					char x = 'K' || 'L'; 
					scanf("%c", &x);
					getchar();
					int p, l;
					long long int K, L;
					if(x=='K')
					{
						printf("Keliling = 2 x (Panjang + Lebar)\n");
						printf("Panjang = ");
						scanf("%d", &p);
						getchar();
						printf("Lebar = ");
						scanf("%d", &l);
						getchar();
						printf("...\n");
						K = 2*(p+l);
						printf("Keliling = 2 x (%d + %d)\n", p, l);
						printf("Keliling = %lld\n", K);
						break;
					}
					else if(x=='L')
					{
						printf("Luas = Panjang x Lebar\n");
						printf("Panjang = ");
						scanf("%d", &p);
						getchar();
						printf("Lebar = ");
						scanf("%d", &l);
						getchar();
						printf("...\n");
						L = p*l;
						printf("Luas = %d x %d\n", p, l);
						printf("Luas = %lld\n", L);
						break;
					}
				}
			case 3 :
				{
					printf("JAJAR GENJANG\n");
					printf("K / L: ");
					char x = 'K' || 'L'; 
					scanf("%c", &x);
					getchar();
					int p, l, a, t;
					long long int K, L;
					if(x=='K')
					{
						printf("Keliling = 2 x (Panjang + Lebar)\n");
						printf("Panjang = ");
						scanf("%d", &p);
						getchar();
						printf("Lebar = ");
						scanf("%d", &l);
						getchar();
						printf("...\n");
						K = 2*(p+l);
						printf("Keliling = 2 x (%d + %d)\n", p, l);
						printf("Keliling = %lld\n", K);
						break;
					}
					else if(x=='L')
					{
						printf("Luas = Alas x Tinggi\n");
						printf("Alas = ");
						scanf("%d", &a);
						getchar();
						printf("Tinggi = ");
						scanf("%d", &t);
						getchar();
						printf("...\n");
						L = a*t;
						printf("Luas = %d x %d\n", a, t);
						printf("Luas = %lld\n", L);
						break;
					}
				}
			case 4 :
				{
					printf("TRAPESIUM\n");
					printf("K / L: ");
					char x = 'K' || 'L'; 
					scanf("%c", &x);
					getchar();
					int s1, s2, s3, s4, t;
					long long int K, L;
					if(x=='K')
					{
						printf("Keliling = Sisi 1 + Sisi 2 + Sisi 3 + Sisi 4\n");
						printf("Sisi 1 = ");
						scanf("%d", &s1);
						getchar();
						printf("Sisi 2 = ");
						scanf("%d", &s2);
						getchar();
						printf("Sisi 3 = ");
						scanf("%d", &s3);
						getchar();
						printf("Sisi 4 = ");
						scanf("%d", &s4);
						getchar();
						printf("...\n");
						K = s1+s2+s3+s4;
						printf("Keliling = %d + %d + %d + %d\n", s1, s2, s3, s4);
						printf("Keliling = %lld\n", K);
						break;
					}
					else if(x=='L')
					{
						printf("Luas = (Sisi 1 + Sisi 2) x Tinggi/2\n");
						printf("Sisi 1 = ");
						scanf("%d", &s1);
						getchar();
						printf("Sisi 2 = ");
						scanf("%d", &s2);
						getchar();
						printf("Tinggi = ");
						scanf("%d", &t);
						getchar();
						printf("...\n");
						L = (s1+s2)*t/2;
						printf("Luas = (%d + %d) x %d/2\n", s1, s2, t);
						printf("Luas = %lld\n", L);
						break;
					}
				}
			case 5 :
				{
					printf("BELAH KETUPAT\n");
					printf("K / L: ");
					char x = 'K' || 'L'; 
					scanf("%c", &x);
					getchar();
					int s, d1, d2;
					long long int K, L;
					if(x=='K')
					{
						printf("Keliling = 4 x Sisi\n");
						printf("Sisi = ");
						scanf("%d", &s);
						getchar();
						printf("...\n");
						K = 4*s;
						printf("Keliling = 4 x %d\n", s);
						printf("Keliling = %lld\n", K);
						break;
					}
					else if(x=='L')
					{
						printf("Luas = Diagonal 1 x Diagonal 2/2\n");
						printf("Diagonal 1 = ");
						scanf("%d", &d1);
						getchar();
						printf("Diagonal 2 = ");
						scanf("%d", &d2);
						getchar();
						printf("...\n");
						L = d1*d2/2;
						printf("Luas = %d x %d/2\n", d1, d2);
						printf("Luas = %lld\n", L);
						break;
					}
				}
			case 6 :
				{
					printf("LAYANG-LAYANG\n");
					printf("K / L: ");
					char x = 'K' || 'L'; 
					scanf("%c", &x);
					getchar();
					int p, l, d1, d2;
					long long int K, L;
					if(x=='K')
					{
						printf("Keliling = 2 x (Panjang + Lebar)\n");
						printf("Panjang = ");
						scanf("%d", &p);
						getchar();
						printf("Lebar = ");
						scanf("%d", &l);
						getchar();
						printf("...\n");
						K = 2*(p+l);
						printf("Keliling = 2 x (%d + %d)\n", p, l);
						printf("Keliling = %lld\n", K);
						break;
					}
					else if(x=='L')
					{
						printf("Luas = Diagonal 1 x Diagonal 2/2\n");
						printf("Diagonal 1 = ");
						scanf("%d", &d1);
						getchar();
						printf("Diagonal 2 = ");
						scanf("%d", &d2);
						getchar();
						printf("...\n");
						L = d1*d2/2;
						printf("Luas = %d x %d/2\n", d1, d2);
						printf("Luas = %lld\n", L);
						break;
					}
				}
			case 7 :
				{
					printf("SEGITIGA\n");
					printf("K / L: ");
					char x = 'K' || 'L'; 
					scanf("%c", &x);
					getchar();
					int s1, s2, s3, a, t;
					long long int K, L;
					if(x=='K')
					{
						printf("Keliling = Sisi 1 + Sisi 2 + Sisi 3\n");
						printf("Sisi 1 = ");
						scanf("%d", &s1);
						getchar();
						printf("Sisi 2 = ");
						scanf("%d", &s2);
						getchar();
						printf("Sisi 3 = ");
						scanf("%d", &s3);
						getchar();
						printf("...\n");
						K = s1+s2+s3;
						printf("Keliling = %d + %d + %d\n", s1, s2, s3);
						printf("Keliling = %lld\n", K);
						break;
					}
					else if(x=='L')
					{
						printf("Luas = Alas x Tinggi/2\n");
						printf("Alas = ");
						scanf("%d", &a);
						getchar();
						printf("Tinggi = ");
						scanf("%d", &t);
						getchar();
						printf("...\n");
						L = a*t/2;
						printf("Luas = %d x %d/2\n", a, t);
						printf("Luas = %lld\n", L);
						break;
					}
				}
			case 8 :
				{
					printf("LINGKARAN\n");
					printf("K / L: ");
					char x = 'K' || 'L'; 
					scanf("%c", &x);
					getchar();
					int r;
					double pi = 3.14;
					double K, L;
					if(x=='K')
					{
						printf("Keliling = 2 x pi x Jari-jari\n");
						printf("pi = 3.14\n");
						printf("Jari-jari = ");
						scanf("%d", &r);
						getchar();
						printf("...\n");
						K = 2*pi*r;
						printf("Keliling = 2 x 3.14 x %d\n", r);
						printf("Keliling = %.2lf\n", K);
						break;
					}
					else if(x=='L')
					{
						printf("Luas = pi x Jari-jari^2\n");
						printf("pi = 3.14\n");
						printf("Jari-jari = ");
						scanf("%d", &r);
						getchar();
						printf("...\n");
						L = pi*r*r;
						printf("Luas = 3.14 x %d^2\n", r);
						printf("Luas = %.2lf\n", L);
						break;
					}
				}
				
		}
		printf("Press Enter To Continue...");
		getchar();
		printf("\n");
	}

 	return 0;
}

