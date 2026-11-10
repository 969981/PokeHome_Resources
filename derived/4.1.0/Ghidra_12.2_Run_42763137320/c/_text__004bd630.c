/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bd630; name: FUN_.text__004bd630
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004bd630(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 local_50;
  undefined4 local_44;
  
  if (((*(uint *)(param_1 + 0x48) | 2) == 2) && (*(int *)(param_1 + 0xa8) == 0)) {
    local_44 = 0;
    *(undefined4 *)(param_1 + 0x48) = 1;
    puVar1 = _DAT_008a45d8;
    while( true ) {
      local_50 = 0;
      iVar2 = FUN__text__004bd4a0(param_1,&local_44,&local_50);
      piVar4 = *(int **)(param_1 + 0xa0);
      if (*(long *)(param_1 + 0x58) != 0) {
        FUN__text__0040c060();
      }
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + 1;
      }
      *(int **)(param_1 + 0x58) = piVar4;
      if ((iVar2 == 0) ||
         (iVar3 = FUN__text__004bd720(param_1,iVar2,local_44,param_2,param_3), iVar3 == 1)) break;
      FUN__text__0048d2a0(*puVar1,*(undefined4 *)(param_1 + 0x6c),iVar2,local_50);
    }
  }
  return 1;
}


