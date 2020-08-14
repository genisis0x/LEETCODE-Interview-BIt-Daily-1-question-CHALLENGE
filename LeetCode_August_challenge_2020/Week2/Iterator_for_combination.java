class CombinationIterator {
    String characters;
    int combinationLength;
    int[] pointers;
    public CombinationIterator(String characters, int combinationLength) {
        this.pointers = new int[combinationLength];
        this.combinationLength = combinationLength;
        this.characters = characters;
        for (int i = 0; i < combinationLength; i++) {
            pointers[i] = i;
        }
    }
    
    public String next() {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < combinationLength; i++) {
            sb.append(characters.charAt(pointers[i]));
        }
        int i = combinationLength - 1;
        while (i > 0 && pointers[i] == characters.length() - (combinationLength - i)) {
            i--;
        }
        pointers[i]++;
        for (int j = i + 1; j < combinationLength; j++) {
            pointers[j] = pointers[j - 1] + 1;
        }
        return sb.toString();
    }
    
    public boolean hasNext() {
        if (pointers[0] > characters.length() - combinationLength) {
            return false;
        }
        return true;
    }
}
