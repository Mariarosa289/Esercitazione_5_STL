#pragma once

#include <iostream>
#include <vector>
#include <array>
#include <map>
#include <list>
#include "Eigen/Eigen"

namespace PolygonalLibrary {

struct PolygonalMesh
{
    unsigned int NumCell0Ds = 0; ///< number of Cell0D
    std::vector<unsigned int> Cell0DsId = {}; ///< Cell0D id, size 1 x NumCell0Ds
    Eigen::MatrixXd Cell0DsCoordinates = {}; ///< Cell0D coordinates, size 2 x NumCell0Ds (x,y)
    std::map<unsigned int, std::list<unsigned int>> MarkerCell0Ds = {}; ///< Cell0D markers

    unsigned int NumCell1Ds = 0; ///< number of Cell1D
    std::vector<unsigned int> Cell1DsId = {}; ///< Cell1D id, size 1 x NumCell1Ds
    Eigen::MatrixXi Cell1DsExtrema = {}; ///< Cell1D vertices indices, size 2 x NumCell1Ds (fromId,toId)
    std::map<unsigned int, std::list<unsigned int>> MarkerCell1Ds = {}; ///< Cell1D markers

    unsigned int NumCell2Ds = 0; ///< number of Cell2D
    std::vector<unsigned int> Cell2DsId = {}; ///< Cell2D id, size 1 x NumCell2Ds
    std::vector<std::vector<unsigned int>> Cell2DsVertices = {}; ///< Cell2D vertices indices, each polygon can have arbitrary number of vertices
    std::vector<std::vector<unsigned int>> Cell2DsEdges = {}; ///< Cell2D edges indices, each polygon can have arbitrary number of edges
};

}

