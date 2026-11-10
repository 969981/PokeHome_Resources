/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00432ba0; name: FUN_.text__00432ba0
 */


undefined8 FUN__text__00432ba0(undefined8 *param_1,int *param_2,undefined1 *param_3)

{
  void *__dest;
  char cVar1;
  undefined8 uVar2;
  void *pvVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  void *pvVar8;
  
  cVar1 = *(char *)((long)param_2 + 0xd);
  iVar7 = *param_2;
  pvVar3 = (void *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  pvVar8 = pvVar3;
  if (uVar4 != 0) {
    pvVar8 = (void *)((long)pvVar3 + (ulong)uVar4 * 0x18);
    lVar5 = 0;
    do {
      __dest = (void *)((long)pvVar3 + lVar5);
      if (*(int *)((long)__dest + 8) == param_2[1]) {
        uVar4 = uVar4 - 1;
        if (__dest < (void *)((long)pvVar3 + (ulong)uVar4 * 0x18)) {
          memmove(__dest,(void *)((long)__dest + 0x18),(ulong)(uVar4 * 0x18 - (int)lVar5));
          uVar4 = *(int *)(param_1 + 1) - 1;
          pvVar3 = (void *)*param_1;
        }
        *(uint *)(param_1 + 1) = uVar4;
        uVar2 = 1;
        pvVar8 = __dest;
        goto joined_r0x00432c80;
      }
      lVar5 = lVar5 + 0x18;
    } while ((ulong)uVar4 * 0x18 != lVar5);
  }
  uVar2 = 0;
joined_r0x00432c80:
  if ((cVar1 == '\b') || (iVar7 == 0)) {
    *param_3 = 0;
    return uVar2;
  }
  uVar6 = (ulong)CONCAT14(cVar1,iVar7);
  iVar7 = (int)((long)pvVar8 - (long)pvVar3 >> 3) * -0x55555555;
  if (((iVar7 < (int)uVar4) && (*(uint5 *)((long)pvVar3 + (long)iVar7 * 0x18) == uVar6)) ||
     ((0 < iVar7 && iVar7 <= (int)uVar4 &&
      (*(uint5 *)((long)pvVar3 + (ulong)(iVar7 - 1) * 0x18) == uVar6)))) {
    *param_3 = 1;
    return uVar2;
  }
  *param_3 = 0;
  return uVar2;
}


