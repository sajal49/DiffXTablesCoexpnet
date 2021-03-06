//
// Created by Jiandong Wang on 2/15/20.
// Modified by Sajal Kumar.
//
// Copyright (c) NMSU Song lab


#ifndef GOC_CLUSTERS_H
#define GOC_CLUSTERS_H


#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <cassert>
#include <cmath>

using std::vector;

struct grid {
    vector<vector<double> > lines;
    vector<int> num_lines;
};


class Cluster {
private:
    int num_clusters = 0;
    vector<vector<vector<double> > > cluster_points;
    //vector<vector<double> > cluster_centers;
    vector<vector<double> > cluster_medians;

    grid grids;

    Cluster(const vector<vector<double> >& medians);

    Cluster(const vector<vector<double> >& medians, vector<vector<vector<double> > > data);
public:
    Cluster(vector<int> labels, vector<vector<double> > medians, vector<vector<double> > data);

    Cluster(int k, vector<int> labels, vector<vector<double> > data);

    vector<vector<vector<double> > > get_points();

    vector<vector<double> > get_points(int index);

    vector<vector<double> > get_medians();

    vector<double> get_medians(int index);

    void set_grids(grid G);

    grid get_grids();

    vector<int> sort_clusters(int dim);

    int get_dims();


};


#endif //GOC_CLUSTERS_H
