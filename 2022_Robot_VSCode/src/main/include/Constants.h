// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

// Acceleration mods
const double accelMod = .35;
const double accelRamp = .05;
const double turnMod = .25;
const double turnRamp = .05;
const double boost = 2.8;

//Gamepad bindings
enum gamePadConfig {
  port = 0,
  accelerationAxis = 1,
  steeringAxis = 2,
  leftDriveAxis = 1,
  rightDriveAxis = 3,
  boostButton = 6,
  brakeButton = 12,
  intakeButton = 8,
  shootButton = 7
};

//CAN Ids and solenoid ports
enum canIds {
  climberLeadId = 1,
  climberFollowId = 2,
  climberRotateId = 3,
  stage1TalonId = 5,
  stage2TalonId = 4,
  stage3SparkId = 6,
  leftFalconLeadId = 13,
  leftFalconFollowId = 12,
  rightFalconLeadId = 11,
  rightFalconFollowId = 10,
  compressorId = 8,
  solenoidPort = 0
};

//Climber things
enum climbBinds{
  climbAxis = 1,
  rotateAxis = 2,
  startClimbButton = 13,
  climbFinishedButton = 14
};

const double climbSpeed = .5;
const double rotateSpeed = .375;
const double holdSpeed = .1;
const double climbDriveSpeed = .1;
const double climbRotateSpeed = .075;


//Shooter parameters
const double intakeBeltSpeed = .7;
const double shootBeltSpeed = .5;
const double shootSpeed = 0.8;
const int intakeTimeout = 1500;
const int shootStartTime = 2000;
const int shootTimeout = 1200;

//Auto parameters
const int initialMovement = 2000;