> 만든 사람: maduinos<br>
> 문서 만든 날짜: 2026-05-30<br>
> https://maduinos.blogspot.com/

# turntable

Maduinos의 개인 Arduino 스테퍼 모터 턴테이블 실험입니다.

이 저장소는 취미/실험 프로젝트이며 Maduinos FPGA 비즈니스 포트폴리오에 포함되지 않습니다.

## 기능

이 스케치는 timer interrupt로 두 개의 stepper pulse 출력을 만들고, analog input `A1`로 pulse interval을 조정합니다.

| Signal | Pin |
| --- | --- |
| Motor 1 direction | D3 |
| Motor 1 step | D2 |
| Motor 2 direction | D7 |
| Motor 2 step | D6 |
| Speed input | A1 |

## 요구 사항

- Arduino IDE 또는 `arduino-cli`
- `MsTimer2` library
- 사용하는 motor에 맞는 external stepper driver

## 빌드

`MsTimer2`를 설치한 뒤 Arduino IDE에서 `turntable.ino`를 엽니다.

`arduino-cli`가 설치되어 있다면:

```bash
arduino-cli compile --fqbn arduino:avr:uno .
```

## 안전 안내

Stepper motor는 적절한 driver와 전원 배선이 필요합니다. motor를 Arduino GPIO pin에 직접 연결하지 마세요.

## 라이선스

MIT License로 배포합니다. 자세한 내용은 `LICENSE`를 확인하세요.

## 프로젝트 관리

- 변경 이력: `CHANGELOG.md`
- 릴리스 절차: `RELEASE.md`
- 지원 범위: `SUPPORT.md`
- 기여 가이드: `CONTRIBUTING.md`
- 문의·소식: <https://maduinos.blogspot.com/>
