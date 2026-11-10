/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d8118; name: FUN_.text__003d8118
 */


undefined8 FUN__text__003d8118(long *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  int iVar3;
  void *__s1;
  size_t sVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulong *puVar8;
  ulong uVar9;
  size_t __n_00;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined1 auStack_128 [200];
  
  if (200 < param_3) {
    return 0;
  }
  lVar12 = param_1[1];
  if (lVar12 == 0) {
    return 0;
  }
  if (param_3 == 0) {
LAB__text__003d81f4:
    uVar6 = 1;
  }
  else {
    __s1 = *(void **)(lVar12 + 0x208);
    pvVar7 = *(void **)(lVar12 + 0x210);
    if (__s1 == pvVar7) {
      (**(code **)(*param_1 + 0x10))(param_1);
      __s1 = *(void **)(lVar12 + 0x208);
      pvVar7 = *(void **)(lVar12 + 0x210);
      if (__s1 != pvVar7) goto LAB__text__003d8188;
    }
    else {
LAB__text__003d8188:
      if (pvVar7 < (void *)((long)__s1 + param_3)) {
        __n_00 = (long)pvVar7 - (long)__s1;
        iVar3 = memcmp(__s1,param_2,__n_00);
        if (iVar3 == 0) {
          lVar10 = *(long *)(lVar12 + 0x220);
          __n = param_3 - __n_00;
          lVar5 = *(long *)(lVar10 + 8);
          lVar2 = *(long *)(lVar10 + 0x10);
          if ((long)__n < 0) {
            if (*(int *)(lVar10 + 0x3c) == 0) {
              sVar4 = 0;
              *(undefined4 *)(lVar10 + 0x3c) = 0x16;
            }
            else {
              sVar4 = 0;
            }
          }
          else if (*(ulong *)(lVar10 + 0x18) < lVar2 + __n) {
            sVar4 = FUN__text__003d65e0(lVar10,auStack_128,__n);
          }
          else {
            memcpy(auStack_128,(void *)(*(long *)(lVar10 + 0x28) + lVar2),__n);
            *(size_t *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + __n;
            sVar4 = __n;
          }
          FUN__text__003d6a10(*(undefined8 *)(lVar12 + 0x220));
          FUN__text__003d6864(*(undefined8 *)(lVar12 + 0x220),0x2c8);
          plVar11 = *(long **)(lVar12 + 0x220);
          puVar8 = (ulong *)(plVar11 + 2);
          lVar5 = (lVar2 + lVar5) - (plVar11[1] + *puVar8);
          if (lVar5 < 0) {
            if (*(int *)((long)plVar11 + 0x3c) == 0) {
              *(undefined4 *)((long)plVar11 + 0x3c) = 0x16;
            }
          }
          else {
            uVar9 = plVar11[3];
            uVar1 = lVar5 + *puVar8;
            if (uVar1 < uVar9 || uVar1 - uVar9 == 0) {
              *puVar8 = uVar1;
            }
            else {
              *puVar8 = 0;
              plVar11[3] = 0;
              plVar11[1] = uVar9 + plVar11[1];
              lVar5 = (**(code **)(*plVar11 + 0x20))(plVar11,uVar1 - uVar9);
              plVar11[1] = plVar11[1] + lVar5;
            }
          }
          if ((sVar4 == __n) &&
             (iVar3 = memcmp(auStack_128,(void *)((long)param_2 + __n_00),__n), iVar3 == 0)) {
            *(undefined8 *)(lVar12 + 0x208) = *(undefined8 *)(lVar12 + 0x210);
            (**(code **)(*param_1 + 0x10))(param_1);
            *(size_t *)(lVar12 + 0x208) = *(long *)(lVar12 + 0x208) + __n;
            goto LAB__text__003d81f4;
          }
        }
      }
      else {
        iVar3 = memcmp(__s1,param_2,param_3);
        if (iVar3 == 0) {
          *(void **)(lVar12 + 0x208) = (void *)((long)__s1 + param_3);
          goto LAB__text__003d81f4;
        }
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}


