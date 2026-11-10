/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00427d58; name: FUN_.text__00427d58
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__00427d58(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  undefined8 extraout_x1;
  undefined1 auVar2 [12];
  int local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  iVar1 = *(int *)(param_1 + 0x28);
  auVar2 = FUN__text__004de4f0(param_1 + 0x90,*param_2,param_1 + 0x24);
  *param_2 = auVar2._8_4_;
  FUN__text__004af510(param_1 + 0xa0,*(undefined8 *)(param_1 + 0x18),iVar1,iVar1 + auVar2._4_4_);
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 10) >> 4 & 1) != 0) {
    FUN__text__004de260(0x3f800000,param_1 + 0x24);
    _local_50 = CONCAT44(extraout_var,iVar1);
    uStack_48 = extraout_x1;
    FUN__text__0048e990(*_DAT_008a4638,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x280),&local_50,
                        param_1);
  }
  return auVar2._0_8_ & 0xffffffff;
}


