/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0038ae68; name: FUN_.text__0038ae68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0038ae68(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = param_2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x1b0,0x10);
  if (puVar2 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x38af9c);
    (*pcVar1)();
  }
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0x8677a8;
  puVar2[4] = 0;
  puVar2[5] = 0;
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (*(long *)(uVar4 + 0x98) != 0) {
      uVar3 = *(undefined8 *)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8 + -8);
    }
  }
  *_DAT_008a3320 = 1;
  puVar2[0xb] = 0;
  puVar2[0xc] = uVar3;
  puVar2[0xd] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = uVar3;
  *(undefined4 *)(puVar2 + 0xe) = 0;
  *(undefined4 *)(puVar2 + 0x14) = 0x3f800000;
  puVar2[2] = puVar2;
  puVar2[3] = 0x1b0;
  puVar2[0x11] = 0;
  *(undefined4 *)(puVar2 + 0x12) = 0;
  puVar2[0x13] = 0;
  puVar2[4] = 0x10;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[0x28] = 0;
  puVar2[0x29] = 0;
  puVar2[9] = 0x880d18;
  puVar2[10] = 0;
  puVar2[0x26] = 0;
  puVar2[0x27] = 0;
  *puVar2 = 0x880ce8;
  puVar2[1] = param_2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  return;
}


