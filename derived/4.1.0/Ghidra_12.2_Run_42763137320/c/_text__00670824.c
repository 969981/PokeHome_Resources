/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00670824; name: FUN_.text__00670824
 */


undefined8 FUN__text__00670824(undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((long)param_1 + 0x3fc);
  if ((uVar1 >> 6 & 1) == 0) {
    return 0;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    uVar2 = param_1[0x2c];
    uVar3 = *(uint *)(param_1 + 0x2e);
    goto LAB__text__00670894;
  }
  if ((uVar1 >> 2 & 1) == 0) {
    if (param_2 != 1) {
      uVar2 = param_1[0x1a];
LAB__text__00670884:
      if ((uVar1 >> 3 & 1) == 0) {
        uVar3 = *(uint *)(param_1 + 0x33);
      }
      else {
        uVar3 = *(uint *)((long)param_1 + 0x19c);
      }
      goto LAB__text__00670894;
    }
    uVar2 = param_1[0x1d];
  }
  else {
    uVar2 = param_1[0x20];
    if (param_2 != 1) goto LAB__text__00670884;
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x34);
LAB__text__00670894:
  *(uint *)((long)param_1 + 0x3fc) = uVar1 | 0x40000000;
  if (*(int *)(param_1 + 0x27) - 4U < 4) {
                    /* WARNING: Could not emulate address calculation at 0x006708b8 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__006708c4 +
                      (ulong)*(byte *)((ulong)(*(int *)(param_1 + 0x27) - 4U) + 0x760ccd) * 4))();
    return uVar2;
  }
  FUN__text__0066713c(*param_1,0x71638c,uVar2,uVar3);
  *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) & 0xbfffffff;
  return 7;
}


