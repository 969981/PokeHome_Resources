/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001de570; name: FUN_.text__001de570
 */


void FUN__text__001de570(long *param_1,undefined8 *param_2,void *param_3,long param_4,
                        undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  void *__src;
  long lVar3;
  size_t __n;
  undefined8 *__dest;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = param_2[10];
  uVar4 = param_2[1];
  if ((param_4 - uVar6) + param_2[9] <= uVar4 - uVar6) {
    uVar1 = param_2[9] + param_4;
    uVar2 = uVar6 << 3;
    if (4 < uVar6 >> 0x3d) {
      uVar2 = 0xffffffffffffffff;
    }
    if (uVar6 >> 0x3d == 0) {
      uVar2 = (uVar6 << 3) / 5;
    }
    if (uVar4 <= uVar2) {
      uVar2 = uVar4;
    }
    if (uVar1 <= uVar2) {
      uVar1 = uVar2;
    }
    if (uVar1 <= uVar4) {
      lVar7 = param_2[8];
      __dest = (undefined8 *)(**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,uVar1 << 3,4);
      __src = (void *)param_2[8];
      lVar3 = param_2[9];
      puVar5 = __dest;
      if (((__src != (void *)0x0) && (__dest != (undefined8 *)0x0)) && (__src != param_3)) {
        memmove(__dest,__src,(long)param_3 - (long)__src);
        puVar5 = (undefined8 *)((long)__dest + ((long)param_3 - (long)__src));
      }
      uVar6 = tpidr_el0;
      uVar6 = uVar6 & 0xffffffffffffe000;
      if (*(long *)(uVar6 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(undefined8 *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = *param_2;
      *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
      *puVar5 = *param_5;
      *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
      if ((param_3 != (void *)0x0) && (__n = (long)__src + (lVar3 * 8 - (long)param_3), __n != 0)) {
        memmove(puVar5 + param_4,param_3,__n);
      }
      if (__src != (void *)0x0) {
        (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2[8],param_2[10] << 3,4);
      }
      param_2[10] = uVar1;
      param_2[8] = __dest;
      param_2[9] = param_2[9] + param_4;
      *param_1 = (long)__dest + ((long)param_3 - lVar7);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


