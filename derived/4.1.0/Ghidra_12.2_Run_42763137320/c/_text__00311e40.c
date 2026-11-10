/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00311e40; name: FUN_.text__00311e40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00311e40(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  
  param_1[7] = 0;
  lVar3 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar3 + 0x10;
  lVar3 = 0;
  if (uVar1 != 0) {
    if (*(long *)(uVar1 + 0x98) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  lVar2 = _DAT_008a2bb0;
  *param_1 = _DAT_008a2bb0 + 0x10;
  param_1[1] = lVar3;
  param_1[9] = lVar2 + 0x60;
  memset((void *)((long)param_1 + 0x5c),0,0x41c8);
  *(undefined8 *)((long)param_1 + 0x54) = 0x62f120f17;
  *(undefined8 *)((long)param_1 + 0x4224) = 0;
  *(undefined8 *)((long)param_1 + 0x93c) = 0x3a7a66783a7a6678;
  *(undefined8 *)((long)param_1 + 0x944) = 0x3a7a66783a7a6678;
  puVar4 = (undefined4 *)((long)param_1 + 0xfcc);
  lVar3 = 0xba;
  *(undefined4 *)((long)param_1 + 0x4264) = 0;
  *(undefined8 *)((long)param_1 + 0x422c) = 0;
  *(undefined8 *)((long)param_1 + 0x4234) = 0;
  *(undefined8 *)((long)param_1 + 0x423c) = 0;
  *(undefined8 *)((long)param_1 + 0x4244) = 0;
  *(undefined8 *)((long)param_1 + 0x424c) = 0;
  *(undefined8 *)((long)param_1 + 0x4254) = 0;
  *(undefined8 *)((long)param_1 + 0x425c) = 0;
  do {
    *(undefined2 *)(puVar4 + 1) = 0;
    lVar3 = lVar3 + -1;
    *puVar4 = 0x7f00fe;
    puVar4[0x117] = 0x7f00fe;
    *(undefined2 *)(puVar4 + 0x118) = 0;
    puVar4[0x22e] = 0x7f00fe;
    *(undefined2 *)(puVar4 + 0x22f) = 0;
    puVar4[0x345] = 0x7f00fe;
    *(undefined2 *)(puVar4 + 0x346) = 0;
    puVar4 = (undefined4 *)((long)puVar4 + 6);
  } while (lVar3 != 0);
  return;
}


