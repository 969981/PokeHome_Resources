/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00187618; name: FUN_.text__00187618
 */


undefined8 FUN__text__00187618(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  
  if (*(char *)(param_1 + 0x122) == '\0') {
    if (*(char *)(param_1 + 0x120) == '\0') {
      if (*(char *)(param_1 + 0x121) == '\0') {
        if (*(char *)(*(long *)(param_1 + 0x78) + 0x63b) != '\0') {
          uVar4 = FUN__text__00322c10();
          iVar1 = *(int *)(*(long *)(param_1 + 0x78) + 0x63c);
          if (((uVar4 & 1) == 0) && (iVar1 == 4)) {
            FUN__text__00187800(param_1);
            return 0;
          }
          if (iVar1 == 0) {
            FUN__text__00187930(param_1);
            return 0;
          }
          lVar3 = FUN__text__00187470(param_1);
          **(undefined4 **)(lVar3 + 0x60) = *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x63c);
          return 1;
        }
      }
      else {
        uVar4 = FUN__text__001324ec(*(undefined8 *)(param_1 + 0x110));
        if ((uVar4 & 1) != 0) {
          FUN__text__00186264(*(undefined8 *)(param_1 + 0x78));
          *(undefined1 *)(param_1 + 0x121) = 0;
          FUN__text__003277b0(0);
        }
      }
    }
    else {
      uVar4 = FUN__text__001324ec(*(undefined8 *)(param_1 + 0x110));
      if ((uVar4 & 1) != 0) {
        FUN__text__00186264(*(undefined8 *)(param_1 + 0x78));
        *(undefined1 *)(param_1 + 0x120) = 0;
        return 0;
      }
    }
    return 0;
  }
  uVar4 = FUN__text__001324ec(*(undefined8 *)(param_1 + 0x110));
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  iVar1 = FUN__text__00132530(*(undefined8 *)(param_1 + 0x110));
  if (iVar1 == 3) {
    FUN__text__00186264(*(undefined8 *)(param_1 + 0x78));
    *(undefined1 *)(param_1 + 0x122) = 0;
    return 0;
  }
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar5 = (long *)(**(code **)*puVar7)(puVar7);
  plVar6 = (long *)FUN__text__00183c50();
  if (plVar6 != plVar5) {
    do {
      plVar5 = (long *)*plVar5;
    } while (plVar5 != plVar6 && plVar5 != (long *)0x0);
  }
  puVar8 = (undefined4 *)puVar7[2];
  *puVar8 = *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x63c);
  uVar2 = FUN__text__00132530(*(undefined8 *)(param_1 + 0x110));
  puVar8[1] = uVar2;
  return 1;
}


