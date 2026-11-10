/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030acc0; name: FUN_.text__0030acc0
 */


void FUN__text__0030acc0(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  
  FUN__text__002a6be8(param_1 + 0x20e0);
  lVar4 = -0x880;
  puVar3 = (undefined8 *)(param_1 + 0x1fd0);
  do {
    *puVar3 = 0x867a18;
    if (puVar3[1] == 0) {
      puVar3[1] = 0;
      pcVar2 = (code *)puVar3[0x13];
    }
    else {
      FUN__text__005d9290(puVar3[1],puVar3);
      lVar1 = puVar3[1];
      puVar3[1] = 0;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
      pcVar2 = (code *)puVar3[0x13];
    }
    if (pcVar2 != (code *)0x0) {
      puVar3[0x14] = 0;
      puVar3[0x15] = 0;
      puVar3[0x12] = 0;
      puVar3[0x13] = 0;
      (*pcVar2)(puVar3 + 0x16);
    }
    pcVar2 = (code *)puVar3[3];
    if (pcVar2 != (code *)0x0) {
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      (*pcVar2)(puVar3 + 6);
    }
    if (puVar3[1] != 0) {
      (**(code **)(*(long *)(puVar3[1] + 0x48) + 0x18))();
      puVar3[1] = 0;
    }
    puVar3 = puVar3 + -0x22;
    lVar4 = lVar4 + 0x110;
  } while (lVar4 != 0);
  return;
}


