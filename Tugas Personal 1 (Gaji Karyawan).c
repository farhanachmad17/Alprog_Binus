#include <stdio.h>
#include <string.h> //for using strcasecmp
#include <strings.h> //for using strcasecmp

int
main ()
{
  /*Inisialisasi*/
  char Nama[30];
  int Gapok;
  int Jabatan_1;
  int Jabatan_2;
  int Jabatan_3;
  int Jabatan;
  char Pendidikan[5];
  int Pendidikan_SMA;
  int Pendidikan_D3;
  int Pendidikan_S1;
  int Jam_Kerja;
  int Lembur;
  int Semi_Total;
  int Total;

   /*Variabel Input*/
  Gapok = 2000000;
  Jabatan_1 = Gapok * 5 / 100;
  Jabatan_2 = Gapok * 10 / 100;
  Jabatan_3 = Gapok * 15 / 100;
  Pendidikan_SMA = Gapok * 2.5 / 100;
  Pendidikan_D3 = Gapok * 5 / 100;
  Pendidikan_S1 = Gapok * 10 / 100;

  /*Input*/
  printf ("PROGRAM HITUNG GAJI KARYAWAN\n");

  printf ("Nama Karyawan : ");        //Masukkan Nama 
  scanf("%[^\n]%*c", Nama);

  printf ("Golongan Jabatan : ");     //Masukkan Jabatan dengan value 1 atau 2 atau 3
  scanf ("%d", &Jabatan);

  printf ("Pendidikan : ");           //Masukkan Pendidikan dengan value SMA atau D3 atau S1
  scanf("%s", Pendidikan);

  printf ("Jumlah Jam Kerja : ");     //Masukan jam kerja dalam sehari
  scanf ("%d", &Jam_Kerja);

  /*Output*/
  //Deklarasi hitungan Lembur
  Lembur = (Jam_Kerja - 8) * 3000 * 25;
 
  //Nama Karyawan
  printf ("\nNama Karyawan %s", Nama);

  //Tunjangan Jabatan
  if (Jabatan == 1)
    {
      printf ("\n    Tunjangan Jabatan Rp %d", Jabatan_1);
      Semi_Total = Gapok + Jabatan_1;
    }
  if (Jabatan == 2)
   {
      printf ("\n    Tunjangan Jabatan Rp %d", Jabatan_2);
      Semi_Total = Gapok + Jabatan_2;
    }
  if (Jabatan == 3)
    {
      printf ("\n    Tunjangan Jabatan Rp %d", Jabatan_3);
      Semi_Total = Gapok + Jabatan_3;
    }

  //Tunjangan Pendidikan
  if (strcasecmp (Pendidikan, "SMA") == 0)
    {
      printf ("\n    Tunjangan Pendidikan Rp %d", Pendidikan_SMA);
      Total = Semi_Total + Pendidikan_SMA + Lembur;
    }
  if (strcasecmp (Pendidikan, "D3") == 0)
    {
      printf ("\n    Tunjangan Pendidikan Rp %d", Pendidikan_D3);
      Total = Semi_Total + Pendidikan_D3 + Lembur;
    }
  if (strcasecmp (Pendidikan, "S1") == 0)
    {
      printf ("\n    Tunjangan Pendidikan Rp %d", Pendidikan_S1);
      Total = Semi_Total + Pendidikan_S1 + Lembur;
    }

  //Honor Lembur
  printf ("\n    Honor Lembur Rp %d", Lembur);

  //Total Gaji
  printf ("\nTotal Gaji yang dibayarkan Rp %d", Total);

  return 0;
}
