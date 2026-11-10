/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00432aa0; name: FUN_.text__00432aa0
 */


undefined8 FUN__text__00432aa0(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar5;
  undefined8 *puVar4;
  ulong local_48;
  undefined4 local_40;
  undefined4 *local_38;
  undefined1 uStack_11;
  
  uVar3 = *(uint *)(param_2 + 1);
  iVar1 = uVar3 - *(uint *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 0xc) <= uVar3 && iVar1 != 0) {
    uVar2 = FUN__text__00433280(param_1,iVar1);
    if ((uVar2 & 1) == 0) {
      return 0x34;
    }
    uVar3 = *(uint *)(param_2 + 1);
  }
  if (uVar3 != 0) {
    puVar4 = (undefined8 *)*param_2;
    do {
      puVar5 = puVar4 + 1;
      local_38 = (undefined4 *)*puVar4;
      local_40 = local_38[1];
      local_48 = (ulong)CONCAT14(*(undefined1 *)((long)local_38 + 0xd),*local_38);
      FUN__text__00433370(param_1,&local_48,&uStack_11);
      puVar4 = puVar5;
    } while (puVar5 != (undefined8 *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 8));
  }
  return 1;
}


