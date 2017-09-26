#include "headers\ShaderReader.h"

const char* ShaderReader::ReadShader(SHADER shaderToRead)
{
	string line;
	switch(shaderToRead)
	{
	case vertex: //if the requested shader is the vertex shader
	{
		ifstream vertexFile (vertexShaderFilename);
		if (vertexFile.is_open())	//ifstream is opened when it is created
		{
			while (getline(vertexFile, line))
			{
				shaderText += line;
				shaderText += "\n";
			}
			vertexFile.close();
		}
		else cout << "unable to open " << vertexShaderFilename;

		const char* shaderAsconstChar = shaderText.c_str();
		return shaderAsconstChar;
	}
	case fragment:
	{
		ifstream vertexFile(fragmentShaderFilename);
		if (vertexFile.is_open())	//ifstream is opened when it is created
		{
			while (getline(vertexFile, line))
			{
				shaderText += line;
				shaderText += "\n";
			}
			vertexFile.close();
		}
		else cout << "unable to open " << fragmentShaderFilename;

		const char* shaderAsconstChar = shaderText.c_str();
		return shaderAsconstChar;
	}
	default:
		return shaderFilenameNotFound.c_str();
	}
}



