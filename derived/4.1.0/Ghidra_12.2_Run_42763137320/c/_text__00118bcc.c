/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00118bcc; name: FUN_.text__00118bcc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00118bcc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  
  plVar7 = *(long **)(param_1 + 0x408);
  lVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,0xf0,0x10);
  uVar8 = tpidr_el0;
  uVar8 = uVar8 & 0xffffffffffffe000;
  if (*(long *)(uVar8 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) = plVar7;
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
  FUN__text__0011a198();
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
  plVar9 = *(long **)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = lVar5;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
    (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
              (*(long **)(param_1 + 0x58),plVar9,*(undefined8 *)(param_1 + 0x60),
               *(undefined8 *)(param_1 + 0x68));
    lVar5 = *(long *)(param_1 + 0x50);
  }
  *(long **)(param_1 + 0x58) = plVar7;
  *(undefined8 *)(param_1 + 0x60) = 0xf0;
  *(undefined8 *)(param_1 + 0x68) = 0x10;
  pcVar6 = *(code **)(lVar5 + 0x18);
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x20) = 0;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    *(undefined8 *)(lVar5 + 0x18) = 0;
    (*pcVar6)(lVar5 + 0x30);
  }
  uVar4 = _DAT_0089feb8;
  uVar3 = _DAT_0089feb0;
  uVar2 = _DAT_0089fea8;
  uVar1 = _DAT_0089fea0;
  *(long *)(lVar5 + 0x30) = param_1;
  *(undefined8 *)(lVar5 + 0x38) = uVar1;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  uVar1 = _DAT_0089fec0;
  *(undefined8 *)(lVar5 + 0x10) = uVar2;
  *(undefined8 *)(lVar5 + 0x18) = uVar3;
  *(undefined8 *)(lVar5 + 0x20) = uVar4;
  *(undefined8 *)(lVar5 + 0x28) = uVar1;
  return;
}


