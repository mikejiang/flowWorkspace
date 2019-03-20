// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/flowWorkspace.h"
#include <Rcpp.h>

using namespace Rcpp;

// getSplineCoefs
Rcpp::List getSplineCoefs(int channelRange, double maxValue, double pos, double neg, double widthBasis, bool inverse);
RcppExport SEXP _flowWorkspace_getSplineCoefs(SEXP channelRangeSEXP, SEXP maxValueSEXP, SEXP posSEXP, SEXP negSEXP, SEXP widthBasisSEXP, SEXP inverseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type channelRange(channelRangeSEXP);
    Rcpp::traits::input_parameter< double >::type maxValue(maxValueSEXP);
    Rcpp::traits::input_parameter< double >::type pos(posSEXP);
    Rcpp::traits::input_parameter< double >::type neg(negSEXP);
    Rcpp::traits::input_parameter< double >::type widthBasis(widthBasisSEXP);
    Rcpp::traits::input_parameter< bool >::type inverse(inverseSEXP);
    rcpp_result_gen = Rcpp::wrap(getSplineCoefs(channelRange, maxValue, pos, neg, widthBasis, inverse));
    return rcpp_result_gen;
END_RCPP
}
// addTrans
void addTrans(Rcpp::XPtr<GatingSet> gsPtr, Rcpp::S4 transformList);
RcppExport SEXP _flowWorkspace_addTrans(SEXP gsPtrSEXP, SEXP transformListSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<GatingSet> >::type gsPtr(gsPtrSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4 >::type transformList(transformListSEXP);
    addTrans(gsPtr, transformList);
    return R_NilValue;
END_RCPP
}
// updateChannels
void updateChannels(Rcpp::S4 gs, Rcpp::DataFrame map);
RcppExport SEXP _flowWorkspace_updateChannels(SEXP gsSEXP, SEXP mapSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type map(mapSEXP);
    updateChannels(gs, map);
    return R_NilValue;
END_RCPP
}
// plotGh
void plotGh(XPtr<GatingSet> gs, string sampleName, string output);
RcppExport SEXP _flowWorkspace_plotGh(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP outputSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type output(outputSEXP);
    plotGh(gs, sampleName, output);
    return R_NilValue;
END_RCPP
}
// getNodes
StringVec getNodes(XPtr<GatingSet> gs, string sampleName, unsigned short order, bool fullPath, bool showHidden);
RcppExport SEXP _flowWorkspace_getNodes(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP orderSEXP, SEXP fullPathSEXP, SEXP showHiddenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< unsigned short >::type order(orderSEXP);
    Rcpp::traits::input_parameter< bool >::type fullPath(fullPathSEXP);
    Rcpp::traits::input_parameter< bool >::type showHidden(showHiddenSEXP);
    rcpp_result_gen = Rcpp::wrap(getNodes(gs, sampleName, order, fullPath, showHidden));
    return rcpp_result_gen;
END_RCPP
}
// getNodePath
string getNodePath(XPtr<GatingSet> gs, string sampleName, NODEID id);
RcppExport SEXP _flowWorkspace_getNodePath(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< NODEID >::type id(idSEXP);
    rcpp_result_gen = Rcpp::wrap(getNodePath(gs, sampleName, id));
    return rcpp_result_gen;
END_RCPP
}
// getNodeID
NODEID getNodeID(XPtr<GatingSet> gs, string sampleName, string gatePath);
RcppExport SEXP _flowWorkspace_getNodeID(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    rcpp_result_gen = Rcpp::wrap(getNodeID(gs, sampleName, gatePath));
    return rcpp_result_gen;
END_RCPP
}
// getParent
NODEID getParent(XPtr<GatingSet> gs, string sampleName, string gatePath);
RcppExport SEXP _flowWorkspace_getParent(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    rcpp_result_gen = Rcpp::wrap(getParent(gs, sampleName, gatePath));
    return rcpp_result_gen;
END_RCPP
}
// getChildren
vector<NODEID> getChildren(XPtr<GatingSet> gs, string sampleName, string gatePath, bool showHidden);
RcppExport SEXP _flowWorkspace_getChildren(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP, SEXP showHiddenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    Rcpp::traits::input_parameter< bool >::type showHidden(showHiddenSEXP);
    rcpp_result_gen = Rcpp::wrap(getChildren(gs, sampleName, gatePath, showHidden));
    return rcpp_result_gen;
END_RCPP
}
// getPopStats
List getPopStats(XPtr<GatingSet> gs, string sampleName, string gatePath);
RcppExport SEXP _flowWorkspace_getPopStats(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    rcpp_result_gen = Rcpp::wrap(getPopStats(gs, sampleName, gatePath));
    return rcpp_result_gen;
END_RCPP
}
// getCompensation
List getCompensation(XPtr<GatingSet> gs, string sampleName);
RcppExport SEXP _flowWorkspace_getCompensation(SEXP gsSEXP, SEXP sampleNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    rcpp_result_gen = Rcpp::wrap(getCompensation(gs, sampleName));
    return rcpp_result_gen;
END_RCPP
}
// getTransformations
List getTransformations(XPtr<GatingSet> gs, string sampleName, bool inverse);
RcppExport SEXP _flowWorkspace_getTransformations(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP inverseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< bool >::type inverse(inverseSEXP);
    rcpp_result_gen = Rcpp::wrap(getTransformations(gs, sampleName, inverse));
    return rcpp_result_gen;
END_RCPP
}
// computeGates
void computeGates(XPtr<GatingSet> gs, string sampleName, NumericVector gainsVec, float extend_val, float extend_to);
RcppExport SEXP _flowWorkspace_computeGates(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gainsVecSEXP, SEXP extend_valSEXP, SEXP extend_toSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type gainsVec(gainsVecSEXP);
    Rcpp::traits::input_parameter< float >::type extend_val(extend_valSEXP);
    Rcpp::traits::input_parameter< float >::type extend_to(extend_toSEXP);
    computeGates(gs, sampleName, gainsVec, extend_val, extend_to);
    return R_NilValue;
END_RCPP
}
// gating
void gating(XPtr<GatingSet> gs, NumericMatrix orig, string sampleName, NumericVector gainsVec, unsigned short nodeInd, bool recompute, float extend_val, bool ignore_case, bool computeTerminalBool, float timestep);
RcppExport SEXP _flowWorkspace_gating(SEXP gsSEXP, SEXP origSEXP, SEXP sampleNameSEXP, SEXP gainsVecSEXP, SEXP nodeIndSEXP, SEXP recomputeSEXP, SEXP extend_valSEXP, SEXP ignore_caseSEXP, SEXP computeTerminalBoolSEXP, SEXP timestepSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type orig(origSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type gainsVec(gainsVecSEXP);
    Rcpp::traits::input_parameter< unsigned short >::type nodeInd(nodeIndSEXP);
    Rcpp::traits::input_parameter< bool >::type recompute(recomputeSEXP);
    Rcpp::traits::input_parameter< float >::type extend_val(extend_valSEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_case(ignore_caseSEXP);
    Rcpp::traits::input_parameter< bool >::type computeTerminalBool(computeTerminalBoolSEXP);
    Rcpp::traits::input_parameter< float >::type timestep(timestepSEXP);
    gating(gs, orig, sampleName, gainsVec, nodeInd, recompute, extend_val, ignore_case, computeTerminalBool, timestep);
    return R_NilValue;
END_RCPP
}
// getGate
List getGate(XPtr<GatingSet> gs, string sampleName, string gatePath);
RcppExport SEXP _flowWorkspace_getGate(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    rcpp_result_gen = Rcpp::wrap(getGate(gs, sampleName, gatePath));
    return rcpp_result_gen;
END_RCPP
}
// getIndices
vector<bool> getIndices(XPtr<GatingSet> gs, string sampleName, string gatePath);
RcppExport SEXP _flowWorkspace_getIndices(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    rcpp_result_gen = Rcpp::wrap(getIndices(gs, sampleName, gatePath));
    return rcpp_result_gen;
END_RCPP
}
// setIndices
void setIndices(XPtr<GatingSet> gs, string sampleName, int u, BoolVec ind);
RcppExport SEXP _flowWorkspace_setIndices(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP uSEXP, SEXP indSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< int >::type u(uSEXP);
    Rcpp::traits::input_parameter< BoolVec >::type ind(indSEXP);
    setIndices(gs, sampleName, u, ind);
    return R_NilValue;
END_RCPP
}
// getGateFlag
bool getGateFlag(XPtr<GatingSet> gs, string sampleName, string gatePath);
RcppExport SEXP _flowWorkspace_getGateFlag(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    rcpp_result_gen = Rcpp::wrap(getGateFlag(gs, sampleName, gatePath));
    return rcpp_result_gen;
END_RCPP
}
// getNegateFlag
bool getNegateFlag(XPtr<GatingSet> gs, string sampleName, string gatePath);
RcppExport SEXP _flowWorkspace_getNegateFlag(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    rcpp_result_gen = Rcpp::wrap(getNegateFlag(gs, sampleName, gatePath));
    return rcpp_result_gen;
END_RCPP
}
// getHiddenFlag
bool getHiddenFlag(XPtr<GatingSet> gs, string sampleName, string gatePath);
RcppExport SEXP _flowWorkspace_getHiddenFlag(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    rcpp_result_gen = Rcpp::wrap(getHiddenFlag(gs, sampleName, gatePath));
    return rcpp_result_gen;
END_RCPP
}
// addGate
NODEID addGate(XPtr<GatingSet> gs, string sampleName, List filter, string gatePath, string popName);
RcppExport SEXP _flowWorkspace_addGate(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP filterSEXP, SEXP gatePathSEXP, SEXP popNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< List >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    Rcpp::traits::input_parameter< string >::type popName(popNameSEXP);
    rcpp_result_gen = Rcpp::wrap(addGate(gs, sampleName, filter, gatePath, popName));
    return rcpp_result_gen;
END_RCPP
}
// boolGating
void boolGating(XPtr<GatingSet> gs, string sampleName, List filter, unsigned nodeID);
RcppExport SEXP _flowWorkspace_boolGating(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP filterSEXP, SEXP nodeIDSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< List >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< unsigned >::type nodeID(nodeIDSEXP);
    boolGating(gs, sampleName, filter, nodeID);
    return R_NilValue;
END_RCPP
}
// setGate
void setGate(XPtr<GatingSet> gs, string sampleName, string gatePath, List filter);
RcppExport SEXP _flowWorkspace_setGate(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP, SEXP filterSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    Rcpp::traits::input_parameter< List >::type filter(filterSEXP);
    setGate(gs, sampleName, gatePath, filter);
    return R_NilValue;
END_RCPP
}
// removeNode
void removeNode(XPtr<GatingSet> gs, string sampleName, string gatePath);
RcppExport SEXP _flowWorkspace_removeNode(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    removeNode(gs, sampleName, gatePath);
    return R_NilValue;
END_RCPP
}
// moveNode
void moveNode(Rcpp::XPtr<GatingSet> gsPtr, string sampleName, string node, string parent);
RcppExport SEXP _flowWorkspace_moveNode(SEXP gsPtrSEXP, SEXP sampleNameSEXP, SEXP nodeSEXP, SEXP parentSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<GatingSet> >::type gsPtr(gsPtrSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< string >::type parent(parentSEXP);
    moveNode(gsPtr, sampleName, node, parent);
    return R_NilValue;
END_RCPP
}
// setNodeName
void setNodeName(XPtr<GatingSet> gs, string sampleName, string gatePath, string newNodeName);
RcppExport SEXP _flowWorkspace_setNodeName(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP, SEXP newNodeNameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    Rcpp::traits::input_parameter< string >::type newNodeName(newNodeNameSEXP);
    setNodeName(gs, sampleName, gatePath, newNodeName);
    return R_NilValue;
END_RCPP
}
// setNodeFlag
void setNodeFlag(XPtr<GatingSet> gs, string sampleName, string gatePath, bool hidden);
RcppExport SEXP _flowWorkspace_setNodeFlag(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP, SEXP hiddenSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    Rcpp::traits::input_parameter< bool >::type hidden(hiddenSEXP);
    setNodeFlag(gs, sampleName, gatePath, hidden);
    return R_NilValue;
END_RCPP
}
// getSamples
StringVec getSamples(XPtr<GatingSet> gsPtr);
RcppExport SEXP _flowWorkspace_getSamples(SEXP gsPtrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gsPtr(gsPtrSEXP);
    rcpp_result_gen = Rcpp::wrap(getSamples(gsPtr));
    return rcpp_result_gen;
END_RCPP
}
// NewGatingSet
XPtr<GatingSet> NewGatingSet(XPtr<GatingSet> gsPtr, string sampleName, StringVec newSampleNames);
RcppExport SEXP _flowWorkspace_NewGatingSet(SEXP gsPtrSEXP, SEXP sampleNameSEXP, SEXP newSampleNamesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gsPtr(gsPtrSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< StringVec >::type newSampleNames(newSampleNamesSEXP);
    rcpp_result_gen = Rcpp::wrap(NewGatingSet(gsPtr, sampleName, newSampleNames));
    return rcpp_result_gen;
END_RCPP
}
// NewGatingSet_rootOnly
XPtr<GatingSet> NewGatingSet_rootOnly(StringVec sampleNames);
RcppExport SEXP _flowWorkspace_NewGatingSet_rootOnly(SEXP sampleNamesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVec >::type sampleNames(sampleNamesSEXP);
    rcpp_result_gen = Rcpp::wrap(NewGatingSet_rootOnly(sampleNames));
    return rcpp_result_gen;
END_RCPP
}
// saveGatingSet
void saveGatingSet(XPtr<GatingSet> gs, string fileName);
RcppExport SEXP _flowWorkspace_saveGatingSet(SEXP gsSEXP, SEXP fileNameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type fileName(fileNameSEXP);
    saveGatingSet(gs, fileName);
    return R_NilValue;
END_RCPP
}
// loadGatingSet
XPtr<GatingSet> loadGatingSet(string fileName);
RcppExport SEXP _flowWorkspace_loadGatingSet(SEXP fileNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< string >::type fileName(fileNameSEXP);
    rcpp_result_gen = Rcpp::wrap(loadGatingSet(fileName));
    return rcpp_result_gen;
END_RCPP
}
// CloneGatingSet
XPtr<GatingSet> CloneGatingSet(XPtr<GatingSet> gs, StringVec samples);
RcppExport SEXP _flowWorkspace_CloneGatingSet(SEXP gsSEXP, SEXP samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< StringVec >::type samples(samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(CloneGatingSet(gs, samples));
    return rcpp_result_gen;
END_RCPP
}
// combineGatingSet
XPtr<GatingSet> combineGatingSet(Rcpp::List gsList, Rcpp::List sampleList);
RcppExport SEXP _flowWorkspace_combineGatingSet(SEXP gsListSEXP, SEXP sampleListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type gsList(gsListSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sampleList(sampleListSEXP);
    rcpp_result_gen = Rcpp::wrap(combineGatingSet(gsList, sampleList));
    return rcpp_result_gen;
END_RCPP
}
// setSample
void setSample(XPtr<GatingSet> gs, string oldName, string newName);
RcppExport SEXP _flowWorkspace_setSample(SEXP gsSEXP, SEXP oldNameSEXP, SEXP newNameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type oldName(oldNameSEXP);
    Rcpp::traits::input_parameter< string >::type newName(newNameSEXP);
    setSample(gs, oldName, newName);
    return R_NilValue;
END_RCPP
}
// getLogLevel
unsigned short getLogLevel();
RcppExport SEXP _flowWorkspace_getLogLevel() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(getLogLevel());
    return rcpp_result_gen;
END_RCPP
}
// setLogLevel
void setLogLevel(unsigned short loglevel);
RcppExport SEXP _flowWorkspace_setLogLevel(SEXP loglevelSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned short >::type loglevel(loglevelSEXP);
    setLogLevel(loglevel);
    return R_NilValue;
END_RCPP
}
// toggleErrorFlag
void toggleErrorFlag();
RcppExport SEXP _flowWorkspace_toggleErrorFlag() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    toggleErrorFlag();
    return R_NilValue;
END_RCPP
}
// getDescendants
VertexID_vec getDescendants(Rcpp::XPtr<GatingSet> gsPtr, string sampleName, string node);
RcppExport SEXP _flowWorkspace_getDescendants(SEXP gsPtrSEXP, SEXP sampleNameSEXP, SEXP nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<GatingSet> >::type gsPtr(gsPtrSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type node(nodeSEXP);
    rcpp_result_gen = Rcpp::wrap(getDescendants(gsPtr, sampleName, node));
    return rcpp_result_gen;
END_RCPP
}
// getPopCounts
Rcpp::List getPopCounts(Rcpp::XPtr<GatingSet> gsPtr, StringVec sampleNames, StringVec subpopulation, bool flowJo, bool isFullPath);
RcppExport SEXP _flowWorkspace_getPopCounts(SEXP gsPtrSEXP, SEXP sampleNamesSEXP, SEXP subpopulationSEXP, SEXP flowJoSEXP, SEXP isFullPathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<GatingSet> >::type gsPtr(gsPtrSEXP);
    Rcpp::traits::input_parameter< StringVec >::type sampleNames(sampleNamesSEXP);
    Rcpp::traits::input_parameter< StringVec >::type subpopulation(subpopulationSEXP);
    Rcpp::traits::input_parameter< bool >::type flowJo(flowJoSEXP);
    Rcpp::traits::input_parameter< bool >::type isFullPath(isFullPathSEXP);
    rcpp_result_gen = Rcpp::wrap(getPopCounts(gsPtr, sampleNames, subpopulation, flowJo, isFullPath));
    return rcpp_result_gen;
END_RCPP
}
// getSingleCellExpressionByGate
NumericMatrix getSingleCellExpressionByGate(XPtr<GatingSet> gs, string sampleName, List markers_pops, NumericMatrix data, CharacterVector markers, bool threshold);
RcppExport SEXP _flowWorkspace_getSingleCellExpressionByGate(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP markers_popsSEXP, SEXP dataSEXP, SEXP markersSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< List >::type markers_pops(markers_popsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type markers(markersSEXP);
    Rcpp::traits::input_parameter< bool >::type threshold(thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(getSingleCellExpressionByGate(gs, sampleName, markers_pops, data, markers, threshold));
    return rcpp_result_gen;
END_RCPP
}
// getSingleCellExpression
NumericMatrix getSingleCellExpression(XPtr<GatingSet> gs, string sampleName, vector<string> pops, NumericMatrix data, CharacterVector markers, bool threshold);
RcppExport SEXP _flowWorkspace_getSingleCellExpression(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP popsSEXP, SEXP dataSEXP, SEXP markersSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< vector<string> >::type pops(popsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type markers(markersSEXP);
    Rcpp::traits::input_parameter< bool >::type threshold(thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(getSingleCellExpression(gs, sampleName, pops, data, markers, threshold));
    return rcpp_result_gen;
END_RCPP
}
// setCounts
void setCounts(Rcpp::XPtr<GatingSet> gsPtr, string sampleName, string node, int count);
RcppExport SEXP _flowWorkspace_setCounts(SEXP gsPtrSEXP, SEXP sampleNameSEXP, SEXP nodeSEXP, SEXP countSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<GatingSet> >::type gsPtr(gsPtrSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< int >::type count(countSEXP);
    setCounts(gsPtr, sampleName, node, count);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_flowWorkspace_getSplineCoefs", (DL_FUNC) &_flowWorkspace_getSplineCoefs, 6},
    {"_flowWorkspace_addTrans", (DL_FUNC) &_flowWorkspace_addTrans, 2},
    {"_flowWorkspace_updateChannels", (DL_FUNC) &_flowWorkspace_updateChannels, 2},
    {"_flowWorkspace_plotGh", (DL_FUNC) &_flowWorkspace_plotGh, 3},
    {"_flowWorkspace_getNodes", (DL_FUNC) &_flowWorkspace_getNodes, 5},
    {"_flowWorkspace_getNodePath", (DL_FUNC) &_flowWorkspace_getNodePath, 3},
    {"_flowWorkspace_getNodeID", (DL_FUNC) &_flowWorkspace_getNodeID, 3},
    {"_flowWorkspace_getParent", (DL_FUNC) &_flowWorkspace_getParent, 3},
    {"_flowWorkspace_getChildren", (DL_FUNC) &_flowWorkspace_getChildren, 4},
    {"_flowWorkspace_getPopStats", (DL_FUNC) &_flowWorkspace_getPopStats, 3},
    {"_flowWorkspace_getCompensation", (DL_FUNC) &_flowWorkspace_getCompensation, 2},
    {"_flowWorkspace_getTransformations", (DL_FUNC) &_flowWorkspace_getTransformations, 3},
    {"_flowWorkspace_computeGates", (DL_FUNC) &_flowWorkspace_computeGates, 5},
    {"_flowWorkspace_gating", (DL_FUNC) &_flowWorkspace_gating, 10},
    {"_flowWorkspace_getGate", (DL_FUNC) &_flowWorkspace_getGate, 3},
    {"_flowWorkspace_getIndices", (DL_FUNC) &_flowWorkspace_getIndices, 3},
    {"_flowWorkspace_setIndices", (DL_FUNC) &_flowWorkspace_setIndices, 4},
    {"_flowWorkspace_getGateFlag", (DL_FUNC) &_flowWorkspace_getGateFlag, 3},
    {"_flowWorkspace_getNegateFlag", (DL_FUNC) &_flowWorkspace_getNegateFlag, 3},
    {"_flowWorkspace_getHiddenFlag", (DL_FUNC) &_flowWorkspace_getHiddenFlag, 3},
    {"_flowWorkspace_addGate", (DL_FUNC) &_flowWorkspace_addGate, 5},
    {"_flowWorkspace_boolGating", (DL_FUNC) &_flowWorkspace_boolGating, 4},
    {"_flowWorkspace_setGate", (DL_FUNC) &_flowWorkspace_setGate, 4},
    {"_flowWorkspace_removeNode", (DL_FUNC) &_flowWorkspace_removeNode, 3},
    {"_flowWorkspace_moveNode", (DL_FUNC) &_flowWorkspace_moveNode, 4},
    {"_flowWorkspace_setNodeName", (DL_FUNC) &_flowWorkspace_setNodeName, 4},
    {"_flowWorkspace_setNodeFlag", (DL_FUNC) &_flowWorkspace_setNodeFlag, 4},
    {"_flowWorkspace_getSamples", (DL_FUNC) &_flowWorkspace_getSamples, 1},
    {"_flowWorkspace_NewGatingSet", (DL_FUNC) &_flowWorkspace_NewGatingSet, 3},
    {"_flowWorkspace_NewGatingSet_rootOnly", (DL_FUNC) &_flowWorkspace_NewGatingSet_rootOnly, 1},
    {"_flowWorkspace_saveGatingSet", (DL_FUNC) &_flowWorkspace_saveGatingSet, 2},
    {"_flowWorkspace_loadGatingSet", (DL_FUNC) &_flowWorkspace_loadGatingSet, 1},
    {"_flowWorkspace_CloneGatingSet", (DL_FUNC) &_flowWorkspace_CloneGatingSet, 2},
    {"_flowWorkspace_combineGatingSet", (DL_FUNC) &_flowWorkspace_combineGatingSet, 2},
    {"_flowWorkspace_setSample", (DL_FUNC) &_flowWorkspace_setSample, 3},
    {"_flowWorkspace_getLogLevel", (DL_FUNC) &_flowWorkspace_getLogLevel, 0},
    {"_flowWorkspace_setLogLevel", (DL_FUNC) &_flowWorkspace_setLogLevel, 1},
    {"_flowWorkspace_toggleErrorFlag", (DL_FUNC) &_flowWorkspace_toggleErrorFlag, 0},
    {"_flowWorkspace_getDescendants", (DL_FUNC) &_flowWorkspace_getDescendants, 3},
    {"_flowWorkspace_getPopCounts", (DL_FUNC) &_flowWorkspace_getPopCounts, 5},
    {"_flowWorkspace_getSingleCellExpressionByGate", (DL_FUNC) &_flowWorkspace_getSingleCellExpressionByGate, 6},
    {"_flowWorkspace_getSingleCellExpression", (DL_FUNC) &_flowWorkspace_getSingleCellExpression, 6},
    {"_flowWorkspace_setCounts", (DL_FUNC) &_flowWorkspace_setCounts, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_flowWorkspace(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
