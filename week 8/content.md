# SQL

    Basics about SQLite syntax

### Data types

    BLOB - Binary large object
    Integer
    Numeric - like dates and times, not integer or floating point
    Reals - Float
    Text

### Keywords

    Primary key - unique ID to something.
    Foreign key - unique ID of something that is relationed.
    NOT NULL - column cannot be null.
    UNIQUE - column must be unique.
    JOIN - join one table with another based on a related column.
    BEGIN TRANSACTION - Initialize a transaction.
    COMMIT - Close the transaction with a commit.
    ROLLBACK - Rollback a transaction if not right.

### One-to-one relationship

    one thing is related to one other thing ex: a tv-show have a rating

### one-to-many relationship

    one thing can have many another things: ex: a tv-show can have many genres

### Many-to-many relationship

    ex: a tv-show have many actors and actors is present in many shows

### Nested queries

    is a query within another query, allowing complex data retrieval by using results from inner queries

### Indexes

    data structure (B-Tree) that makes faster to perform select and another ones queries faster. Primary keys are indexed by default.
    Tradeoff: memory space

### Transactions

    Initializing a transaction ensures that all lines of code inside the transaction should either all happen together or not at all. Should be atomic.

### SQL INJECTION

    insert malicious SQL into a query, by a untreated placeholder or anything, manipulating databases to access or alter data.
