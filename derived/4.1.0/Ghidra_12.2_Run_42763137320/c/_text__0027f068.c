/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027f068; name: FUN_.text__0027f068
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0027f068(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  if ((*(long *)(param_1 + 0xb8) == 0) || (uVar5 = FUN__text__001155b0(), (uVar5 & 1) != 0)) {
    iVar4 = FUN__text__0015ab30();
    uVar2 = *(uint *)(param_1 + 0xac0);
    if (uVar2 == 1) {
      local_40 = 0x1d6021ebfcbdd9ae;
      uStack_38 = 0x720c77;
      lVar6 = *(long *)(param_1 + 0xb8);
      local_30 = 0x17;
    }
    else {
      if (uVar2 != 0) {
        lVar6 = _DAT_008a1760 + (long)iVar4 * 0x2c;
        if ((int)uVar2 < 10) {
          uVar3 = uVar2 - 2;
          uVar1 = uVar3;
          if ((int)uVar3 < 0) {
            uVar1 = uVar2 + 1;
          }
          uVar3 = uVar3 - (uVar1 & 0xfffffffc);
          if (uVar3 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x0027f17c */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK__text__0027f188 + (ulong)*(byte *)((ulong)uVar3 + 0x72d3e6) * 4))();
            return;
          }
          *(undefined1 *)(param_1 + 0xac4) = 1;
        }
        else {
          *(undefined1 *)(param_1 + 0xac4) = 1;
          if (0x2d < uVar2) goto LAB__text__0027f224;
        }
        uVar1 = uVar2 - 10;
        uVar2 = uVar2 - 7;
        if (-1 < (int)uVar1) {
          uVar2 = uVar1;
        }
        uVar1 = uVar1 - (uVar2 & 0xfffffffc);
        if (uVar1 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x0027f1ec */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK__text__0027f200 + (ulong)*(byte *)((ulong)uVar1 + 0x72d3ea) * 4))(lVar6);
          return;
        }
LAB__text__0027f224:
        *(undefined1 *)(param_1 + 0xac5) = 1;
        return;
      }
      local_40 = 0x153e92b540c06ce1;
      uStack_38 = 0x71ccbf;
      lVar6 = *(long *)(param_1 + 0xb8);
      local_30 = 0x16;
    }
    if (lVar6 != 0) {
      local_28 = 0;
      FUN__text__00115454(lVar6,&local_40,0xb);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
    }
    *(int *)(param_1 + 0xac0) = *(int *)(param_1 + 0xac0) + 1;
  }
  return;
}


