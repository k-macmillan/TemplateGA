#ifndef GENERIC_GA_H
#define GENERIC_GA_H

/*
Pure virtual class to be inherited. All GAs should inolve some combination
of Merge, Copy, Mutate, Randomize(InduceLife), Freeing of pointers, and a
fitness variable relative to this particular offspring.
*/
template <class T>
class Discrete
{
    /*
    Merges 50% of second with 50% of this(first)
    */
    virtual Discrete<T>* Crossover (const Discrete<T> &second_discrete) = 0;
    /*
    Copies to this
    */
    virtual void Copy (const Discrete<T> &orig_discrete) = 0;
    /*
    Picks % of items to mutate
    */
    virtual void Mutate () = 0;
    /*
    Randomize actionable items
    */
    virtual void InduceLife () = 0;
    /*
    Free all pointers
    */
    virtual void FreePointers () = 0;

    /*
    Variable to store fitness
    */
    T fitness;
};

template <class S>
class GGA
{
public:
    GGA(int Generations, int Pool_Size):GENERATIONS(Generations), POOL_SIZE(Pool_Size) {}
    ~GGA() {}

    virtual void Simulate (S* discrete) = 0;
    virtual void Evaluate (S* discrete) = 0;
    virtual void SetBase (S* discrete) = 0;

    virtual void GenerateBasePool() = 0;
    virtual void GenerateRandomPool() = 0;

    void GenerateGenerations(S* orig_discrete)
    {
        unsigned int generations = 0;

        while (generations < GENERATIONS)
        {
            // Make generation of offspring




            unsigned int pool_count = 0;
            while (pool_count < POOL_SIZE)
            {
                // Make offspring
            }
        }
        ++generations;
    }



    const unsigned int GENERATIONS;
    const unsigned int POOL_SIZE;

private:

};





#endif