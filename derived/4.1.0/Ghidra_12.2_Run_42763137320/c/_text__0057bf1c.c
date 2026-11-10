/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057bf1c; name: FUN_.text__0057bf1c
 */


void FUN__text__0057bf1c(undefined8 param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  
  if (param_4 < 9) {
    uVar1 = NEON_fminnm((float)param_1 * 0.45,param_2);
                    /* WARNING: Could not emulate address calculation at 0x0057bf70 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0057bf88 + (ulong)*(ushort *)((ulong)param_4 * 2 + 0x73eaf8) * 4))
              (param_1,uVar1);
    return;
  }
  *(undefined8 *)(param_3 + 4) = 0;
  param_3[6] = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  param_3[0xc] = 0;
  param_3[0x18] = 0x7fc00000;
  param_3[0x1c] = 0x7fc00000;
  param_3[0x10] = 0xffc00000;
  param_3[0x14] = 0xffc00000;
  *param_3 = 0xffc00000;
  param_3[1] = 0xffc00000;
  param_3[2] = 0xffc00000;
  param_3[3] = 0xffc00000;
  param_3[0x15] = 0x7fc00000;
  param_3[0x1d] = 0xffc00000;
  param_3[0x19] = 0xffc00000;
  param_3[0x17] = 0x7fc00000;
  param_3[0x1a] = 0x7fc00000;
  param_3[0x1b] = 0xffc00000;
  param_3[0x16] = 0x7fc00000;
  param_3[0x1e] = 0xffc00000;
  param_3[7] = 0xffc00000;
  param_3[10] = 0xffc00000;
  param_3[0xd] = 0xffc00000;
  param_3[0x11] = 0xffc00000;
  param_3[0xb] = 0xffc00000;
  param_3[0xe] = 0xffc00000;
  param_3[0x12] = 0x7fc00000;
  param_3[0xf] = 0xffc00000;
  param_3[0x13] = 0x7fc00000;
  param_3[0x1f] = 0xffc00000;
  return;
}


