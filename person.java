interface person{
  String getName ();
  void setName(String name);

  int getAge ();
  void getAge(int a);

  void walk();
  void run();

}

  class student implements person{
private String name;
private int age;

@Override
public String getName(){
  return name;
}

@Override
public void setName(String n){
  this.name=n;
}

@Override
public int getAge(){
    int Age = 0;
  return Age ;
}


public void setAge(int a){
  this.age=a;
} 

@Override
public void walk(){
  System.out .println(name +" is walking to class");

}

@Override
public void run(){
  System.out .println(name +" is running to class");
}
}

 class teacher implements person{
  private String name;
  private int age;

@Override
public String getName(){
  return name;
}

@Override
public void setName(String n){
  this.name=n;
}

@Override
public int getAge(){
  return age ;
}

public void setAge(int a){
  this.age=a;
} 
@Override
public void walk(){
  System.out .println(name +" is walking to room");

}

@Override
public void run(){
  System.out .println(name +" is running to the morning exercise");
}

@Override
  
    public void getAge(int a) {
        throw new UnsupportedOperationException("Not supported yet.");
    }
}

public class test{
  public static void main(String []agrs){
    student s =new student();
    s.setName("Akhi");
    s.setAge(20);
    s.walk();
    s.run();
  
  teacher t =new teacher ();
  t.setName("Md shadat");
  t.setAge(33);
  t.walk();
  t.run();
}
}