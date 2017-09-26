#ifndef SHADER_READER_H
#define SHADER_READER_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const string vertexShaderFilename = "..\\Lab01\\src\\shaders\\vertexShader.txt";
const string fragmentShaderFilename = "..\\Lab01\\src\\shaders\\fragmentShader.txt";
const string shaderFilenameNotFound = "shader Filename Not Found";

class ShaderReader
{
public:
	enum SHADER { vertex, fragment };	//types of shaders available

	const char* ReadShader(SHADER shaderToRead);
	
private:
	string shaderText;		//variable to store the shader's text

};

#endif // !SHADER_READER
