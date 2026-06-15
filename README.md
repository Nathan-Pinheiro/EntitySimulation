# Entity Simulation

## Goal :

Create physical intelligence througt animal-like brain training.

## Description :

This projects aims to train a animal-like entity to represent the world by evovling in different stage of its life.

### Stage :

<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8" />
<style>
  body {
    font-family: Arial, sans-serif;
    background: #0f172a;
    color: white;
    display: flex;
    justify-content: center;
    margin-top: 80px;
  }

  .map {
    position: relative;
    width: 400px;
    height: 300px;
  }

  /* Generic circle */
  .node {
    position: absolute;
    width: 90px;
    height: 90px;
    border-radius: 50%;
    background: #3b82f6;
    display: flex;
    align-items: center;
    justify-content: center;
    cursor: pointer;
    transition: transform 0.2s;
  }

  .node:hover {
    transform: scale(1.1);
    background: #2563eb;
  }

  /* Tooltip */
  .tooltip {
    visibility: hidden;
    width: 160px;
    background: #111827;
    color: #fff;
    text-align: center;
    padding: 8px;
    border-radius: 6px;

    position: absolute;
    top: -70px;
    left: 50%;
    transform: translateX(-50%);
    opacity: 0;
    transition: opacity 0.3s;
    font-size: 12px;
  }

  .node:hover .tooltip {
    visibility: visible;
    opacity: 1;
  }

  /* Positions */
  .center {
    top: 100px;
    left: 155px;
    background: #22c55e;
  }

  .left {
    top: 200px;
    left: 40px;
  }

  .right {
    top: 200px;
    right: 40px;
  }

  /* simple connection lines */
  .line {
    position: absolute;
    height: 2px;
    background: #94a3b8;
  }

  .line-left {
    width: 120px;
    top: 160px;
    left: 80px;
    transform: rotate(30deg);
  }

  .line-right {
    width: 120px;
    top: 160px;
    right: 80px;
    transform: rotate(-30deg);
  }

</style>
</head>
<body>

<div class="map">

  <!-- lines -->
  <div class="line line-left"></div>
  <div class="line line-right"></div>

  <!-- center -->
  <div class="node center">
    🌱
    <div class="tooltip">
      <b>Embryon</b><br/>
      Initial state with core logic
    </div>
  </div>

  <!-- input1 -->
  <div class="node left">
    I1
    <div class="tooltip">
      <b>Input 1</b><br/>
      First data entry
    </div>
  </div>

  <!-- input2 -->
  <div class="node right">
    I2
    <div class="tooltip">
      <b>Input 2</b><br/>
      Second data entry
    </div>
  </div>

</div>

</body>
</html>
