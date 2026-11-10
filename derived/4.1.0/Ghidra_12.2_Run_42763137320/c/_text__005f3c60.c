/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f3c60; name: FUN_.text__005f3c60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f3c60(long *param_1,long *param_2,ulong param_3,undefined1 param_4,long param_5,
                        undefined1 param_6)

{
  long lVar1;
  long lVar2;
  void *__s;
  ulong uVar3;
  long *plVar4;
  size_t __n;
  long *plVar5;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = _DAT_0089f690 + 0x10;
  uVar3 = tpidr_el0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((uVar3 == 0) || (*(long *)(uVar3 + 0x98) == 0)) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x10);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  lVar2 = _DAT_008a03f0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = param_5;
  plVar5 = param_1 + 0xb;
  *plVar5 = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[9] = lVar2 + 0xb0;
  *param_1 = lVar2 + 0x10;
  param_1[1] = (long)plVar4;
  lVar2 = *param_2;
  param_1[0x11] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    plVar4 = (long *)param_1[1];
  }
  *(char *)(param_1 + 0x13) = (char)param_3;
  *(undefined4 *)((long)param_1 + 0x99) = 0;
  param_1[0x12] = 0x4000600000000;
  *(undefined1 *)((long)param_1 + 0x9d) = param_4;
  *(undefined4 *)((long)param_1 + 0x9e) = 0;
  *(undefined2 *)((long)param_1 + 0xa2) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = param_6;
  __n = ((param_3 & 0xff) + (param_3 & 0xff) * 4) * 0x20;
  *(undefined2 *)((long)param_1 + 0xa5) = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  *(undefined8 *)((long)param_1 + 0xe2) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0x10a) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)((long)param_1 + 0xb7) = 0;
  __s = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,__n,0x10);
  if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = plVar4;
  lVar2 = *(long *)(uVar3 + 0x98);
  *(long *)(uVar3 + 0x98) = lVar2 + 1;
  if ((param_3 & 0xff) != 0) {
    memset(__s,0,__n);
    lVar2 = *(long *)(uVar3 + 0x98) + -1;
  }
  *(long *)(uVar3 + 0x98) = lVar2;
  lVar2 = *plVar5;
  *plVar5 = (long)__s;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],lVar2,param_1[0xd],param_1[0xe]);
    __s = (void *)param_1[0xb];
  }
  param_1[0xc] = (long)plVar4;
  param_1[0xd] = __n;
  param_1[0xe] = 0x10;
  if (__s != (void *)0x0) {
    if ((param_3 & 0xff) != 0) {
      if (((uint)param_3 & 0xff) == 1) {
        uVar3 = 0;
      }
      else {
        lVar2 = 0;
        uVar3 = 0;
        do {
          uVar3 = uVar3 + 2;
          *(undefined8 *)(*plVar5 + lVar2) = 0;
          lVar1 = *plVar5 + lVar2;
          lVar2 = lVar2 + 0x140;
          *(undefined8 *)(lVar1 + 0xa0) = 0;
        } while ((param_3 & 0xfe) != uVar3);
      }
      if ((param_3 & 1) != 0) {
        *(undefined8 *)(*plVar5 + uVar3 * 0xa0) = 0;
      }
    }
    *(undefined1 *)((long)param_1 + 0xa5) = *(undefined1 *)((long)param_1 + 0x9d);
    *(undefined1 *)((long)param_1 + 0xa6) = *(undefined1 *)((long)param_1 + 0xa4);
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  return;
}


