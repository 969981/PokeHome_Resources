/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f2de8; name: FUN_.text__005f2de8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f2de8(long *param_1,undefined8 param_2)

{
  ushort uVar1;
  ulong uVar2;
  short sVar3;
  void *__s;
  long lVar4;
  long *plVar5;
  size_t __n;
  long *plVar6;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar4 = _DAT_0089f690;
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = lVar4 + 0x10;
  if ((uVar2 == 0) || (*(long *)(uVar2 + 0x98) == 0)) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x10);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  plVar6 = param_1 + 0xb;
  *plVar6 = 0;
  lVar4 = _DAT_008a5c78;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  param_1[9] = lVar4 + 0x48;
  *param_1 = lVar4 + 0x10;
  param_1[1] = (long)plVar5;
  sVar3 = FUN__text__005f3410(param_2);
  uVar1 = sVar3 + 1;
  *(short *)((long)param_1 + 0x7a) = sVar3;
  *(ushort *)(param_1 + 0xf) = uVar1;
  __n = (ulong)uVar1 << 1;
  __s = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,__n,2);
  if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = plVar5;
  lVar4 = *(long *)(uVar2 + 0x98);
  *(long *)(uVar2 + 0x98) = lVar4 + 1;
  if (uVar1 != 0) {
    memset(__s,0,__n);
    lVar4 = *(long *)(uVar2 + 0x98) + -1;
  }
  *(long *)(uVar2 + 0x98) = lVar4;
  lVar4 = *plVar6;
  *plVar6 = (long)__s;
  if (lVar4 != 0) {
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],lVar4,param_1[0xd],param_1[0xe]);
    __s = (void *)param_1[0xb];
  }
  param_1[0xc] = (long)plVar5;
  param_1[0xd] = __n;
  param_1[0xe] = 2;
  if (__s != (void *)0x0) {
    FUN__text__005f3460(__s,param_2,(short)param_1[0xf]);
    *(undefined1 *)((long)param_1 + 0x7c) = 1;
  }
  return;
}


