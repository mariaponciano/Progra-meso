/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.ejercicioclase;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter; 
import java.io.IOException;
import java.util.Scanner;

/**
 *
 * @author Dell
 */
public class Ejercicioclase {

    public static void main(String[] args) {
        Scanner dato = new Scanner (System.in);
        File archivo = new File ("archivo.txt");
        try (BufferedWriter bw = new BufferedWriter ( new FileWriter (archivo))){
         System.out.println ("Ingrese su nombre");
         String nombre = dato.next ();
         bw.write (nombre);
        } 
        catch ( IOException e) {
            e.printStackTrace();
        } 
       
        
    }
}
