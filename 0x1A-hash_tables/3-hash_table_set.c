/**
 * hash_table_set - set the hash table
 * @ht: The hash to set the key-value pair
 * @key: The key, string
 * @value: The corresponding value in char
 * Return: int success (1) or failure (NULL)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
        hash_node_t *new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
        if (new_node == NULL)
        {
                return (0);
        }

        new_node->key = strdup(key);
        if (new_node->key == NULL)
        {
                free(new_node);
                return (0);
        }
        new_node->value = strdup(value);
        if (new_node->value == NULL)
        {
                free(new_node->key);
                free(new_node);
                return (0);
        }
        new_node->next = NULL;

        if (ht->array[index] == NULL)
        {
                ht->array[index] = new_node;
        }
        else {
                hash_node_t *current = ht->array[index];
                while (current->next != NULL){
                        current = current->next;
                }
                current->next = new_node;
        }

        return(1);
