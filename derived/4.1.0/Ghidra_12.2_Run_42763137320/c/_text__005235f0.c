/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005235f0; name: FUN_.text__005235f0
 */


void FUN__text__005235f0(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  
  if ((*(char *)(param_1 + 0xc0) != '\0') &&
     (puVar5 = *(undefined8 **)(param_1 + 0x70), puVar5 != (undefined8 *)0x0)) {
    iVar1 = *(int *)(puVar5 + 0xc);
    iVar2 = iVar1 + -1;
    *(int *)(puVar5 + 0xc) = iVar2;
    if (((iVar2 == 0) ||
        ((iVar2 == 1 && (iVar1 != 0 || *(char *)((long)puVar5 + 100) == '\0')) &&
         *(char *)((long)puVar5 + 100) != '\0')) &&
       (FUN__text__004473f0(puVar5), *(int *)(puVar5 + 0xc) == 0)) {
      (**(code **)*puVar5)(puVar5);
      FUN__text__00400fc0(4,puVar5);
    }
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  if ((*(long *)(param_1 + 0xb0) != 0) &&
     (*(undefined8 *)(param_1 + 0xb0) = 0, *(int *)(param_1 + 0x60) != 0)) {
    plVar3 = *(long **)(param_1 + 0x58);
    do {
      plVar7 = plVar3 + 1;
      *(undefined1 *)(*plVar3 + 0x68) = 1;
      plVar3 = plVar7;
    } while (plVar7 != (long *)(*(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x60) * 8));
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x90);
  plVar3 = *(long **)(param_1 + 0x88);
  if (*(uint *)(param_1 + 0x90) != 0) {
    plVar7 = plVar3;
    do {
      lVar6 = *plVar7;
      if (lVar6 != 0) {
        if (*(long *)(lVar6 + 0x40) != 0) {
          *(undefined4 *)(lVar6 + 0x48) = 0;
          FUN__text__00400fc0(9);
          *(undefined8 *)(lVar6 + 0x40) = 0;
          *(undefined4 *)(lVar6 + 0x4c) = 0;
        }
        FUN__text__00529e60(lVar6 + 0x50);
        FUN__text__00400fc0(0xb,lVar6);
        plVar3 = *(long **)(param_1 + 0x88);
        uVar4 = (ulong)*(uint *)(param_1 + 0x90);
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar3 + uVar4);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (plVar3 != (long *)0x0) {
    FUN__text__00400fc0(9);
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  lVar6 = *(long *)(param_1 + 0x70);
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x18) != 0) {
      FUN__text__004932ac(*(long *)(lVar6 + 0x18),0);
      lVar6 = *(long *)(param_1 + 0x70);
    }
    if (*(long *)(lVar6 + 0x50) != 0) {
      FUN__text__0049158c(*(long *)(lVar6 + 0x50),0);
    }
  }
  FUN__text__0050ec40(param_1);
  return;
}


