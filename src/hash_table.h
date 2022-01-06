/* hash table implementation in C
 * ht_insert(hash table, key, value) -> void
 * ht_search(hash table, key) -> char* value
 * ht_delete(hash table, key) -> void
 */

#define HT_PRIME_1 151
#define HT_PRIME_2 161
#define HT_INITIAL_BASE_SIZE 50

typedef struct {
    char* key;
    char* value;
}ht_item;

typedef struct {
    int size;
    int base_size;
    int count;
    ht_item** items;
}ht_hash_table;

void ht_insert(ht_hash_table* ht, const char* key, const char* value);
char* ht_search(ht_hash_table* ht, const char* key);
void ht_delete(ht_hash_table* ht, const char* key);

static void ht_resize_up(ht_hash_table* ht);
static void ht_resize_down(ht_hash_table* ht);
