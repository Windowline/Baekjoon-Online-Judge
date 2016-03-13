//https://www.acmicpc.net/problem/11055
package BJ;
import java.util.*;
import java.math.*;
public class _11055_sol2 
{
	static int N;
	static int[] arr;
	static int[] cache;
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		arr= new int[N];
		cache = new int[N];
		for(int i=0; i<N; i++)
			arr[i] = sc.nextInt();
		
		int answer = 1;
		for(int i=0; i<N; i++)
			answer = Math.max(answer, maxVal(i)); //정답은 반드시 i를 끝으로 하는 수열 중 하나다
		System.out.println(answer);
	}
	
	public static int maxVal(int n) // a1~an중에서 an을 마지막으로 하는 수열 최장값(, maxVal(n) = MAX(maxVal(j) ) + 1, (j<n, a[j]<a[n)
	{
		if(n==0) return arr[0];
		if(cache[n]!=0) return cache[n];
		int maxV=0;
		for(int pre=n-1; pre>=0; pre--)
			if(arr[pre] < arr[n])
				maxV = Math.max(maxV, maxVal(pre));		
		
		return cache[n] = maxV+arr[n];
	}

}
