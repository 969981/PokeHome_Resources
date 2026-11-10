/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003dceb0; name: FUN_.text__003dceb0
 */


undefined8 FUN__text__003dceb0(uint *param_1,ulong param_2)

{
  void *pvVar1;
  int extraout_w1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = *(ulong **)(param_1 + 4);
  if (puVar2 == (ulong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar2;
  }
  if (param_2 == 0) {
    uVar3 = uVar4 + 1;
    if (0x1c < uVar3) {
      return 0;
    }
  }
  else {
    if (0xfffffff0 < param_2) {
      return 0;
    }
    uVar3 = 0;
    if (*param_1 <= param_2) {
      uVar3 = 0x1c - LZCOUNT(((int)param_2 - *param_1) + 0x10);
    }
    if (uVar3 <= uVar4) {
      return 1;
    }
  }
  if (puVar2 == (ulong *)0x0) {
    puVar2 = operator_new(0xe8);
    puVar2[0x1c] = 0;
    *(ulong **)(param_1 + 4) = puVar2;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0x13] = 0;
    puVar2[0x12] = 0;
    puVar2[0x15] = 0;
    puVar2[0x14] = 0;
    puVar2[0x17] = 0;
    puVar2[0x16] = 0;
    puVar2[0x19] = 0;
    puVar2[0x18] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1a] = 0;
  }
  if (uVar4 < uVar3) {
    do {
      if ((ulong)(0x10L << (uVar4 & 0x3f)) >> 0x3d != 0) {
        FUN__text__003dd070();
        __cxa_begin_catch();
        if (extraout_w1 != 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        __cxa_end_catch();
        return 0;
      }
      pvVar1 = operator_new(0x80L << (uVar4 & 0x3f));
      puVar2[uVar4 + 1] = (ulong)pvVar1;
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
    puVar2 = *(ulong **)(param_1 + 4);
  }
  *puVar2 = uVar3;
  return 1;
}


