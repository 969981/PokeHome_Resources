/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055d850; name: FUN_.text__0055d850
 */


void FUN__text__0055d850(undefined8 param_1,undefined4 param_2,long *param_3,uint param_4)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (param_4 < 9) {
    uVar4 = NEON_fminnm((float)param_1 * 0.45,param_2);
                    /* WARNING: Could not emulate address calculation at 0x0055d89c */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0055d8b4 + (ulong)*(ushort *)((ulong)param_4 * 2 + 0x73e3d8) * 4))
              (param_1,uVar4);
    return;
  }
  uVar3 = *(uint *)((long)param_3 + 0xc);
  puVar2 = (undefined4 *)*param_3;
  if (((uVar3 & 1) != 0) && (puVar2 != (undefined4 *)0x0)) {
    *puVar2 = 0xffc00000;
    puVar2[1] = 0xffc00000;
    puVar2[2] = 0xffc00000;
    puVar2[0x15] = 0xffc00000;
    puVar2[3] = 0xffc00000;
    *(undefined8 *)(puVar2 + 4) = 0;
    puVar2[0x19] = 0xffc00000;
    puVar2[7] = 0xffc00000;
    puVar2[10] = 0xffc00000;
    puVar2[0xd] = 0xffc00000;
    puVar2[6] = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    puVar2[0xc] = 0;
    puVar2[0x10] = 0xffc00000;
    puVar2[0x16] = 0xffc00000;
    puVar2[0x14] = 0xffc00000;
    puVar2[0x18] = 0x7fc00000;
    puVar2[0x1c] = 0x7fc00000;
    puVar2[0x17] = 0x7fc00000;
    puVar2[0x11] = 0xffc00000;
    puVar2[0xb] = 0xffc00000;
    puVar2[0xe] = 0xffc00000;
    puVar2[0x1d] = 0xffc00000;
    puVar2[0x1a] = 0x7fc00000;
    puVar2[0x12] = 0xffc00000;
    puVar2[0xf] = 0xffc00000;
    puVar2[0x13] = 0xffc00000;
    puVar2[0x1b] = 0xffc00000;
    puVar2[0x1e] = 0xffc00000;
    puVar2[0x1f] = 0xffc00000;
    uVar3 = *(uint *)((long)param_3 + 0xc);
    puVar2 = (undefined4 *)*param_3;
  }
  if (((uVar3 >> 1 & 1) != 0) && (puVar2 != (undefined4 *)0x0)) {
    puVar2 = puVar2 + ((uVar3 & 1) << 5);
    *puVar2 = 0;
    puVar2[1] = 0xffc00000;
    puVar2[2] = 0;
    puVar2[3] = 0xffc00000;
    puVar2[4] = 0xffc00000;
    puVar2[6] = 0xffc00000;
    puVar2[8] = 0xffc00000;
    puVar2[10] = 0xffc00000;
    puVar2[0xc] = 0xffc00000;
    puVar2[0xe] = 0xffc00000;
    puVar2[0x10] = 0x7fc00000;
    puVar2[0x12] = 0x7fc00000;
    puVar2[0x14] = 0x7fc00000;
    puVar2[0x16] = 0x7fc00000;
    puVar2[5] = 0xffc00000;
    puVar2[7] = 0xffc00000;
    puVar2[9] = 0xffc00000;
    puVar2[0xb] = 0xffc00000;
    puVar2[0xd] = 0xffc00000;
    puVar2[0xf] = 0xffc00000;
    puVar2[0x15] = 0xffc00000;
    puVar2[0x17] = 0xffc00000;
    puVar2[0x11] = 0xffc00000;
    puVar2[0x13] = 0xffc00000;
    uVar3 = *(uint *)((long)param_3 + 0xc);
  }
  if (((uVar3 >> 2 & 1) != 0) && (*param_3 != 0)) {
    lVar1 = 0;
    if ((uVar3 & 2) != 0) {
      lVar1 = 0x60;
    }
    puVar2 = (undefined4 *)(*param_3 + (ulong)((uVar3 & 1) << 5) * 4 + lVar1);
    *puVar2 = 0xffc00000;
    puVar2[1] = 0xffc00000;
    puVar2[2] = 0xffc00000;
    puVar2[3] = 0x7fc00000;
    puVar2[4] = 0x7fc00000;
  }
  return;
}


