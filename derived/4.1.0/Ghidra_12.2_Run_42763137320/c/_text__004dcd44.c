/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dcd44; name: FUN_.text__004dcd44
 */


undefined8 FUN__text__004dcd44(long *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  int local_28 [2];
  
  *param_2 = '\0';
  lVar4 = param_1[3];
  if (((*(ushort *)(*(long *)(lVar4 + 0x2a0) + 0xc) >> 1 & 1) != 0) &&
     ((*(byte *)(lVar4 + 0x315) >> 6 & 1) == 0)) {
    lVar6 = *(long *)(lVar4 + 0x340);
    iVar2 = *(int *)(lVar4 + 0x348);
    *(int *)(param_1 + 0xd) = iVar2;
    *param_2 = lVar6 != 0 && iVar2 != 0;
    bVar5 = 2;
    if (lVar6 == 0 || iVar2 == 0) {
      bVar5 = 0;
    }
    *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xfd | bVar5;
    if (*param_2 != '\0') {
      *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) | 0x10;
      uVar3 = (**(code **)(*param_1 + 0x128))(param_1,lVar6);
      if ((int)uVar3 != 1) {
        return uVar3;
      }
      uVar3 = (**(code **)(*param_1 + 0x138))(param_1,lVar6,1);
      if ((int)uVar3 != 1) {
        return uVar3;
      }
      if ((*(byte *)((long)param_1 + 0x82) >> 6 & 1) == 0) {
        lVar4 = param_1[0xd];
        iVar2 = (**(code **)(*(long *)param_1[0xb] + 0x80))
                          ((long *)param_1[0xb],(int)lVar4,0,local_28);
        if (iVar2 != 1) {
          return 2;
        }
        *(int *)(param_1 + 0xe) = local_28[0];
        *(int *)((long)param_1 + 0x74) = (int)lVar4 - local_28[0];
      }
      uVar1 = *(uint *)(param_1 + 6);
      param_1[0xc] = param_1[0xc] + (ulong)uVar1;
      *(uint *)(param_1 + 0xd) = (int)param_1[0xd] - uVar1;
      *(uint *)((long)param_1 + 0x6c) = *(int *)((long)param_1 + 0x6c) + uVar1;
    }
  }
  return 1;
}


