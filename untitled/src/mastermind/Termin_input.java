package mastermind;

public class Termin_input {
    public static String[] terminal_num(String[] secret_number) {
        String number = "";
        if (secret_number.length != 0) {
            for (int i = 0; i < secret_number.length; i++) {
                if (secret_number[i].equals("-c")) {
                    number += secret_number[i + 1];
                }
            }
            String[] secret_num = number.split("");
            return secret_num;
        } else {
            return secret_number;
        }
    }

    public static int round(String[] secret_number, int rounds) {
        String round_num = "10";
        if (secret_number.length != 0) {
            for (int i = 0; i < secret_number.length; i++) {
                if (secret_number[i].equals("-t")) {
                    round_num = secret_number[i + 1];
                }
            }
            rounds = Integer.parseInt(round_num);
            return rounds;
        } else {
            rounds = Integer.parseInt(round_num);
            return rounds;
        }
    }
}
