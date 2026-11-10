/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001eafb0; name: FUN_.text__001eafb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001eafb0(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = _DAT_008a0678;
  uVar3 = _DAT_008a0678[1];
  **(undefined4 **)(param_1 + 0x180) = *_DAT_008a0678;
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 4) = uVar3;
  uVar3 = puVar2[3];
  uVar1 = puVar2[4];
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 8) = puVar2[2];
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0xc) = uVar3;
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x10) = uVar1;
  uVar3 = FUN__text__0019c574(*(undefined4 *)(param_1 + 0xf4));
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x23288) = uVar3;
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x23280) = 5;
  return;
}


