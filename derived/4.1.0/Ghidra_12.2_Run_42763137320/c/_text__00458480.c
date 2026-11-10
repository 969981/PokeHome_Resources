/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458480; name: thunk_FUN_.text__00458490
 */


void thunk_FUN__text__00458490(ulong *param_1)

{
  int iVar1;
  ulong *puVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  
  puVar4 = (ulong *)*param_1;
  if (puVar4 == (ulong *)0x0) {
LAB__text__00458544:
    puVar2 = (ulong *)param_1[2];
    if (puVar2 == (ulong *)0x0) goto LAB__text__004585c4;
  }
  else {
    do {
      plVar3 = (long *)puVar4[1];
      if (((int)puVar4[3] != 0) && ((char)puVar4[4] != '\0')) {
        *(short *)((long)plVar3 + 0xdc) = *(short *)((long)plVar3 + 0xdc) + -1;
      }
      *(int *)(plVar3 + 0x1a) = (int)plVar3[0x1a] + -1;
      iVar1 = *(int *)((long)plVar3 + 0xbc) + -1;
      *(int *)((long)plVar3 + 0xbc) = iVar1;
      if (iVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN__text__00400fc0(0,plVar3);
        uVar5 = puVar4[2];
      }
      else {
        uVar5 = puVar4[2];
      }
      if (uVar5 != 0) {
        *(undefined4 *)(puVar4 + 3) = 0;
        FUN__text__00400fc0(0);
        puVar4[2] = 0;
        *(undefined4 *)((long)puVar4 + 0x1c) = 0;
      }
      puVar4 = (ulong *)*puVar4;
    } while (puVar4 != (ulong *)0x0);
    puVar4 = (ulong *)*param_1;
    if ((ulong *)*param_1 == (ulong *)0x0) goto LAB__text__00458544;
    do {
      puVar2 = puVar4;
      *param_1 = *puVar2;
      if ((ulong *)param_1[1] == puVar2) {
        param_1[1] = 0;
      }
      *puVar2 = param_1[2];
      param_1[2] = (ulong)puVar2;
      *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + -1;
      puVar4 = (ulong *)*param_1;
    } while ((ulong *)*param_1 != (ulong *)0x0);
  }
  do {
    uVar5 = *puVar2;
    if (puVar2 < param_1[3] || param_1[3] + (ulong)(uint)param_1[4] * 0x28 <= puVar2) {
      FUN__text__00400fc0(0);
    }
    puVar2 = (ulong *)uVar5;
  } while (uVar5 != 0);
LAB__text__004585c4:
  if (param_1[3] != 0) {
    FUN__text__00400fc0(0);
    param_1[3] = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


