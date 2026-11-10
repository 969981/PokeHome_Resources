/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dd29c; name: FUN_.text__004dd29c
 */


undefined8 FUN__text__004dd29c(long *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar2 = FUN__text__004ddcf4();
  uVar3 = (**(code **)(*param_1 + 0x140))(param_1,iVar2,param_1 + 5);
  if ((int)uVar3 == 1) {
    lVar4 = param_1[3];
    *(int *)(lVar4 + 0x30c) = iVar2 - (int)param_1[5];
    puVar1 = (uint *)(lVar4 + 0x313);
    *puVar1 = *puVar1 & 0xfe3fffff;
    return uVar3;
  }
  return 2;
}


