public class LostProject {
    String name;
    int id;
    static String University = "KU";

    LostProject(String n, int i) {
        name = n;
        id = i;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("ID: " + id);
    }

    public static void main(String[] args) { // Move main here or outside as a separate class
        LostProject l = new LostProject("John Doe", 123);
        l.display();
        System.out.println("University_name : " + LostProject.University);
    }
}
