/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c4750; name: FUN_.text__004c4750
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c4750(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar7 = _DAT_008a43d8;
  if (*(int *)(param_1 + 0x58) != 0) {
    puVar9 = *(undefined4 **)(param_1 + 0x50);
    do {
      plVar3 = (long *)*puVar7;
      puVar8 = puVar9 + 1;
      (**(code **)(*plVar3 + 0x50))(plVar3,*puVar9,*(undefined1 *)(param_1 + 0x70));
      puVar9 = puVar8;
    } while (puVar8 != (undefined4 *)
                       (*(long *)(param_1 + 0x50) + (ulong)*(uint *)(param_1 + 0x58) * 4));
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    puVar9 = *(undefined4 **)(param_1 + 0x60);
    do {
      plVar3 = (long *)*puVar7;
      puVar8 = puVar9 + 1;
      (**(code **)(*plVar3 + 0x50))(plVar3,*puVar9,*(undefined1 *)(param_1 + 0x71));
      puVar9 = puVar8;
    } while (puVar8 != (undefined4 *)
                       (*(long *)(param_1 + 0x60) + (ulong)*(uint *)(param_1 + 0x68) * 4));
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  puVar7 = _DAT_008a45f0;
  if (*(int *)(param_1 + 0x48) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x40);
    do {
      puVar6 = puVar5 + 1;
      FUN__text__00434930(*puVar7,*puVar5,param_1);
      puVar5 = puVar6;
    } while (puVar6 != (undefined8 *)
                       (*(long *)(param_1 + 0x40) + (ulong)*(uint *)(param_1 + 0x48) * 8));
  }
  puVar7 = *(undefined8 **)(param_1 + 8);
  if (puVar7 != (undefined8 *)0x0) {
    iVar1 = *(int *)(puVar7 + 0xc);
    iVar2 = iVar1 + -1;
    *(int *)(puVar7 + 0xc) = iVar2;
    if (((iVar2 == 0) ||
        (((iVar2 == 1 && (iVar1 != 0 || *(char *)((long)puVar7 + 100) == '\0')) &&
         (*(char *)((long)puVar7 + 100) != '\0')))) &&
       (FUN__text__004473f0(puVar7), *(int *)(puVar7 + 0xc) == 0)) {
      (**(code **)*puVar7)(puVar7);
      FUN__text__00400fc0(4,puVar7);
      lVar4 = *(long *)(param_1 + 0x50);
      goto joined_r0x004c487c;
    }
  }
  lVar4 = *(long *)(param_1 + 0x50);
joined_r0x004c487c:
  if (lVar4 != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  FUN__text__00400fc0(0x10,param_1);
  return;
}


