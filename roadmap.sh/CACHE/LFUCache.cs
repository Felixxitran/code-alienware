using System;
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;

//create pair object of vaalue and frequency of stacks
class Pair
{ 
    public int value { get; set; }
    public int frequency { get; set; }
    public Pair(int value, int frequency)
    {
        this.value = value;
        this.frequency = frequency;
    }
}
//create LFU class
class LFU
{
    public int cacheSize { get; set; }
    public Dictionary<int, Pair> cache { get; set; }
    public LFU(int cacheSize)
    {
        this.cacheSize = cacheSize;
        this.cache = new Dictionary<int, Pair>();
    }
    //increase the frequency of the stack
    public void increment(int value)
    {
        if (cache.ContainsKey(value))
        {
            Console.WriteLine(cache);
            Console.WriteLine(value);
            cache[value].frequency += 1;
          
        }
    }
    //insert the stackk 
    public void insert(int value)
    {
        if (cache.Count == cacheSize)
        {
            int lfuKey = findLFU();
            Console.WriteLine("cache block"+lfuKey+"removed");
        }
        Pair newPair = new Pair(value, 1);
        cache.Add(value,newPair);
        Console.WriteLine("Cache block" + value + "inserted");
    }
    //when refer if the stack not in the cache then insert it else increase its frequency
    public void refer(int value)
    {
        if (!cache.ContainsKey(value)) 
        {
            insert(value);        
        }
        else
        {
            increment(value);
        }
    }

    //find the stack with the least frequency 
    public int findLFU()
    {
        int lfuKey = 0;
        int minFrequency = Int32.MaxValue;
        foreach (KeyValuePair<int, Pair> entry in cache)
        {
            Console.WriteLine(entry);
            if (entry.Value.frequency > minFrequency)
            { 
                minFrequency= entry.Value.frequency;
                lfuKey = entry.Key;
            }
        }
        return lfuKey;
    }
}

public class GFG
{
    public static void Main(String[] args)
    {
        LFU lfuCache = new LFU(4);
        lfuCache.refer(1);
        lfuCache.refer(2);
        lfuCache.refer(1);
        lfuCache.refer(3);
        lfuCache.refer(2);
        lfuCache.refer(4);
        lfuCache.refer(5);
        Console.WriteLine("the programe has loaded");
    }
}