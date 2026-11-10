/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00428120; name: FUN_.text__00428120
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__00428120(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_var;
  undefined8 extraout_x1;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  uVar2 = FUN__text__00428734();
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 10) >> 4 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    FUN__text__004de260(0,param_1 + 0x24);
    _local_40 = CONCAT44(extraout_var,uVar1);
    uStack_38 = extraout_x1;
    FUN__text__0048e990(*_DAT_008a4638,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x280),&local_40,
                        param_1);
  }
  return uVar2;
}


