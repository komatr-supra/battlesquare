#pragma once
#include <vector>
#include <iostream>

template <typename T>
class Grid {
public:
    Grid(size_t rows, size_t cols, const T& initialValue = T())
        : m_rows(rows), m_cols(cols), m_data(rows, std::vector<T>(cols, initialValue)) {}

    void Set(size_t row, size_t col, const T& value)
    {
        if (row >= m_rows || col >= m_cols || row < 0 || col < 0)
        {
            throw std::out_of_range("Index out of range");
        }
        m_data[row][col] = value;
    }

    T Get(size_t row, size_t col) const
    {
        if (row >= m_rows || col >= m_cols)
        {
            throw std::out_of_range("Index out of range");
        }
        return m_data[row][col];
    }

    size_t rows() const { return m_rows; }
    size_t cols() const { return m_cols; }

private:
    size_t m_rows;
    size_t m_cols;
    std::vector<std::vector<T>> m_data;
};


