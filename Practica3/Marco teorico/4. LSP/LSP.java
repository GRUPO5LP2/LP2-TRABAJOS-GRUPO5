public class Animal {
  public void comer() {
      System.out.println("El animal esta comiendo.");
  }
}

public class Mamifero extends Animal {
  public void amamantar() {
      System.out.println("El mamifero esta amamantando.");
  }
}

public class Ave extends Animal {
  public void volar() {
      System.out.println("El ave esta volando.");
  }
}

public class Perro extends Mamifero {
  public void ladrar() {
      System.out.println("El perro esta ladrando.");
  }
}

public class Pajaro extends Ave {
  public void cantar() {
      System.out.println("El pajaro esta cantando.");
  }
}

Animal animal1 = new Animal();
Mamifero mamifero1 = new Mamifero();
Ave ave1 = new Ave();
Perro perro1 = new Perro();
Pajaro pajaro1 = new Pajaro();

animal1.comer();
mamifero1.comer();
mamifero1.amamantar();
ave1.comer();
ave1.volar();
perro1.comer();
perro1.ladrar();
pajaro1.comer();
pajaro1.volar();
pajaro1.cantar();
