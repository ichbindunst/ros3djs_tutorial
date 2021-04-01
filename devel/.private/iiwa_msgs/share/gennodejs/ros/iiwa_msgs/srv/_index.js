
"use strict";

let TimeToDestination = require('./TimeToDestination.js')
let SetPTPJointSpeedLimits = require('./SetPTPJointSpeedLimits.js')
let SetWorkpiece = require('./SetWorkpiece.js')
let SetSpeedOverride = require('./SetSpeedOverride.js')
let SetPTPCartesianSpeedLimits = require('./SetPTPCartesianSpeedLimits.js')
let SetSmartServoLinSpeedLimits = require('./SetSmartServoLinSpeedLimits.js')
let SetEndpointFrame = require('./SetEndpointFrame.js')
let ConfigureControlMode = require('./ConfigureControlMode.js')
let SetSmartServoJointSpeedLimits = require('./SetSmartServoJointSpeedLimits.js')

module.exports = {
  TimeToDestination: TimeToDestination,
  SetPTPJointSpeedLimits: SetPTPJointSpeedLimits,
  SetWorkpiece: SetWorkpiece,
  SetSpeedOverride: SetSpeedOverride,
  SetPTPCartesianSpeedLimits: SetPTPCartesianSpeedLimits,
  SetSmartServoLinSpeedLimits: SetSmartServoLinSpeedLimits,
  SetEndpointFrame: SetEndpointFrame,
  ConfigureControlMode: ConfigureControlMode,
  SetSmartServoJointSpeedLimits: SetSmartServoJointSpeedLimits,
};
