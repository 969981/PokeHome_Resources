/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c9aa8; name: FUN_.text__004c9aa8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c9aa8(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  FUN__text__0048e190(*_DAT_008a45d8,*(undefined4 *)(param_2 + 0x2c));
  (**(code **)(*param_1 + 0x130))(param_1,1);
  FUN__text__00464fec(param_1);
  puVar3 = *(undefined8 **)(param_2 + 0x30);
  iVar1 = *(int *)(puVar3 + 0xc);
  iVar2 = iVar1 + -1;
  *(int *)(puVar3 + 0xc) = iVar2;
  if (((iVar2 == 0) ||
      ((iVar2 == 1 && (iVar1 != 0 || *(char *)((long)puVar3 + 100) == '\0')) &&
       *(char *)((long)puVar3 + 100) != '\0')) &&
     (FUN__text__004473f0(puVar3), *(int *)(puVar3 + 0xc) == 0)) {
    (**(code **)*puVar3)(puVar3);
    FUN__text__00400fc0(4,puVar3);
    return;
  }
  return;
}


