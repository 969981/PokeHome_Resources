/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f4050; name: FUN_.text__005f4050
 */


void FUN__text__005f4050(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long local_48;
  uint local_24;
  
  iVar4 = FUN__text__005f324c(param_2);
  *(int *)((long)param_1 + 0xb4) = iVar4;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  uVar8 = 0x200;
  if (0x200 < iVar4 + 1U) {
    uVar8 = iVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x17) = 0;
  local_24 = uVar8;
  if (param_1[0xf] != 0) {
    uVar5 = FUN__text__005f3254();
    if (uVar5 < uVar8) {
      lVar6 = param_1[0xf];
      param_1[0xf] = 0;
      if (lVar6 == 0) goto LAB__text__005f40cc;
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    lVar6 = param_1[0xf];
    if (param_1[0xf] != 0) goto LAB__text__005f40f8;
  }
LAB__text__005f40cc:
  FUN__text__00163d7c(&local_48,param_1[1],&local_24);
  if (param_1[0xf] != 0) {
    (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
  }
  param_1[0xf] = local_48;
  lVar6 = local_48;
LAB__text__005f40f8:
  FUN__text__005f3280(lVar6,param_2);
  FUN__text__005f3244(param_1[0xf]);
  uVar3 = FUN__text__005f3600();
  *(undefined1 *)((long)param_1 + 0x99) = uVar3;
  *(undefined1 *)((long)param_1 + 0x9b) = 0;
  *(undefined1 *)((long)param_1 + 0xa3) = 0;
  *(undefined4 *)(param_1 + 0x15) = 4;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  uVar7 = FUN__text__005f3244(param_1[0xf]);
  FUN__text__005f3720(uVar7,*(undefined1 *)((long)param_1 + 0x9b));
  if ((char)param_1[0x13] != '\0') {
    lVar6 = 0;
    uVar10 = 0;
    do {
      lVar1 = param_1[0xb] + lVar6;
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x10);
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar1 + 0x18);
      *(char *)(param_1[0xb] + lVar6 + 0x92) = (char)uVar10;
      plVar2 = (long *)(param_1[0xb] + lVar6);
      lVar9 = *plVar2;
      lVar1 = plVar2[3];
      *(long *)(lVar9 + 0x30) = plVar2[2];
      *(int *)(lVar9 + 0x38) = (int)lVar1;
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
      (**(code **)(**(long **)(param_1[0xb] + lVar6) + 0x148))
                (*(long **)(param_1[0xb] + lVar6),0x757d88,0);
      uVar10 = uVar10 + 1;
      plVar2 = (long *)(param_1[0xb] + lVar6);
      lVar6 = lVar6 + 0xa0;
      *(undefined1 *)(*plVar2 + 0x59) = 0xff;
    } while (uVar10 < *(byte *)(param_1 + 0x13));
  }
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined1 *)((long)param_1 + 0x9f) = 0;
  FUN__text__005f47e8(param_1);
  (**(code **)(*param_1 + 0x80))(param_1);
  return;
}


