/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d8e58; name: FUN_.text__004d8e58
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004d8e58(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_48;
  long local_40;
  undefined4 local_38;
  
  uVar3 = (**(code **)(*param_2 + 0x28))(param_2);
  puVar1 = _DAT_008a4630;
  if ((uVar3 & 1) != 0) {
    local_38 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN__text__004aa040(*_DAT_008a4630,*(undefined4 *)((long)param_1 + 0x14),&local_48);
    if (local_40 != 0) {
      iVar2 = (**(code **)(*param_2 + 0x30))(param_2,local_40,param_1[1]);
      if (iVar2 == 1) {
        FUN__text__004aa280(*puVar1,*(undefined4 *)((long)param_1 + 0x14),param_1);
        *param_1 = local_48;
        param_1[1] = local_40;
        return 1;
      }
      FUN__text__004aa280(*puVar1,*(undefined4 *)((long)param_1 + 0x14),&local_48);
    }
  }
  return 0;
}


