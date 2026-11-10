/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00310150; name: FUN_.text__00310150
 */


bool FUN__text__00310150(long param_1,uint *param_2)

{
  long lVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_2 == (uint *)0x0) {
    if (*(int *)(*(long *)(param_1 + 0x60) + 0x68) == 0x42454546) {
      bVar5 = false;
      lVar6 = 0x6c;
      uVar7 = 0;
      do {
        lVar1 = param_1 + 0x110 + lVar6;
        uVar3 = (**(code **)(**(long **)(lVar1 + -0x6c) + 0x30))();
        uVar4 = (**(code **)(**(long **)(lVar1 + -0x6c) + 0x28))();
        sVar2 = FUN__text__00596350(uVar4,uVar3);
        if (*(int *)(*(long *)(param_1 + 0x60) + lVar6) != (int)uVar3) {
          return bVar5;
        }
        lVar1 = *(long *)(param_1 + 0x60) + lVar6;
        if ((uint)*(ushort *)(lVar1 + 4) != ((uint)uVar7 & 0xffff)) {
          return bVar5;
        }
        if (*(short *)(lVar1 + 6) != sVar2) {
          return bVar5;
        }
        lVar6 = lVar6 + 8;
        bVar5 = 0x13 < uVar7;
        uVar7 = uVar7 + 1;
      } while (lVar6 != 0x114);
      return bVar5;
    }
  }
  else {
    *param_2 = 0xffffffff;
    if (*(int *)(*(long *)(param_1 + 0x60) + 0x68) == 0x42454546) {
      bVar5 = false;
      lVar6 = 0x6c;
      uVar7 = 0;
      do {
        *param_2 = (uint)uVar7;
        lVar1 = param_1 + 0x110 + lVar6;
        uVar3 = (**(code **)(**(long **)(lVar1 + -0x6c) + 0x30))();
        uVar4 = (**(code **)(**(long **)(lVar1 + -0x6c) + 0x28))();
        sVar2 = FUN__text__00596350(uVar4,uVar3);
        if (*(int *)(*(long *)(param_1 + 0x60) + lVar6) != (int)uVar3) {
          return bVar5;
        }
        lVar1 = *(long *)(param_1 + 0x60) + lVar6;
        if ((uint)*(ushort *)(lVar1 + 4) != ((uint)uVar7 & 0xffff)) {
          return bVar5;
        }
        if (*(short *)(lVar1 + 6) != sVar2) {
          return bVar5;
        }
        lVar6 = lVar6 + 8;
        bVar5 = 0x13 < uVar7;
        uVar7 = uVar7 + 1;
      } while (lVar6 != 0x114);
      return bVar5;
    }
  }
  return false;
}


