/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047ba50; name: FUN_.text__0047ba50
 */


void FUN__text__0047ba50(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar3;
  undefined8 *puVar2;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = puVar1;
  if ((int)param_1[1] != 0) {
    do {
      puVar3 = puVar2 + 1;
      uVar4 = *puVar2;
      FUN__text__0047c508(uVar4);
      FUN__text__0047c4a8(uVar4);
      FUN__text__00400fc0(0,uVar4);
      puVar1 = (undefined8 *)*param_1;
      puVar2 = puVar3;
    } while (puVar3 != puVar1 + *(uint *)(param_1 + 1));
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN__text__00400fc0(0,puVar1);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


