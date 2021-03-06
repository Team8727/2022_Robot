#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include <frc2/command/CommandGroupBase.h>
#include <frc2/command/SequentialCommandGroup.h>
#include <frc/GenericHID.h>
#include "Constants.h"

#include "subsystems/Drivetrain.h"
#include "subsystems/ShooterIntake.h"


class AutoCommand
    : public frc2::CommandHelper<frc2::CommandBase, AutoCommand> {
 public:
    explicit AutoCommand(Drivetrain* drivetrain, ShooterIntake* shooterIntake,frc::GenericHID& controller);

    void Initialize();
    void Execute();
    
private:
  ShooterIntake* m_shooterIntake;     
  Drivetrain* m_drivetrain;
  frc::GenericHID& m_controller;
  double RightInitial;
  double LeftInitial;
  const int initialMovement = 2000;
  std::chrono::time_point<std::chrono::steady_clock> timeout;
  std::chrono::time_point<std::chrono::steady_clock> startup;
  bool firstBall = false;
};

class TwoBallAutoLeft
    : public frc2::CommandHelper<frc2::SequentialCommandGroup, TwoBallAutoLeft> {
 public:
  explicit TwoBallAutoLeft(Drivetrain* drivetrain, ShooterIntake* shooterIntake);
};

class OneBallAutoLeft
    : public frc2::CommandHelper<frc2::SequentialCommandGroup, OneBallAutoLeft> {
 public:
  explicit OneBallAutoLeft(Drivetrain* drivetrain, ShooterIntake* shooterIntake);
};