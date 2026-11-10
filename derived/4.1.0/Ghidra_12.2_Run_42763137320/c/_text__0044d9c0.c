/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044d9c0; name: FUN_.text__0044d9c0
 */


undefined8 FUN__text__0044d9c0(void *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  
  uVar4 = *(uint *)((long)param_1 + 0x28);
  uVar1 = *(int *)((long)param_1 + 0x2c) + param_2;
  pvVar7 = param_1;
  if (*(void **)((long)param_1 + 0x20) == (void *)0x0) {
    if (1 < uVar1) {
      pvVar7 = (void *)FUN__text__00400f90(4,(ulong)uVar1 * 0x18,0x10);
      if (pvVar7 == (void *)0x0) {
        return 0;
      }
      pvVar8 = *(void **)((long)param_1 + 0x20);
      if ((pvVar8 != (void *)0x0) && (pvVar8 != pvVar7)) {
        if (uVar4 != 0) {
          lVar9 = 0;
          do {
            puVar2 = (undefined8 *)((long)pvVar7 + lVar9);
            *puVar2 = 0xffffffffffffffff;
            *(undefined4 *)(puVar2 + 1) = 0;
            *(undefined4 *)(puVar2 + 2) = 0x3f800000;
            puVar3 = (undefined8 *)(*(long *)((long)param_1 + 0x20) + lVar9);
            lVar9 = lVar9 + 0x18;
            uVar5 = *puVar3;
            uVar6 = puVar3[1];
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
            *puVar2 = uVar5;
            puVar2[1] = uVar6;
          } while ((ulong)uVar4 * 0x18 != lVar9);
          pvVar8 = *(void **)((long)param_1 + 0x20);
        }
        if (pvVar8 != param_1) {
          FUN__text__00400fc0(4);
        }
      }
    }
  }
  else if (1 < uVar1) {
    if (*(void **)((long)param_1 + 0x20) == param_1) {
      pvVar7 = (void *)FUN__text__00400f90(4,(ulong)uVar1 * 0x18,0x10);
      if (pvVar7 == (void *)0x0) {
        return 0;
      }
      memcpy(pvVar7,param_1,(ulong)uVar4 * 0x18 & 0xfffffff8);
    }
    else {
      pvVar7 = (void *)FUN__text__00400fb0();
      if (pvVar7 == (void *)0x0) {
        return 0;
      }
    }
  }
  *(void **)((long)param_1 + 0x20) = pvVar7;
  *(uint *)((long)param_1 + 0x2c) = uVar1;
  return 1;
}


