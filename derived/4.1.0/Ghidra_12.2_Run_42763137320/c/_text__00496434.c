/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00496434; name: FUN_.text__00496434
 */


void FUN__text__00496434(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  
  FUN__text__0046a2e0(param_1,*(ushort *)((long)param_2 + 0x24) & 1,param_2[2]);
  if (*(long *)(param_1 + 0x70) != 0) {
    if ((*(byte *)(*(long *)(param_1 + 0x70) + 200) & 1) != 0) {
      FUN__text__00469b30(param_1);
      uVar1 = *(undefined1 *)(param_2 + 5);
      param_2[2] = param_1;
      uVar2 = *(ushort *)((long)param_2 + 0x24);
      goto joined_r0x00496484;
    }
    FUN__text__0046a010(param_1,*param_2);
  }
  uVar1 = *(undefined1 *)(param_2 + 5);
  param_2[2] = param_1;
  uVar2 = *(ushort *)((long)param_2 + 0x24);
joined_r0x00496484:
  if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x80) != 0)) {
    *(undefined1 *)(param_2 + 5) = 0;
    *(ushort *)((long)param_2 + 0x24) = uVar2 & 0xfffe;
    (**(code **)(**(long **)(param_1 + 0x80) + 0x120))(*(long **)(param_1 + 0x80),param_2);
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    return;
  }
  *(undefined1 *)(param_2 + 5) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x004964f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x78) + 0x120))(*(long **)(param_1 + 0x78),param_2);
  return;
}


