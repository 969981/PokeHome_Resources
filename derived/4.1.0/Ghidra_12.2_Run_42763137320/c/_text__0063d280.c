/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063d280; name: FUN_.text__0063d280
 */


void FUN__text__0063d280(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)*puVar6;
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  puVar5 = (undefined8 *)puVar6[1];
  while (puVar1 = puVar5, puVar1 != puVar7) {
    puVar5 = puVar1 + -0x22;
    *puVar5 = 0x867958;
    if (puVar1[-0x21] == 0) {
      puVar1[-0x21] = 0;
      pcVar3 = (code *)puVar1[-0xf];
    }
    else {
      FUN__text__005d9290(puVar1[-0x21],puVar5);
      lVar2 = puVar1[-0x21];
      puVar1[-0x21] = 0;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      pcVar3 = (code *)puVar1[-0xf];
    }
    if (pcVar3 != (code *)0x0) {
      puVar1[-0xe] = 0;
      puVar1[-0xd] = 0;
      puVar1[-0x10] = 0;
      puVar1[-0xf] = 0;
      (*pcVar3)(puVar1 + -0xc);
    }
    pcVar3 = (code *)puVar1[-0x1f];
    if (pcVar3 != (code *)0x0) {
      puVar1[-0x1e] = 0;
      puVar1[-0x1d] = 0;
      puVar1[-0x20] = 0;
      puVar1[-0x1f] = 0;
      (*pcVar3)(puVar1 + -0x1c);
    }
    if (puVar1[-0x21] != 0) {
      (**(code **)(*(long *)(puVar1[-0x21] + 0x48) + 0x18))();
      puVar1[-0x21] = 0;
    }
  }
  puVar6[1] = puVar7;
  plVar4 = (long *)*param_1;
                    /* WARNING: Could not recover jumptable at 0x0063d390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)plVar4[3] + 0x18))((long *)plVar4[3],*plVar4,plVar4[2] - *plVar4,0x10);
  return;
}


