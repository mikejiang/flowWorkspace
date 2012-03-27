/*
 * GatingHierarchy.cpp
 *
 *  Created on: Mar 20, 2012
 *      Author: wjiang2
 */

#include "GatingHierarchy.hpp"
#include <boost/graph/graphviz.hpp>
#include <fstream>
//default constructor without argument
GatingHierarchy::GatingHierarchy()
{

}
//constructor for sampleNode argument
GatingHierarchy::GatingHierarchy(xmlChar * sampleID,workspace const *ws)
{
	thisWs=ws;
	wsSampleNode curSampleNode=thisWs->getSampleNode(sampleID);
	wsRootNode root=thisWs->getRoot(curSampleNode);
	VertexID pVerID=addRoot(root.to_popNode());
//	wsRootNode popNode=root;//getPopulation();
	addPopulation(pVerID,&root,ws.nodePath.popNode);

}
VertexID GatingHierarchy::addRoot(populationNode rootNode)
{


	// Create  vertices in that graph
	VertexID u = boost::add_vertex(tree);

	tree[u]=rootNode;

			//	rootcount<-xmlGetAttr(x,"count")###
			//Fix a bug here. If "count" is empty or doesn't exist, need to look at the parent Sample xml node and get the eventCount property
			//		if(is.null(rootcount)){
			//		    rootcount<-xpathApply(x,"./ancestor::Sample",function(x)xmlGetAttr(x,"eventCount"))[[1]]
			//		}
	nodelist[rootNode.getName()]=u;

	return(u);
}

void GatingHierarchy::addPopulation(VertexID parentID,wsNode const * parentNode)
{


		wsNodeSet children =thisWs->getSubPop(parentNode);
		for(int i=0;i<children.number;i++)
		{
			VertexID curChildID = boost::add_vertex(tree);
			wsNode * curChildNode=&children.nodes[i];
			populationNode curChild=curChildNode->to_popNode();
			tree[curChildID]=curChild;
			boost::add_edge(parentID,curChildID,tree);

			nodelist[curChild.getName()]=curChildID;//update the node map
			//recursively add its descendants
			addPopulation(curChildID,curChildNode);
		}


//	.nextPopulation<-function(x,level){
//			#Get all the population nodes one level below this one..
//			xpathApply(x,paste("./descendant::Population[count(ancestor-or-self::Population) = ",level+xpathApply(x,"count(ancestor-or-self::Population)"),"]",sep=""));
//		}
}
void GatingHierarchy::addGate(gate& g,string popName)
{

	typedef boost::graph_traits<populationTree>::vertex_descriptor vertex_t;

	// Create  vertices in that graph
//	vertex_t u = boost::add_vertex(tree);


//	vertex_t v = boost::add_vertex(g);

	// Create an edge conecting those two vertices
//	edge_t e; bool b;
//	boost::tie(e,b) = boost::add_edge(u,v,g);

//	boost::add_edge()
}

void GatingHierarchy::gating()
{
	cout <<"test gating"<<endl;
}

void GatingHierarchy::drawGraph()
{
	ofstream outputFile("test.dot");
	//...
	boost::write_graphviz(outputFile,tree,OurVertexPropertyWriter(tree));
//	system("pwd");
//	system("dot2gxl test.dot -o test.gxl");

}
