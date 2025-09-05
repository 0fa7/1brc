#include <benchmark/benchmark.h>

#include "file_reader.hpp"

static void BM_file_reader_100_000(benchmark::State& state)
{
    for (auto _ : state)
    {
        read_line_by_line(std::string("/home/aaron/dev/measurements_100000.txt"));
    }
}

static void BM_file_reader_10_000_000(benchmark::State& state)
{
    for (auto _ : state)
    {
        read_line_by_line(std::string("/home/aaron/dev/measurements_10000000.txt"));
    }
}

// Register the function as a benchmark
BENCHMARK(BM_file_reader_100_000);
BENCHMARK(BM_file_reader_10_000_000);
// Run the benchmark
BENCHMARK_MAIN();