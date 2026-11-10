/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029cca0; name: FUN_.text__0029cca0
 */


void FUN__text__0029cca0(long *param_1,undefined8 *param_2,void *param_3,long param_4,
                        undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  void *__src;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  size_t __n;
  undefined8 *__dest;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  
  uVar9 = param_2[10];
  uVar7 = param_2[1];
  if ((param_4 - uVar9) + param_2[9] <= uVar7 - uVar9) {
    uVar1 = param_2[9] + param_4;
    uVar2 = uVar9 << 3;
    if (4 < uVar9 >> 0x3d) {
      uVar2 = 0xffffffffffffffff;
    }
    if (uVar9 >> 0x3d == 0) {
      uVar2 = (uVar9 << 3) / 5;
    }
    if (uVar7 <= uVar2) {
      uVar2 = uVar7;
    }
    if (uVar1 <= uVar2) {
      uVar1 = uVar2;
    }
    if (uVar1 <= uVar7) {
      lVar10 = param_2[8];
      __dest = (undefined8 *)(**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,uVar1 << 5,8);
      __src = (void *)param_2[8];
      lVar4 = param_2[9];
      puVar8 = __dest;
      if (((__src != (void *)0x0) && (__dest != (undefined8 *)0x0)) && (__src != param_3)) {
        memmove(__dest,__src,(long)param_3 - (long)__src);
        puVar8 = (undefined8 *)((long)__dest + ((long)param_3 - (long)__src));
      }
      uVar9 = tpidr_el0;
      uVar9 = uVar9 & 0xffffffffffffe000;
      if (*(long *)(uVar9 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(undefined8 *)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = *param_2;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      uVar3 = *param_5;
      uVar5 = param_5[1];
      uVar6 = param_5[3];
      puVar8[2] = param_5[2];
      puVar8[3] = uVar6;
      *puVar8 = uVar3;
      puVar8[1] = uVar5;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
      if (((param_3 != (void *)0x0) &&
          (__n = (long)__src + (lVar4 * 0x20 - (long)param_3), __n != 0)) &&
         (puVar8 != (undefined8 *)0x0)) {
        memmove(puVar8 + param_4 * 4,param_3,__n);
      }
      if (__src != (void *)0x0) {
        (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2[8],param_2[10] << 5,8);
      }
      param_2[10] = uVar1;
      param_2[8] = __dest;
      param_2[9] = param_2[9] + param_4;
      *param_1 = (long)__dest + ((long)param_3 - lVar10);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


