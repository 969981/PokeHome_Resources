/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005094d0; name: FUN_.text__005094d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005094d0(long *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  
  *param_1 = _DAT_008a41e0 + 0x10;
  lVar10 = DAT_00aebaf0;
  if ((int)param_1[9] != 0 && DAT_00aebaf0 != 0) {
    do {
      if (*(long **)(lVar10 + 0x30) == param_1) {
        *(undefined8 *)(lVar10 + 0x30) = 0;
        *(int *)(param_1 + 9) = (int)param_1[9] + -1;
      }
      lVar10 = *(long *)(lVar10 + 0x10);
    } while (lVar10 != 0);
  }
  if ((int)param_1[5] != 0) {
    puVar9 = (undefined8 *)param_1[4];
    do {
      puVar8 = (undefined8 *)*puVar9;
      iVar2 = *(int *)(puVar8 + 0xc);
      iVar3 = iVar2 + -1;
      *(int *)(puVar8 + 0xc) = iVar3;
      if (((iVar3 == 0) ||
          ((iVar3 == 1 && (iVar2 != 0 || *(char *)((long)puVar8 + 100) == '\0')) &&
           *(char *)((long)puVar8 + 100) != '\0')) &&
         (FUN__text__004473f0(puVar8), *(int *)(puVar8 + 0xc) == 0)) {
        (**(code **)*puVar8)(puVar8);
        FUN__text__00400fc0(4,puVar8);
      }
      puVar9 = puVar9 + 2;
    } while (puVar9 != (undefined8 *)(param_1[4] + (ulong)*(uint *)(param_1 + 5) * 0x10));
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN__text__00507b30(param_1 + 0xb);
  plVar5 = (long *)param_1[0x20];
  uVar6 = (ulong)*(uint *)(param_1 + 0x21);
  if (*(uint *)(param_1 + 0x21) != 0) {
    plVar11 = plVar5;
    do {
      lVar10 = *plVar11;
      if (lVar10 != 0) {
        FUN__text__00507a78(lVar10);
        FUN__text__00400fc0(0xb,lVar10);
        plVar5 = (long *)param_1[0x20];
        uVar6 = (ulong)*(uint *)(param_1 + 0x21);
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar5 + uVar6);
  }
  if (plVar5 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x21) = 0;
    FUN__text__00400fc0(9);
    param_1[0x20] = 0;
    *(undefined4 *)((long)param_1 + 0x10c) = 0;
  }
  FUN__text__00529e60(param_1 + 0x22);
  FUN__text__00507b30(param_1 + 0xb);
  if (param_1[0x11] != 0) {
    *(undefined4 *)(param_1 + 0x12) = 0;
    FUN__text__00400fc0(0xb);
    param_1[0x11] = 0;
    *(undefined4 *)((long)param_1 + 0x94) = 0;
  }
  FUN__text__0051cae0(param_1 + 0xd);
  FUN__text__00509710(param_1 + 4);
  *param_1 = 0x891be0;
  if (param_1[2] == 0) {
    lVar10 = 0;
  }
  else {
    *(long *)(param_1[2] + 0x18) = param_1[3];
    lVar10 = param_1[2];
  }
  piVar4 = _DAT_008a3f68;
  piVar7 = (int *)param_1[3];
  plVar5 = *(long **)(_DAT_008a3f68 + 2);
  piVar1 = _DAT_008a3f68;
  if (*(long **)(_DAT_008a3f68 + 4) != param_1) {
    piVar1 = piVar7;
  }
  *(long *)(piVar1 + 4) = lVar10;
  if (plVar5 == param_1) {
    *(int **)(piVar4 + 2) = piVar7;
  }
  *piVar4 = *piVar4 + -1;
  return;
}


