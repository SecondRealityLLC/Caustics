#pragma once


#include <vector>


#include "Coord.h"
#include "Edge.h"
#include "Face.h"
#include "Vertex.h"

using namespace std;


class Mesh
{

	private:

		long noOfCoords;
		long noOfEdges;
		long noOfFaces;
		long noOfVertices;

		vector<Coord> coords;
		vector<Edge> edges;
		vector<Face> faces;
		vector<Vertex> vertices;

	public:
	
		Mesh();
		~Mesh();

		bool load(const char* path);
		bool save(const char* path);

		void draw(float x, float y, float z);
		void undraw(float x, float y, float z);


};

