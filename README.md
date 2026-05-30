# turntable

[![Arduino Compile](https://github.com/maduinos/turntable/actions/workflows/arduino.yml/badge.svg)](https://github.com/maduinos/turntable/actions/workflows/arduino.yml)

Personal Arduino stepper turntable experiment by Maduinos.

This is a hobby/lab project and is not part of the Maduinos FPGA business portfolio.

## What It Does

The sketch drives two stepper pulse outputs from a timer interrupt and uses analog input `A1` to adjust the pulse interval.

| Signal | Pin |
| --- | --- |
| Motor 1 direction | D3 |
| Motor 1 step | D2 |
| Motor 2 direction | D7 |
| Motor 2 step | D6 |
| Speed input | A1 |

## Requirements

- Arduino IDE or `arduino-cli`
- `MsTimer2` library
- External stepper drivers suitable for your motors

## Build

Open `turntable.ino` in Arduino IDE after installing `MsTimer2`.

If `arduino-cli` is installed:

```bash
arduino-cli compile --fqbn arduino:avr:uno .
```

## Safety

Stepper motors require appropriate drivers and power wiring. Do not connect motors directly to Arduino GPIO pins.

## License

MIT License. See `LICENSE`.

## Project Management

- Changes: `CHANGELOG.md`
- Release process: `RELEASE.md`
- Support scope: `SUPPORT.md`
- Contribution guide: `CONTRIBUTING.md`
- Security reporting: `SECURITY.md`
