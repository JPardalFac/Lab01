#include "headers\ShaderReader.h"

const char* ShaderReader::ReadShader(SHADER shaderToRead)
{
	switch(shaderToRead)
	{
	case vertex: //if the requested shader is the vertex shader
	{
		//copy vertex shader info to variable shaderText
		const char* as = vertexShaderFilename.c_str();
		return as;
	}
	default:
		return shaderFilenameNotFound.c_str();
	}
}



