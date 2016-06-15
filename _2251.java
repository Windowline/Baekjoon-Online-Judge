import java.util.*;
public class _2251 
{
    static int cap[];
    static boolean[][] visited;
    static List<Integer> answer;
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        cap = new int[3];
        cap[0] = sc.nextInt();
        cap[1] = sc.nextInt();
        cap[2] = sc.nextInt();
         
        visited = new boolean [201][201];
        BFS();
        Collections.sort(answer);
        for(int v : answer)
            System.out.print(v + " ");
    }
     
    public static void BFS()
    {
        int[] state = {0, 0, cap[2]};
        visited[0][cap[2]] = true; // B,C의 상태
        answer = new ArrayList<Integer>();
        Queue<int[]> Q = new LinkedList<int[]>();
        Q.add(state);
        while(!Q.isEmpty())
        {
            int[] s = Q.poll();
            if(s[0]==0)
                answer.add(s[2]);       
             
            for(int i=0; i<=2; i++) // from
            {
                if(s[i]==0) continue;
                 
                for(int j=0; j<=2; j++) // to
                {
                    if(i==j || cap[j]==s[j]) continue;
                    int[] input = new int[3];
                    input[0] = s[0];
                    input[1] = s[1];
                    input[2] = s[2];
                    if(cap[j]-s[j] <= s[i]) // to의 남은 용량보다 크거나같다면
                    {
                        input[j] = cap[j];
                        input[i] = s[i] - (cap[j]-s[j]);
                    }
                    else
                    {
                        input[j] = s[j] + s[i];
                        input[i] = 0;
                    }
                    if(!visited[input[1]][input[2]])
                    {
                        visited[input[1]][input[2]] = true;
                        Q.add(input);
                    }
                }                   
            }
        }
    }
}
