/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00667800; name: FUN_.text__00667800
 */


undefined4
FUN__text__00667800(long *param_1,int param_2,void *param_3,ulong param_4,size_t *param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  size_t sVar7;
  long lVar8;
  undefined4 local_44;
  
  lVar8 = *param_1;
  local_44 = 0x38;
  uVar4 = FUN__text__0065ab48(*(undefined8 *)(lVar8 + 0xd8),1);
  if ((uVar4 & 1) == 0) {
    iVar1 = *(int *)((long)param_1 + 0x25c);
    *param_5 = 0;
    uVar4 = (ulong)(iVar1 == param_2);
  }
  else {
    iVar1 = *(int *)((long)param_1 + 0x25c);
    iVar2 = *(int *)param_1[0xcc];
    *param_5 = 0;
    uVar4 = (ulong)(iVar1 == param_2);
    if (iVar2 == 1) {
      sVar7 = param_1[0x9f] - param_1[0x9e];
      if (param_4 <= sVar7) {
        sVar7 = param_4;
      }
      if (sVar7 != 0) {
        memcpy(param_3,(void *)(param_1[0x9d] + param_1[0x9e]),sVar7);
        param_1[0x9e] = param_1[0x9e] + sVar7;
        *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) & 0xffbfffff;
        *param_5 = sVar7;
        return 0;
      }
      if (0x3fff < param_4) {
        param_4 = 0x4000;
      }
      bVar3 = true;
      pvVar5 = (void *)param_1[0x9d];
      uVar6 = param_4;
      goto LAB__text__006678dc;
    }
  }
  uVar6 = *(ulong *)(lVar8 + 0xc10);
  bVar3 = false;
  if (param_4 <= uVar6) {
    uVar6 = param_4;
  }
  pvVar5 = param_3;
LAB__text__006678dc:
  sVar7 = (*(code *)param_1[uVar4 + 0x4e])(param_1,uVar4,pvVar5,uVar6,&local_44);
  if (-1 < (long)sVar7) {
    if (bVar3) {
      memcpy(param_3,(void *)param_1[0x9d],sVar7);
      param_1[0x9f] = sVar7;
      param_1[0x9e] = sVar7;
    }
    local_44 = 0;
    *param_5 = *param_5 + sVar7;
  }
  return local_44;
}


