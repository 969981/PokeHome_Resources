/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002084d8; name: FUN_.text__002084d8
 */


void FUN__text__002084d8(long param_1)

{
  code *pcVar1;
  
  FUN__text__003d1120(param_1 + 0x9fe0);
  FUN__text__003d1120(param_1 + 0x9980);
  FUN__text__003d1120(param_1 + 0x9320);
  FUN__text__003d1120(param_1 + 0x8cc0);
  FUN__text__003d1120(param_1 + 0x8660);
  FUN__text__003d1120(param_1 + 0x8000);
  FUN__text__003d1120(param_1 + 0x79a0);
  FUN__text__003d1120(param_1 + 0x7340);
  FUN__text__003d1120(param_1 + 0x6ce0);
  FUN__text__003d1120(param_1 + 0x6680);
  FUN__text__003d1120(param_1 + 0x6020);
  FUN__text__003d1120(param_1 + 0x59c0);
  FUN__text__003d1120(param_1 + 0x5360);
  FUN__text__003d1120(param_1 + 0x4d00);
  FUN__text__003d1120(param_1 + 0x46a0);
  FUN__text__003d1120(param_1 + 0x4040);
  FUN__text__003d1120(param_1 + 0x39e0);
  FUN__text__003d1120(param_1 + 0x3380);
  FUN__text__003d1120(param_1 + 0x2d20);
  FUN__text__003d1120(param_1 + 0x26c0);
  FUN__text__003d1120(param_1 + 0x2060);
  FUN__text__003d1120(param_1 + 0x1a00);
  FUN__text__003d1120(param_1 + 0x13a0);
  FUN__text__003d1120(param_1 + 0xd40);
  FUN__text__003d1120(param_1 + 0x6e0);
  if (*(long *)(param_1 + 0x6c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6c8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6c8) = 0;
  }
  if (*(long *)(param_1 + 0x6c0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6c0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6c0) = 0;
  }
  pcVar1 = *(code **)(param_1 + 0x648);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x658) = 0;
    *(undefined8 *)(param_1 + 0x650) = 0;
    *(undefined8 *)(param_1 + 0x648) = 0;
    *(undefined8 *)(param_1 + 0x640) = 0;
    (*pcVar1)(param_1 + 0x660);
  }
  FUN__text__00128620(param_1);
  return;
}


