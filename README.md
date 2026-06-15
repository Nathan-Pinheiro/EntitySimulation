# Entity Simulation

## Goal :

Create physical intelligence througt animal-like brain training.

## Description :

This projects aims to train a animal-like entity to represent the world by evovling in different stage of its life.

### Stage :

<svg width="400" height="300" xmlns="http://www.w3.org/2000/svg">

  <style>
    .node { cursor: pointer; }
    .tooltip { visibility: hidden; }
    .node:hover .tooltip { visibility: visible; }
  </style>

  <!-- Embryon -->
  <g class="node">
    <circle cx="200" cy="100" r="40" fill="#22c55e"/>
    <text x="200" y="105" text-anchor="middle" fill="white">🌱</text>
    <text class="tooltip" x="200" y="60" text-anchor="middle" fill="white">
      Embryon - initial state
    </text>
  </g>

  <!-- Input1 -->
  <g class="node">
    <circle cx="100" cy="220" r="35" fill="#3b82f6"/>
    <text x="100" y="225" text-anchor="middle" fill="white">I1</text>
    <text class="tooltip" x="100" y="180" text-anchor="middle" fill="white">
      Input 1
    </text>
  </g>

  <!-- Input2 -->
  <g class="node">
    <circle cx="300" cy="220" r="35" fill="#3b82f6"/>
    <text x="300" y="225" text-anchor="middle" fill="white">I2</text>
    <text class="tooltip" x="300" y="180" text-anchor="middle" fill="white">
      Input 2
    </text>
  </g>

</svg>
