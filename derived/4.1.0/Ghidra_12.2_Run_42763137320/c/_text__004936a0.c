/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004936a0; name: FUN_.text__004936a0
 */


undefined8 FUN__text__004936a0(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)((long)param_1 + 0x28);
  uVar1 = *(int *)((long)param_1 + 0x2c) + param_2;
  pvVar3 = param_1;
  if (*(void **)((long)param_1 + 0x20) == (void *)0x0) {
    if (4 < uVar1) {
      pvVar3 = (void *)FUN__text__00400f90(4,(ulong)uVar1 << 3,0x10);
      if (pvVar3 == (void *)0x0) {
        return 0;
      }
      pvVar4 = *(void **)((long)param_1 + 0x20);
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
                   *(undefined8 *)(*(long *)((long)param_1 + 0x20) + lVar6);
              ((undefined8 *)((long)pvVar3 + lVar6))[1] =
                   *(undefined8 *)(*(long *)((long)param_1 + 0x20) + lVar6 + 8);
            } while (((ulong)uVar2 & 0xfffffffe) != uVar5);
          }
          if ((uVar2 & 1) != 0) {
            *(undefined8 *)((long)pvVar3 + uVar5 * 8) =
                 *(undefined8 *)(*(long *)((long)param_1 + 0x20) + uVar5 * 8);
          }
          pvVar4 = *(void **)((long)param_1 + 0x20);
        }
        if (pvVar4 != param_1) {
          FUN__text__00400fc0(4);
        }
      }
    }
  }
  else if (4 < uVar1) {
    if (*(void **)((long)param_1 + 0x20) == param_1) {
      pvVar3 = (void *)FUN__text__00400f90(4,(ulong)uVar1 << 3,0x10);
      if (pvVar3 == (void *)0x0) {
        return 0;
      }
      memcpy(pvVar3,param_1,((ulong)uVar2 & 0x1fffffff) << 3);
    }
    else {
      pvVar3 = (void *)FUN__text__00400fb0();
      if (pvVar3 == (void *)0x0) {
        return 0;
      }
    }
  }
  *(void **)((long)param_1 + 0x20) = pvVar3;
  *(uint *)((long)param_1 + 0x2c) = uVar1;
  return 1;
}


