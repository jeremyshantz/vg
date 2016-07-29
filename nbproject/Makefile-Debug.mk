#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/DriverTests.o \
	${OBJECTDIR}/ParseTest.o \
	${OBJECTDIR}/PlacedGraphicTest.o \
	${OBJECTDIR}/PointTest.o \
	${OBJECTDIR}/SceneReaderTest.o \
	${OBJECTDIR}/SceneTest.o \
	${OBJECTDIR}/SceneWriterTest.o \
	${OBJECTDIR}/VectorGraphicTest.o \
	${OBJECTDIR}/XmlReaderTest.o \
	${OBJECTDIR}/XmlWriterTest.o \
	${OBJECTDIR}/cppunitlite/Failure.o \
	${OBJECTDIR}/cppunitlite/Main.o \
	${OBJECTDIR}/cppunitlite/Test.o \
	${OBJECTDIR}/cppunitlite/TestRegistry.o \
	${OBJECTDIR}/cppunitlite/TestResult.o \
	${OBJECTDIR}/person.o \
	${OBJECTDIR}/src/AttributeMap.o \
	${OBJECTDIR}/src/Element.o \
	${OBJECTDIR}/src/ElementList.o \
	${OBJECTDIR}/src/HVectorGraphic.o \
	${OBJECTDIR}/src/Layer.o \
	${OBJECTDIR}/src/Parse.o \
	${OBJECTDIR}/src/PlacedGraphic.o \
	${OBJECTDIR}/src/Point.o \
	${OBJECTDIR}/src/Scene.o \
	${OBJECTDIR}/src/SceneReader.o \
	${OBJECTDIR}/src/SceneWriter.o \
	${OBJECTDIR}/src/VectorGraphic.o \
	${OBJECTDIR}/src/VectorGraphicStreamer.o \
	${OBJECTDIR}/src/VectorReader.o \
	${OBJECTDIR}/src/XmlReader.o \
	${OBJECTDIR}/src/XmlWriter.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/aassignment2

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/aassignment2: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/aassignment2 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/DriverTests.o: DriverTests.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DriverTests.o DriverTests.cpp

${OBJECTDIR}/ParseTest.o: ParseTest.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ParseTest.o ParseTest.cpp

${OBJECTDIR}/PlacedGraphicTest.o: PlacedGraphicTest.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PlacedGraphicTest.o PlacedGraphicTest.cpp

${OBJECTDIR}/PointTest.o: PointTest.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PointTest.o PointTest.cpp

${OBJECTDIR}/SceneReaderTest.o: SceneReaderTest.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/SceneReaderTest.o SceneReaderTest.cpp

${OBJECTDIR}/SceneTest.o: SceneTest.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/SceneTest.o SceneTest.cpp

${OBJECTDIR}/SceneWriterTest.o: SceneWriterTest.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/SceneWriterTest.o SceneWriterTest.cpp

${OBJECTDIR}/VectorGraphicTest.o: VectorGraphicTest.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/VectorGraphicTest.o VectorGraphicTest.cpp

${OBJECTDIR}/XmlReaderTest.o: XmlReaderTest.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/XmlReaderTest.o XmlReaderTest.cpp

${OBJECTDIR}/XmlWriterTest.o: XmlWriterTest.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/XmlWriterTest.o XmlWriterTest.cpp

${OBJECTDIR}/cppunitlite/Failure.o: cppunitlite/Failure.cpp 
	${MKDIR} -p ${OBJECTDIR}/cppunitlite
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/cppunitlite/Failure.o cppunitlite/Failure.cpp

${OBJECTDIR}/cppunitlite/Main.o: cppunitlite/Main.cpp 
	${MKDIR} -p ${OBJECTDIR}/cppunitlite
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/cppunitlite/Main.o cppunitlite/Main.cpp

${OBJECTDIR}/cppunitlite/Test.o: cppunitlite/Test.cpp 
	${MKDIR} -p ${OBJECTDIR}/cppunitlite
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/cppunitlite/Test.o cppunitlite/Test.cpp

${OBJECTDIR}/cppunitlite/TestRegistry.o: cppunitlite/TestRegistry.cpp 
	${MKDIR} -p ${OBJECTDIR}/cppunitlite
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/cppunitlite/TestRegistry.o cppunitlite/TestRegistry.cpp

${OBJECTDIR}/cppunitlite/TestResult.o: cppunitlite/TestResult.cpp 
	${MKDIR} -p ${OBJECTDIR}/cppunitlite
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/cppunitlite/TestResult.o cppunitlite/TestResult.cpp

${OBJECTDIR}/person.o: person.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/person.o person.cpp

${OBJECTDIR}/src/AttributeMap.o: src/AttributeMap.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/AttributeMap.o src/AttributeMap.cpp

${OBJECTDIR}/src/Element.o: src/Element.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Element.o src/Element.cpp

${OBJECTDIR}/src/ElementList.o: src/ElementList.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/ElementList.o src/ElementList.cpp

${OBJECTDIR}/src/HVectorGraphic.o: src/HVectorGraphic.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/HVectorGraphic.o src/HVectorGraphic.cpp

${OBJECTDIR}/src/Layer.o: src/Layer.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Layer.o src/Layer.cpp

${OBJECTDIR}/src/Parse.o: src/Parse.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Parse.o src/Parse.cpp

${OBJECTDIR}/src/PlacedGraphic.o: src/PlacedGraphic.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/PlacedGraphic.o src/PlacedGraphic.cpp

${OBJECTDIR}/src/Point.o: src/Point.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Point.o src/Point.cpp

${OBJECTDIR}/src/Scene.o: src/Scene.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Scene.o src/Scene.cpp

${OBJECTDIR}/src/SceneReader.o: src/SceneReader.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/SceneReader.o src/SceneReader.cpp

${OBJECTDIR}/src/SceneWriter.o: src/SceneWriter.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/SceneWriter.o src/SceneWriter.cpp

${OBJECTDIR}/src/VectorGraphic.o: src/VectorGraphic.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/VectorGraphic.o src/VectorGraphic.cpp

${OBJECTDIR}/src/VectorGraphicStreamer.o: src/VectorGraphicStreamer.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/VectorGraphicStreamer.o src/VectorGraphicStreamer.cpp

${OBJECTDIR}/src/VectorReader.o: src/VectorReader.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/VectorReader.o src/VectorReader.cpp

${OBJECTDIR}/src/XmlReader.o: src/XmlReader.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/XmlReader.o src/XmlReader.cpp

${OBJECTDIR}/src/XmlWriter.o: src/XmlWriter.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/XmlWriter.o src/XmlWriter.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/aassignment2

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
