/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046b710; name: FUN_.text__0046b710
 */


undefined8 FUN__text__0046b710(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)((long)param_1 + 0x10);
  uVar1 = *(int *)((long)param_1 + 0x14) + param_2;
  pvVar4 = *(void **)((long)param_1 + 8);
  pvVar3 = param_1;
  if (pvVar4 == (void *)0x0) {
    if (1 < uVar1) {
      pvVar3 = (void *)FUN__text__00400f90(0,(ulong)uVar1 << 3,1);
      if (pvVar3 == (void *)0x0) {
        return 0;
      }
      pvVar4 = *(void **)((long)param_1 + 8);
      if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar3)) {
        if (uVar2 != 0) {
          if (uVar2 == 1) {
            uVar5 = 0;
          }
          else {
            uVar5 = 0;
            do {
              lVar6 = uVar5 * 8;
              uVar5 = uVar5 + 2;
              *(undefined8 *)((long)pvVar3 + lVar6) =
                   *(undefined8 *)(*(long *)((long)param_1 + 8) + lVar6);
              ((undefined8 *)((long)pvVar3 + lVar6))[1] =
                   *(undefined8 *)(*(long *)((long)param_1 + 8) + lVar6 + 8);
            } while (((ulong)uVar2 & 0xfffffffe) != uVar5);
          }
          if ((uVar2 & 1) != 0) {
            *(undefined8 *)((long)pvVar3 + uVar5 * 8) =
                 *(undefined8 *)(*(long *)((long)param_1 + 8) + uVar5 * 8);
          }
          pvVar4 = *(void **)((long)param_1 + 8);
        }
        if (pvVar4 != param_1) {
          FUN__text__00400fc0(0);
        }
      }
    }
  }
  else if (1 < uVar1) {
    lVar6 = (ulong)uVar1 << 3;
    if (pvVar4 == param_1) {
      pvVar3 = (void *)FUN__text__00400f90(0,lVar6,1);
      if (pvVar3 == (void *)0x0) {
        return 0;
      }
      memcpy(pvVar3,param_1,((ulong)uVar2 & 0x1fffffff) << 3);
    }
    else {
      pvVar3 = (void *)FUN__text__00400fb0(0,pvVar4,lVar6,1);
      if (pvVar3 == (void *)0x0) {
        return 0;
      }
    }
  }
  *(void **)((long)param_1 + 8) = pvVar3;
  *(uint *)((long)param_1 + 0x14) = uVar1;
  return 1;
}


