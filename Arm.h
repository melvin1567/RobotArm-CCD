//
// Created by Melvin Stans on 15/09/2018.
//

#ifndef ROBOTARM_ARM_H
#define ROBOTARM_ARM_H

#include "ArmSegment.h"
#include "Eigen/Core"
#include "Eigen/Geometry"

using Eigen::Vector2d;
using Eigen::Vector3d;

class Arm {
public:
    int segmentLength;
    int segmentCount;
    ArmSegment armSegments[3];
    void moveToPoint(Vector2d targetPoint);
    void updateArm(Vector3d targetPoint);
    Arm(int segmentLength, int segmentCount);
    Arm();
};

#endif //ROBOTARM_ARM_H
