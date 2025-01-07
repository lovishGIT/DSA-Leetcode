class Solution {
    class Comp implements Comparator<String> {
        @Override 
        public int compare(String a, String b) {
            if(a.length() > b.length()) return -1;
            else if (a.length() < b.length()) return 1;
            return 0;
        }
    }
    public List<String> stringMatching(String[] words) {
        List<String> answers = new ArrayList<>();
        Arrays.sort(words, new Comp());
        // System.out.print(Arrays.toString(words));

        String dumped = "";
        for(String str: words) {
            if(dumped.contains(str)) {
                answers.add(str);
            } else {
                dumped += str;
            }
        }

        return answers;
    }
}