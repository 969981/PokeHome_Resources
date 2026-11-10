/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c95c0; name: FUN_.text__003c95c0
 */


void FUN__text__003c95c0(long *param_1,undefined8 *param_2,void *param_3,long param_4,
                        undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  void *__src;
  long lVar3;
  undefined8 uVar4;
  size_t __n;
  undefined8 *__dest;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  
  uVar7 = param_2[10];
  uVar5 = param_2[1];
  if ((param_4 - uVar7) + param_2[9] <= uVar5 - uVar7) {
    uVar1 = param_2[9] + param_4;
    uVar2 = uVar7 << 3;
    if (4 < uVar7 >> 0x3d) {
      uVar2 = 0xffffffffffffffff;
    }
    if (uVar7 >> 0x3d == 0) {
      uVar2 = (uVar7 << 3) / 5;
    }
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    if (uVar1 <= uVar2) {
      uVar1 = uVar2;
    }
    if (uVar1 <= uVar5) {
      lVar8 = param_2[8];
      __dest = (undefined8 *)(**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,uVar1 << 4,8);
      __src = (void *)param_2[8];
      lVar3 = param_2[9];
      puVar6 = __dest;
      if (((__src != (void *)0x0) && (__dest != (undefined8 *)0x0)) && (__src != param_3)) {
        memmove(__dest,__src,(long)param_3 - (long)__src);
        puVar6 = (undefined8 *)((long)__dest + ((long)param_3 - (long)__src));
      }
      uVar7 = tpidr_el0;
      uVar7 = uVar7 & 0xffffffffffffe000;
      if (*(long *)(uVar7 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(undefined8 *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = *param_2;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      uVar4 = param_5[1];
      *puVar6 = *param_5;
      puVar6[1] = uVar4;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
      if (((param_3 != (void *)0x0) &&
          (__n = (long)__src + (lVar3 * 0x10 - (long)param_3), __n != 0)) &&
         (puVar6 != (undefined8 *)0x0)) {
        memmove(puVar6 + param_4 * 2,param_3,__n);
      }
      if (__src != (void *)0x0) {
        (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2[8],param_2[10] << 4,8);
      }
      param_2[10] = uVar1;
      param_2[8] = __dest;
      param_2[9] = param_2[9] + param_4;
      *param_1 = (long)__dest + ((long)param_3 - lVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


