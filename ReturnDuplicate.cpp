public static void main(String[] args) {
    int[] num = {1,3,4,2,1,2,4};
    String str = duplicate(num);
    System.out.println(str);
  }
  
  public static String duplicate(int[] numbers){
     Set<Integer> hs = new HashSet<Integer>();
    Set<Integer> ts = new TreeSet<Integer>();
    for(int i = 0; i < numbers.length; i++)
    {
        if(hs.contains(numbers[i]))
        {
            ts.add(numbers[i]);
        }
        hs.add(numbers[i]);
    }
    return ts.toString();
}