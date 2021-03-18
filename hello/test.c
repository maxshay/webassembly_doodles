double fib(int n) 
{
  if(n <= 0) return 0;
  if(n > 0 && n < 3) return 1;

  double result = 0;
  double preOldResult = 1;
  double oldResult = 1;

  int i;
  for (i=2;i<n;i++) { 
    result = preOldResult + oldResult;
    preOldResult = oldResult;
    oldResult = result;
  }
  return result;
}