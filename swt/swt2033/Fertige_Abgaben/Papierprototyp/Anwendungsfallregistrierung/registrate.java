import java.util.*;



class User{
  string Vorname;
  string Nachname;
  string email;
  string Benutzername;
  string passwort;
  public User  (string Vorname, string Nachname, string email, string Benutzername, string passwort){
    this.Vorname = Vorname;
    this.Nachname = Nachname;
    this. email = email;
    this.Benutzername = Benutzername;
    this.passwort = passwort;



  }
public void speichere (User user ){
  // Datenbank- / Sqlaufruf oder so etwas
}
}
public class registrate throws NullPointerException{
  List<string> Usernames; //enthält alle Nutzernamen, zur Bestimmung der eindeutigkeit
  public static User registrate(string Vorname, string Nachname, string email, string Benutzername, string passwort, string passwordrepeat) //Die Funktion, die passiert, nachdem

  {
    if(Vorname ==null || Vorname =="" ){
      System.out.println("Vorname fehlt.");
      throw new NullPointerException("Eingabe unvollständig.");
      return null;
    }
    else if(Nachname ==null Nachname ==""){
      System.out.println("Nachname fehlt.");
      throw new NullPointerException("Eingabe unvollständig.");
      return null;
    }
    else if(email ==null || email =="" || !email.Contains("@") ){
      System.out.println("Email fehlt oder ist ungültig.");
      throw new NullPointerException("Eingabe unvollständig.");
      return null ;
    }
    else if(Benutzername ==null || Benutzername =="" ){   //ist eindeutig
      throw new NullPointerException("Eingabe unvollständig.");
      return null ;
    }
    else if(passwort ==null || passwort.length <4){
      System.out.println("Password fehlt oder ist zu kurz.");
      throw new NullPointerException("Eingabe unvollständig.");

      return null ;
    }
    else if(passwordrepeat != passwort){
      System.out.println("Passwort und Passwortwiederholung sind nicht falsch.");
      throw new NullPointerException("Passwortwiederholung falsch.");

      return null;
    }
    List.add(Benutzername);
    User user = new User( Vorname, Nachname, email, Benutzername, passwort) ;
    speichere()
  }
}
