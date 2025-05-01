//Problem: 6. Zigzag Conversion
//Difficulty: Meidum
//Link : https://leetcode.com/problems/zigzag-conversion/description/
//Author: solomer

char* convert(char* s, int numRows) {
  if (numRows == 1 || strlen(s) <= numRows) {
      return s;
  }
  int length = 3*strlen(s)/numRows ;
  char array[numRows][length];
  for (int i = 0; i < numRows; i++) {
      for (int j = 0; j < length; j++) {
          array[i][j] = ' ';
      }
  }
  int i = 0;
  int j = 0;
  int k = 0;
  int c = 0;
  array[i][j] = s[k];
  while (1) {
      if (k == strlen(s) - 1) {
          break;
      }
      if (i == 0) {
          j++;
          for (int a = 0; a < numRows - 1 && k < strlen(s) - 1; a++) {
              i++;
              k++;
              array[i][j] = s[k];
          }
      }
      if (i == numRows - 1) {
              j++;
          for (int a = 0; a < numRows - 1 && k < strlen(s) - 1; a++) {
              i--;
              k++;
              array[i][j] = s[k];
          }
      }
  }
  k = 0;
  for (int i = 0; i < numRows; i++) {
      for (int j = 0; j < length; j++) {
          if (array[i][j] != ' ') {
              s[k] = array[i][j];
              k++;
          }
          printf("%c", array[i][j]);
      }
      printf("\n");
  }
  return s;
}
