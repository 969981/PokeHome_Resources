/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00416f00; name: FUN_.text__00416f00
 */


/* WARNING: Removing unreachable block (ram,0x00417090) */

bool FUN__text__00416f00(long *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  size_t __n;
  int *piVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  undefined8 *__dest;
  uint uVar13;
  void *__s;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 auStack_460 [127];
  undefined4 uStack_64;
  
  puVar14 = (uint *)((long)auStack_460 +
                    (0x400 - ((-(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_4 << 2)
                              + 0xf & 0xfffffffffffffff0)));
  if (0 < (int)param_4) {
    uVar16 = 0;
    uVar15 = (ulong)param_4;
    uVar13 = 0;
    do {
      uVar6 = FUN__text__0045b390(*(undefined8 *)(*param_1 + (ulong)(param_3 + (int)uVar16) * 8),
                                  param_2);
      puVar14[uVar16] = uVar6;
      uVar16 = uVar16 + 1;
      if (uVar6 <= uVar13) {
        uVar6 = uVar13;
      }
      uVar13 = uVar6;
    } while (uVar15 != uVar16);
    if (uVar6 != 0) {
      __dest = (undefined8 *)((long)puVar14 - ((long)(int)param_4 * 8 + 0xfU & 0xfffffffffffffff0));
      memcpy(__dest,(void *)(*param_1 + (ulong)param_3 * 8),(long)(int)param_4 * 8);
      uVar13 = uVar6 + 1;
      __n = (ulong)uVar13 * 4;
      uVar16 = __n + 0xf & 0x7fffffff0;
      __s = (void *)((long)__dest - uVar16);
      piVar17 = (int *)((long)__s - uVar16);
      memset(__s,0,__n);
      if (0 < (int)param_4) {
        if (param_4 == 1) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          do {
            puVar2 = puVar14 + uVar16;
            uVar16 = uVar16 + 2;
            lVar11 = (ulong)*puVar2 * 4;
            lVar8 = (ulong)puVar2[1] * 4;
            *(int *)((long)__s + lVar11) = *(int *)((long)__s + lVar11) + 1;
            *(int *)((long)__s + lVar8) = *(int *)((long)__s + lVar8) + 1;
          } while ((uVar15 & 0xfffffffe) != uVar16);
        }
        if ((param_4 & 1) != 0) {
          *(int *)((long)__s + (ulong)puVar14[uVar16] * 4) =
               *(int *)((long)__s + (ulong)puVar14[uVar16] * 4) + 1;
        }
      }
      *piVar17 = 0;
      if (1 < uVar13) {
        uVar16 = (ulong)uVar13 - 1;
        if (uVar13 == 2) {
          iVar7 = 0;
          lVar8 = 1;
        }
        else {
          iVar7 = 0;
          piVar12 = (int *)((long)__s + 4);
          uVar1 = 0;
          piVar5 = piVar17;
          do {
            uVar9 = uVar1;
            iVar3 = piVar12[-1];
            iVar4 = *piVar12;
            uVar1 = uVar9 + 2;
            piVar12 = piVar12 + 2;
            piVar5[1] = iVar3 + iVar7;
            iVar7 = iVar4 + iVar3 + iVar7;
            piVar5[2] = iVar7;
            piVar5 = piVar5 + 2;
          } while ((uVar16 & 0xfffffffffffffffe) != uVar1);
          lVar8 = uVar9 + 3;
          if ((uVar16 & 1) == 0) goto LAB__text__004170f0;
        }
        piVar17[lVar8] = *(int *)((long)__s + lVar8 * 4 + -4) + iVar7;
      }
LAB__text__004170f0:
      if ((int)param_4 < 1) {
        return uVar6 != 0;
      }
      do {
        uVar15 = uVar15 - 1;
        uVar10 = *__dest;
        lVar8 = *param_1;
        iVar7 = piVar17[*puVar14];
        piVar17[*puVar14] = iVar7 + 1;
        *(undefined8 *)(lVar8 + (ulong)(iVar7 + param_3) * 8) = uVar10;
        __dest = __dest + 1;
        puVar14 = puVar14 + 1;
      } while (uVar15 != 0);
      return uVar6 != 0;
    }
  }
  return false;
}


