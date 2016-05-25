package Study;
import java.util.Scanner;
import java.math.*;
//https://www.acmicpc.net/problem/2098
public class TSP 
{
	static int nodeNum;
	static int[][] grp;
	
	static int [] visitable; // visitabe[0]=2^0, visitable[1]=2^1, visited[2]=2^2 ,....
	static int visitState = (1<<nodeNum)-1; //2^16가지 상태 존재하며, 00....01111111111111111로 초기화: 모든 노드 미방문(방문가능)
	static int[][] cache; 	
	
	static int start = -1;
	/*
	 * visitabe = { 1(=1<<0)-노드1 방문가능,	10(=1<<1)-노드2 미방문, 100(=1<<2)-노드3 미방문, 1000(=1<<3)-노드4미방문, ......}	
	 * 
	 * ex) 노드 1방문 
	 *  --> int mask = visitable[1] 
	 * 		visitState &= (~mask) : 1111111111111111 --> 1111111111111110
	 * 
	 * 		노드 1,2,3방문
	 *  --> int tmp = visitable[1] | visitable[2] visitable[3]
	 *  	int mask = visitState & tmp / mask: 1111111111111110 & 0000000000000111 = 0000000000110
	 *  	visitState &= (~mask) /  visitState: 1111111111111110 & 1111111111111001 --> 1111111111111000
	 */
	
	
 	/*
		bit: 0000000000000000 ~ 1111111111111111
		
		ex) 0000000000000001 : 1번 노드 방문됨
			0000000000000101 : 3, 1번노드 방문됨
							
	*/
	
	
	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner(System.in);
		
		nodeNum = sc.nextInt(); //노드수: 2~16
		grp = new int[nodeNum][nodeNum];
		visitable = new int[nodeNum];
	
		for(int i=0; i<nodeNum; i++)
			for(int j=0; j<nodeNum; j++)
				grp[i][j] = sc.nextInt();
		
		
		for(int i=0; i<nodeNum; i++)
			visitable[i] = (1<<i);
		

		
		System.out.println(solve());
	}
	
	private static int TSP(int lastVisit) //현재의 상태(visiteState(global변수), 최근 방문노드 v)일 때, v~start으로 가는 최적 비용 
	{		
		if(visitState ==0 ) // visitState == 0000...000000 : 모든 노드 방문함
			return ( (grp[lastVisit][start]!=0) ? grp[lastVisit][start] : 1000005 );
		
		int subAnswer = 17000000;
	
		for(int next=0; next<nodeNum; next++) 
		{
			//next번 노드가 방문가능하다면 = visitState의 next번째 비트가 1이라면 --> next만 1이고 나머지가 0인비트와 AND했을 때 0보다 크면 True
			// --> next만 1이고 나머지가 0인비트와 AND했을 때 0보다 크면 True
			if( (visitState & (1<<next) ) > 0  && grp[lastVisit][next]!=0)
			{
				visitState &= ~(visitState & visitable[next]); // 방문
				
				if(cache[visitState][next]!= -1) //구했던 최적해가 있다면
					subAnswer = Math.min( subAnswer, grp[lastVisit][next] + cache[visitState][next] ); 
				else
					subAnswer = Math.min( subAnswer, grp[lastVisit][next] + TSP(next) );
								
				visitState |= visitable[next]; //퇴각
			}	
		}		
		return  cache[visitState][lastVisit] = subAnswer ; //현재상태 (visitState, lastVisit)일때의 최적해 저장/반환
	}
	
	public static int solve()
	{
		int answer = Integer.MAX_VALUE;
		visitState = (1<<nodeNum)-1; // 2^nodeNum-1 = 1111....111초기화 : 모든 노드가 방문가능상태
		
		for(int s=0; s<nodeNum; s++)
		{
			start = s;
			cache = new int[visitState+1][nodeNum]; //현재의 상태(visited, 마지막방문노드 v)일 때, v~start으로 가는 최적 비용 
			
			for(int i=0; i<=visitState; i++)
				for(int j=0; j<nodeNum; j++)
					cache[i][j] = -1;
			
			visitState &= ~(visitState & visitable[s]); // 방문
			int t = TSP(s);
			
			
			if(t>0 && answer>t) //오버플로 대비해서...
				answer = t;
			
			visitState |= visitable[s]; //퇴각
			
		}
		
		return answer;
	}

}
