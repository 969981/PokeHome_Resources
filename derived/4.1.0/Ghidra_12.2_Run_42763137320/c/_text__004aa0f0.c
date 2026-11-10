/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004aa0f0; name: FUN_.text__004aa0f0
 */


void FUN__text__004aa0f0(undefined8 *param_1,long *param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *__dest;
  
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)(param_1 + 1) != 0) {
    plVar6 = (long *)*param_1;
    plVar5 = (long *)0x0;
    iVar4 = -1;
    plVar7 = plVar6;
    do {
      if (*(char *)((long)plVar7 + 0xc) == '\x02') {
        lVar8 = plVar7[2];
        if ((lVar8 == 0) || (*(char *)(lVar8 + 0x30) == '\0')) {
          cVar1 = *(char *)((long)plVar7 + 0xd);
          goto joined_r0x004aa178;
        }
      }
      else {
        lVar8 = 0;
        cVar1 = *(char *)((long)plVar7 + 0xd);
joined_r0x004aa178:
        if ((cVar1 == '\0') && (iVar4 < (int)plVar7[1])) {
          *param_2 = lVar8;
          param_2[1] = *plVar7;
          *(int *)(param_2 + 2) = (int)plVar7[1];
          iVar4 = (int)plVar7[1];
          plVar6 = (long *)*param_1;
          uVar2 = (ulong)*(uint *)(param_1 + 1);
          plVar5 = plVar7;
        }
      }
      plVar7 = plVar7 + 3;
    } while (plVar7 != plVar6 + uVar2 * 3);
    if (plVar5 != (long *)0x0) {
      *(short *)((long)plVar5 + 0xe) = *(short *)((long)plVar5 + 0xe) + 1;
      return;
    }
  }
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  iVar4 = *(int *)(param_1 + 2);
  *(int *)(param_1 + 2) = iVar4 + -1;
  if ((iVar4 + -1 == 0) && (uVar2 = (ulong)*(uint *)(param_1 + 1), *(uint *)(param_1 + 1) != 0)) {
    puVar3 = (undefined8 *)*param_1;
    __dest = puVar3;
    do {
      while (*(char *)((long)__dest + 0xc) == '\x01') {
        FUN__text__00400fc0(*(undefined4 *)(__dest + 2),*__dest);
        uVar2 = (ulong)(*(int *)(param_1 + 1) - 1);
        puVar3 = (undefined8 *)*param_1;
        if (__dest < puVar3 + uVar2 * 3) {
          memmove(__dest,__dest + 3,(ulong)(uint)((int)(puVar3 + uVar2 * 3) - (int)__dest));
          uVar2 = (ulong)(*(int *)(param_1 + 1) - 1);
          puVar3 = (undefined8 *)*param_1;
        }
        *(int *)(param_1 + 1) = (int)uVar2;
        if (__dest == puVar3 + uVar2 * 3) {
          return;
        }
      }
      __dest = __dest + 3;
    } while (__dest != puVar3 + uVar2 * 3);
  }
  return;
}


