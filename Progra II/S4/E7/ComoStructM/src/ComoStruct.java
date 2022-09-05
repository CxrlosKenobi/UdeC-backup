public class ComoStruct {
    public static void main(String[] args) {
        ComoStructM cs = new ComoStructM();

        int [] first = cs.ar[0];
        int [] last = cs.ar[cs.ar.length-1];

        for (int i=0; i < first.length; i++) {
            int temp0 = first[i];
            int temp1 = last[i];

            cs.ar[0][i] = temp1;
            cs.ar[cs.ar.length-1][i] = temp0;
        }

        for (int i=0; i < cs.ar.length; i++) {
            for (int j=0; j < cs.ar[i].length; j++) {
                if (j != cs.ar[i].length-1)
                    System.out.print(cs.ar[i][j] + ",");
                else
                    System.out.print(cs.ar[i][j] + "\n");
            }
        }
    }
}

class ComoStructM {
    int [][] ar = {{3,2,0,-1,-2},{4,8,1,-3,-4},{6,9,5,-9,-7}};
}