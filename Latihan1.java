import java.util.Scanner;
public class Latihan1 {
    public static void main(String Args[]) {
        char[] g = {'E','D','C','B','A'};
        int[][] f = {{9,8}, {7,6}, {5,4}};
        int jam=1;

        System.out.println("ARRAY 1D & Perulangan for");
        for(int a=0; a<5; a++){        //perulangan For & array 1D
            System.out.println("Index " + a + " = " + g[a]);
        }

        System.out.println("ARRAY 2D");
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<2;k++)
            {
                System.out.print(f[j][k] + "\t");
            }
            System.out.println();
        }

        Scanner input = new Scanner(System.in);
        System.out.println("Percabangan If");
        System.out.print("Masukkan Angka (1-10) : ");
        int angka = input.nextInt();                //Input
        System.out.println(" Angka : " + angka);  //output

        if (angka % 2 == 0) {
            System.out.println("Bilangan Genap");
        } else {
            System.out.println("Bilangan Ganjil");
        }


        int b = 0;
        while (b < 5) { //While
            System.out.println("Konversi jam!");
            b++;
        }
        int e = 0;
        do { //Do while
            int m = jam * 60;
            int d = m * 60;
            System.out.println(jam + " Jam " + m + " Menit " + d + " Detik");
            jam ++;
            e++;
        }
        while (e < 3);
    }
}