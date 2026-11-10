/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f2f64; name: FUN_.text__005f2f64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f2f64(long *param_1,ushort param_2)

{
  undefined2 *__s;
  long lVar1;
  long *plVar2;
  size_t __n;
  ulong uVar3;
  long *plVar4;
  
  param_1[7] = 0;
  lVar1 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  __n = (ulong)param_2 << 1;
  *param_1 = lVar1 + 0x10;
  uVar3 = tpidr_el0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  plVar2 = *(long **)((uVar3 | 0x18) + *(long *)(uVar3 + 0x98) * 8 + -8);
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  plVar4 = param_1 + 0xb;
  *plVar4 = 0;
  param_1[0xe] = 0;
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  *(undefined2 *)((long)param_1 + 0x7a) = 0;
  *(ushort *)(param_1 + 0xf) = param_2;
  *param_1 = 0x898240;
  param_1[1] = (long)plVar2;
  param_1[9] = 0x898278;
  __s = (undefined2 *)(**(code **)(*plVar2 + 0x10))(plVar2,__n,2);
  if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)((uVar3 | 0x18) + *(long *)(uVar3 + 0x98) * 8) = plVar2;
  lVar1 = *(long *)(uVar3 + 0x98);
  *(long *)(uVar3 + 0x98) = lVar1 + 1;
  if (param_2 != 0) {
    memset(__s,0,__n);
    lVar1 = *(long *)(uVar3 + 0x98) + -1;
  }
  *(long *)(uVar3 + 0x98) = lVar1;
  lVar1 = *plVar4;
  *plVar4 = (long)__s;
  if (lVar1 != 0) {
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],lVar1,param_1[0xd],param_1[0xe]);
    __s = (undefined2 *)param_1[0xb];
  }
  param_1[0xc] = (long)plVar2;
  param_1[0xd] = __n;
  param_1[0xe] = 2;
  if (__s != (undefined2 *)0x0) {
    *__s = 0;
    *(undefined1 *)((long)param_1 + 0x7c) = 1;
  }
  return;
}


