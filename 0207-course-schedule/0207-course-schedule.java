class Solution {
    public boolean canFinish(int numCourses, int[][] prerequisites) {
            HashMap<Integer, ArrayList<Integer>> map= new HashMap<>();
            for(int i=0;i<numCourses;i++){
                map.put(i, new ArrayList<>());
            }

            for(int i=0;i<prerequisites.length;i++){
                int v1= prerequisites[i][0];
                int v2= prerequisites[i][1];

                map.get(v2).add(v1);
            }

            return topologicalSortAlgo(map);
    }
    public int[] inDegree(HashMap<Integer, ArrayList<Integer>> map){
        int [] inArray= new int[map.size()];

        for(int key: map.keySet()){
            for(int neighbour: map.get(key)){
                inArray[neighbour]++;
            }
        }

        return inArray;
    }

    public boolean topologicalSortAlgo(HashMap<Integer, ArrayList<Integer>> map){
        int inArray[]= inDegree(map);
        Queue<Integer> queue= new LinkedList<>();
        for(int i=0;i<inArray.length;i++){
            if(inArray[i]==0){
                queue.add(i);
            }
        }
        int count=0;
        while(!queue.isEmpty()){
            int remove= queue.remove();
            count++;
            for(int neighbour: map.get(remove)){
                inArray[neighbour]--;
                if(inArray[neighbour]==0)
                    queue.add(neighbour);
            }
        }
        return count==map.size();
    }
}