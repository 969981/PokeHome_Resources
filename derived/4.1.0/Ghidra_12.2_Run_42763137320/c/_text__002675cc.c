/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002675cc; name: FUN_.text__002675cc
 */


void FUN__text__002675cc(long param_1)

{
  code *pcVar1;
  
  FUN__text__003d1120(param_1 + 0xbfb0);
  FUN__text__003d1120(param_1 + 0xb950);
  FUN__text__003d1120(param_1 + 0xb2f0);
  FUN__text__003d1120(param_1 + 0xac90);
  FUN__text__003d1120(param_1 + 0xa630);
  FUN__text__003d1120(param_1 + 0x9fd0);
  FUN__text__003d1120(param_1 + 0x9970);
  FUN__text__003d1120(param_1 + 0x9310);
  FUN__text__003d1120(param_1 + 0x8cb0);
  FUN__text__003d1120(param_1 + 0x8650);
  FUN__text__003d1120(param_1 + 0x7ff0);
  FUN__text__003d1120(param_1 + 0x7990);
  FUN__text__003d1120(param_1 + 0x7330);
  FUN__text__003d1120(param_1 + 0x6cd0);
  FUN__text__003d1120(param_1 + 0x6670);
  FUN__text__003d1120(param_1 + 0x6010);
  FUN__text__003d1120(param_1 + 0x59b0);
  FUN__text__003d1120(param_1 + 0x5350);
  FUN__text__003d1120(param_1 + 0x4cf0);
  FUN__text__003d1120(param_1 + 0x4690);
  FUN__text__003d1120(param_1 + 0x4030);
  FUN__text__003d1120(param_1 + 0x39d0);
  FUN__text__003d1120(param_1 + 0x3370);
  FUN__text__003d1120(param_1 + 0x2d10);
  FUN__text__003d1120(param_1 + 0x26b0);
  FUN__text__003d1120(param_1 + 0x2050);
  FUN__text__003d1120(param_1 + 0x19f0);
  FUN__text__003d1120(param_1 + 0x1390);
  FUN__text__003d1120(param_1 + 0xd30);
  FUN__text__003d1120(param_1 + 0x6d0);
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


