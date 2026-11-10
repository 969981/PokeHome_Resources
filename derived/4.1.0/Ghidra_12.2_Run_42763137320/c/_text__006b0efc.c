/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b0efc; name: FUN_.text__006b0efc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b0efc(long param_1,long param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar3 = _DAT_008a6a20;
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 9 & 1) == 0) {
    FUN__text__006d6610(param_2,param_3,*(undefined8 *)(param_1 + 0x40));
    return;
  }
  pbVar1 = (byte *)(*(long *)(param_1 + 0x18) +
                   ((ulong)uVar2 & 3) * 0x10 + ((ulong)uVar2 & 0x30) +
                   ((ulong)(uVar2 >> 2) & 3) * 0x14);
  (*(code *)*_DAT_008a6a20)
            (*(long *)(param_1 + 0x40) + 8,*(undefined4 *)((ulong)*pbVar1 * 4 + 0x724f30));
  (*DAT_00c60c98)(*(undefined4 *)(pbVar1 + 4),*(undefined8 *)(param_2 + 0xb0));
  FUN__text__006d6610(param_2,param_3,*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x006b0fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(*(long *)(param_1 + 0x40) + 8,8);
  return;
}


