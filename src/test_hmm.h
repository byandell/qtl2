// functions to test basic HMM things from R

// test init functions from R
double test_init(const String& crosstype,
                 const int true_gen,
                 const bool is_x_chr, const bool is_female, const IntegerVector& cross_info);

// test emit functions from R
double test_emit(const String& crosstype,
                 const int obs_gen, const int true_gen, const double error_prob,
                 const IntegerVector& founder_geno, const bool is_x_chr,
                 const bool is_female, const IntegerVector& cross_info);

// test emit functions from R
double test_step(const String& crosstype,
                 const int gen_left, const int gen_right, const double rec_frac,
                 const bool is_x_chr, const bool is_female, const IntegerVector& cross_info);

bool test_check_geno(const String& crosstype, const int gen, const bool is_observed_value,
                     const bool is_x_chr, const bool is_female, const IntegerVector& cross_info);

IntegerVector test_possible_gen(const String& crosstype,
                                const bool is_x_chr, const bool is_female, const IntegerVector& cross_info);

int test_ngen(const String& crosstype, const bool is_x_chr);

double test_nrec(const String& crosstype, const int gen_left, const int gen_right,
                 const bool is_x_chr, const bool is_female, const IntegerVector& cross_info);
