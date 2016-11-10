#pragma once

#include <vector>

#include "Material.h"
#include "Mesh.h"
#include "Texture.h"

class Model
{

	private:

		long noOfMeshes;
		vector<Mesh> meshes;

	public:
	
		Model();
		~Model();

		bool load();
		bool save();

		bool addMesh();
		bool delMesh();

		bool addMaterial();
		bool delMaterial();

		bool addTexture();
		bool delTexture();

		void draw();
		void undraw();

};

