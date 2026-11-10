/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a9788; name: FUN_.text__005a9788
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a9788(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 auStack_88 [68];
  int local_44;
  int local_28;
  int local_24;
  
  puVar1 = _DAT_008a5698;
  local_24 = 0;
  uVar5 = *_DAT_008a0448;
  (*(code *)*_DAT_008a5698)(uVar5,0x51,&local_24);
  if (*(ulong *)(param_1 + 0x98) < (ulong)(long)local_24) {
    *(long *)(param_1 + 0x98) = (long)local_24;
  }
  local_28 = 0;
  (*(code *)*puVar1)(uVar5,0x50,&local_28);
  uVar4 = *(ulong *)(param_1 + 0x98);
  uVar3 = (ulong)local_28;
  uVar7 = 0;
  if (uVar3 != 0) {
    uVar7 = uVar4 / uVar3;
  }
  if (uVar4 != uVar7 * uVar3) {
    uVar7 = 0;
    if (uVar3 != 0) {
      uVar7 = ((uVar4 + uVar3) - 1) / uVar3;
    }
    *(ulong *)(param_1 + 0x98) = uVar7 * uVar3;
  }
  local_44 = 0;
  (*(code *)*puVar1)(uVar5,0x56,&local_44);
  if (*(ulong *)(param_1 + 0xa0) < (ulong)(long)local_44) {
    *(long *)(param_1 + 0xa0) = (long)local_44;
  }
  (*(code *)*_DAT_008a56a0)(auStack_88,uVar5);
  (*(code *)*_DAT_008a56a8)(auStack_88);
  (*(code *)*_DAT_008a56b0)(auStack_88,*(undefined8 *)(param_1 + 0x98));
  (*(code *)*_DAT_008a56b8)(auStack_88,*(undefined8 *)(param_1 + 0xa0));
  (*(code *)*_DAT_008a56c0)(param_1 + 0x1e0,auStack_88);
  FUN__text__006ebf24(param_1 + 0x21e0,param_1 + 0x1e0,_DAT_008a0448);
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  if (*(long *)(uVar7 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar6 = *(long **)(param_1 + 8);
  uVar5 = *(undefined8 *)(*_DAT_008a0228 + 0x30);
  *(long **)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = plVar6;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  lVar2 = (**(code **)(*plVar6 + 0x10))(plVar6,0x110,0x10);
  if (lVar2 == 0) {
    (**(code **)(*plVar6 + 0xb8))(plVar6);
  }
  FUN__text__0059fe10(lVar2,0,7,0,uVar5);
  *(long **)(lVar2 + 8) = plVar6;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x110;
  *(undefined8 *)(lVar2 + 0x20) = 0x10;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  if (*(long *)(param_1 + 0x160) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x160) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x160) = lVar2;
  return;
}


