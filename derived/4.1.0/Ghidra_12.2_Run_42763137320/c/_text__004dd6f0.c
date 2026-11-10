/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dd6f0; name: FUN_.text__004dd6f0
 */


undefined8 FUN__text__004dd6f0(long *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar2 = FUN__text__004ddcf4();
  iVar3 = (**(code **)(*param_1 + 0x140))(param_1,iVar2,param_1 + 5);
  if (iVar3 != 1) {
    return 2;
  }
  lVar4 = param_1[3];
  *(int *)(lVar4 + 0x30c) = iVar2 - (int)param_1[5];
  puVar1 = (uint *)(lVar4 + 0x313);
  *puVar1 = *puVar1 & 0xfe3fffff;
  if ((*(byte *)((long)param_1 + 0x82) >> 1 & 1) == 0) {
    (**(code **)(*(long *)param_1[0xb] + 0x90))();
    *(undefined4 *)(param_1 + 0xd) = 0;
    param_1[0xc] = 0;
    return 1;
  }
  *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xfd;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xc] = 0;
  return 1;
}


