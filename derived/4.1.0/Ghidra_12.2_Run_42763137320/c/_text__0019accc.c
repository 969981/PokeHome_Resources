/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019accc; name: FUN_.text__0019accc
 */


void FUN__text__0019accc(long *param_1,undefined8 *param_2,void *param_3,long param_4,
                        undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  void *__src;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  size_t __n;
  undefined8 *__dest;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  uVar8 = param_2[10];
  uVar6 = param_2[1];
  if ((param_4 - uVar8) + param_2[9] <= uVar6 - uVar8) {
    uVar1 = param_2[9] + param_4;
    uVar2 = uVar8 << 3;
    if (4 < uVar8 >> 0x3d) {
      uVar2 = 0xffffffffffffffff;
    }
    if (uVar8 >> 0x3d == 0) {
      uVar2 = (uVar8 << 3) / 5;
    }
    if (uVar6 <= uVar2) {
      uVar2 = uVar6;
    }
    if (uVar1 <= uVar2) {
      uVar1 = uVar2;
    }
    if (uVar1 <= uVar6) {
      lVar10 = param_2[8];
      __dest = (undefined8 *)
               (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,uVar1 * 0x1c,4);
      __src = (void *)param_2[8];
      lVar4 = param_2[9];
      puVar7 = __dest;
      if ((__src != (void *)0x0) && (__dest != (undefined8 *)0x0 && __src != param_3)) {
        memmove(__dest,__src,(long)param_3 - (long)__src);
        puVar7 = (undefined8 *)((long)__dest + ((long)param_3 - (long)__src));
      }
      uVar8 = tpidr_el0;
      uVar8 = uVar8 & 0xffffffffffffe000;
      if (*(long *)(uVar8 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(undefined8 *)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) = *param_2;
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
      uVar3 = *param_5;
      uVar5 = param_5[1];
      uVar9 = param_5[2];
      *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(param_5 + 3);
      *puVar7 = uVar3;
      puVar7[1] = uVar5;
      puVar7[2] = uVar9;
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
      if (((param_3 != (void *)0x0) &&
          (__n = (long)__src + (lVar4 * 0x1c - (long)param_3), __n != 0)) &&
         (puVar7 != (undefined8 *)0x0)) {
        memmove((void *)((long)puVar7 + param_4 * 0x1c),param_3,__n);
      }
      if (__src != (void *)0x0) {
        (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2[8],param_2[10] * 0x1c,4);
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


