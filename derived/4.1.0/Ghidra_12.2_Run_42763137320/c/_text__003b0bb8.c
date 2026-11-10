/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b0bb8; name: FUN_.text__003b0bb8
 */


void FUN__text__003b0bb8(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_40 [4];
  
  if (*(long *)(param_1 + 0x5c0) != 0) {
    lVar2 = *(long *)(param_1 + 0x800);
    local_40[0] = FUN__text__003b7414(lVar2,*(undefined4 *)(lVar2 + 0x14),
                                      *(undefined4 *)(lVar2 + 0x10));
    uVar3 = (**(code **)(param_1 + 0x5c0))(param_1 + 0x5e0,local_40,param_1 + 0x7ac);
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  iVar1 = FUN__text__003b7634(*(undefined8 *)(param_1 + 0x800),param_1 + 0x7ac);
  if (iVar1 - 1U < 6) {
                    /* WARNING: Could not emulate address calculation at 0x003b0c24 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__003b0c30 + (ulong)*(byte *)((ulong)(iVar1 - 1U) + 0x73a7ab) * 4))();
    return;
  }
  return;
}


